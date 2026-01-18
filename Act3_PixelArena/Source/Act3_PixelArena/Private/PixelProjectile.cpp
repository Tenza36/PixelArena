#include "PixelProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"

APixelProjectile::APixelProjectile()
{
    // El proyectil debe replicarse para que todos lo vean en red
    bReplicates = true;
    SetReplicateMovement(true);

    // 1. Configurar colisión
    CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    CollisionComp->InitSphereRadius(15.0f);

    // Usamos el perfil "Projectile" o "BlockAllDynamic" para detectar impactos
    CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");

    // Registro del evento de hit
    CollisionComp->OnComponentHit.AddDynamic(this, &APixelProjectile::OnHit);

    // La esfera es la raíz para que la física del ProjectileMovement funcione correctamente
    RootComponent = CollisionComp;

    // 2. Configurar visuales
    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    MeshComp->SetupAttachment(RootComponent);
    MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // La malla es solo visual

    // 3. Configurar movimiento físico
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    ProjectileMovement->UpdatedComponent = CollisionComp;
    ProjectileMovement->InitialSpeed = 3000.f;
    ProjectileMovement->MaxSpeed = 3000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;
    ProjectileMovement->ProjectileGravityScale = 0.0f; // Disparo recto sin caída

    // Inicialización de valores de combate
    DamageValue = 20.0f;
    InitialLifeSpan = 3.0f; // El proyectil se destruye solo si no choca con nada
}

void APixelProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    // 1. Verificamos que el actor golpeado sea válido y no seamos nosotros ni nuestro dueño
    if (OtherActor && (OtherActor != this) && (OtherActor != GetOwner()))
    {
        // Confirmación visual de impacto en los logs/pantalla
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("Impacto con: %s"), *OtherActor->GetName()));
        }

        // 2. Aplicación de daño autoritativa (Solo ocurre en el Servidor)
        if (HasAuthority())
        {
            UGameplayStatics::ApplyDamage(
                OtherActor,
                DamageValue,
                GetInstigatorController(), // El controlador del jugador que disparó
                this,
                UDamageType::StaticClass()
            );

            // Destruimos el proyectil tras el impacto exitoso
            Destroy();
        }
    }
} 
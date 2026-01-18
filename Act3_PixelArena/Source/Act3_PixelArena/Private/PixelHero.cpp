#include "PixelHero.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PixelProjectile.h"
#include "DrawDebugHelpers.h"

APixelHero::APixelHero()
{
    // --- RED Y REPLICACIÓN ---
    bReplicates = true;
    SetReplicateMovement(true);

    // --- CÁMARA (ESTILO TOP-DOWN INDEPENDIENTE) ---
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 800.f;
    CameraBoom->bDoCollisionTest = false;

    // Bloqueamos la herencia para que la cámara NO gire con el personaje
    CameraBoom->bUsePawnControlRotation = false;
    CameraBoom->bInheritPitch = false;
    CameraBoom->bInheritYaw = false;
    CameraBoom->bInheritRoll = false;
    CameraBoom->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));

    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false;

    // --- ATRIBUTOS ---
    CurrentHealth = 100.f;
    // NOTA: DamageValue se eliminó de aquí porque pertenece a PixelProjectile.cpp

    // --- MOVIMIENTO Y ROTACIÓN ---
    if (GetCharacterMovement())
    {
        GetCharacterMovement()->bOrientRotationToMovement = false;
        GetCharacterMovement()->bConstrainToPlane = true;
        GetCharacterMovement()->bSnapToPlaneAtStart = true;
    }

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;
}

void APixelHero::BeginPlay()
{
    Super::BeginPlay();

    if (HasAuthority())
    {
        CurrentHealth = 100.f;
    }
}

void APixelHero::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(APixelHero, CurrentHealth);
}

void APixelHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &APixelHero::StartShooting);
}

// --- SISTEMA DE COMBATE (PROYECTILES) ---

void APixelHero::StartShooting()
{
    Server_Fire();
}

bool APixelHero::Server_Fire_Validate()
{
    return true;
}

void APixelHero::Server_Fire_Implementation()
{
    if (ProjectileClass)
    {
        FVector MuzzleLocation = GetActorLocation() + (GetActorForwardVector() * 100.f);
        FRotator MuzzleRotation = GetActorRotation();

        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = GetInstigator();

        GetWorld()->SpawnActor<APixelProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
    }

    Multicast_FireEffects();
}

void APixelHero::Multicast_FireEffects_Implementation()
{
    if (GEngine)
    {
        FString LogRole = HasAuthority() ? TEXT("Servidor") : TEXT("Cliente");
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("[%s] ¡FUEGO!"), *LogRole));
    }
}

// --- SISTEMA DE DAÑO ---

float APixelHero::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    // Llamamos a la versión base para procesar modificadores de daño si los hubiera
    float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    if (HasAuthority())
    {
        // Restamos la vida real procesada
        CurrentHealth = FMath::Clamp(CurrentHealth - ActualDamage, 0.0f, 100.0f);

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("¡DAÑO RECIBIDO! Vida: %f"), CurrentHealth));
        }

        if (CurrentHealth <= 0.f)
        {
            Destroy();
        }
    }

    return ActualDamage;
}

void APixelHero::OnRep_CurrentHealth()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Orange, FString::Printf(TEXT("¡Recibí daño! Vida restante: %f"), CurrentHealth));
    }
}
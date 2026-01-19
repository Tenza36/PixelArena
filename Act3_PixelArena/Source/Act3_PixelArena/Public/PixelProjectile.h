#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PixelProjectile.generated.h"

/**
 * Clase que define la lógica física y visual de los proyectiles en PixelArena.
 * Implementa colisiones, movimiento físico y aplicación de daño en red.
 */
UCLASS()
class ACT3_PIXELARENA_API APixelProjectile : public AActor 
{
    GENERATED_BODY()

public:
    APixelProjectile();

    /** Componente de colisión principal (Raíz del objeto) */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    class USphereComponent* CollisionComp;

    /** Componente que gestiona la física del proyectil (velocidad, rebote, gravedad) */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    class UProjectileMovementComponent* ProjectileMovement;

    /** Representación visual del proyectil */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    class UStaticMeshComponent* MeshComp;

    /** * Función llamada automáticamente por el motor cuando el proyectil choca con algo.
    */
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    /** Cantidad de daño que se restará de la salud del objetivo al impactar */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    float DamageValue = 20.0f;
}; 
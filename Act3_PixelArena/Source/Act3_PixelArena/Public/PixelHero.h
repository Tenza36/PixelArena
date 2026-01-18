#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PixelHero.generated.h"

/**
 * Clase principal del héroe para PixelArena.
 * Gestiona la cámara top-down, la salud replicada y el sistema de combate por proyectiles.
 */
UCLASS()
class ACT3_PIXELARENA_API APixelHero : public ACharacter
{
	GENERATED_BODY()

public:
	APixelHero();

protected:
	/** Llamado cuando comienza el juego o cuando el actor aparece. */
	virtual void BeginPlay() override;

public:
	/** --- COMPONENTES DE CÁMARA --- */

	/** Brazo que sostiene la cámara a una distancia fija. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	/** Cámara que sigue al personaje desde una perspectiva top-down. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;

	/** --- SISTEMA DE COMBATE Y DAÑO --- */

	/** Salud actual del personaje, replicada desde el servidor. */
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth, BlueprintReadOnly, Category = "Stats")
	float CurrentHealth;

	/** Función de notificación que se ejecuta en el cliente cuando cambia la salud. */
	UFUNCTION()
	void OnRep_CurrentHealth();

	/** Clase del proyectil que se va a spawnear. Se debe asignar en el Blueprint. */
	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<class APixelProjectile> ProjectileClass;

	/** Inicia el proceso de disparo (llamada local). */
	void StartShooting();

	/** RPC para ejecutar el spawn del proyectil en el servidor. */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire();

	/** RPC para replicar efectos visuales y de sonido en todos los clientes. */
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_FireEffects();

	/** Función nativa de Unreal para procesar el daño recibido. */
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	/** --- CONFIGURACIÓN DE RED Y ENTRADA --- */

	/** Configura las propiedades que deben replicarse por la red. */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Configura la vinculación de teclas/acciones para el personaje. */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
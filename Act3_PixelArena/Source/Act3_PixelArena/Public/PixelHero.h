#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PixelHero.generated.h"


UCLASS()
class ACT3_PIXELARENA_API APixelHero : public ACharacter
{
	GENERATED_BODY()

public:
	// Constructor
	APixelHero();

protected:
	// Llamado al iniciar el juego
	virtual void BeginPlay() override;

	/** --- FASE 2: COMPONENTES DE CÁMARA --- */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;

	/** --- FASE 4: SALUD Y DAÑO (REPLICACIÓN) --- */

	// Salud máxima del personaje
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float MaxHealth;

	/** * Salud actual replicada.
	 * ReplicatedUsing llama a OnRep_CurrentHealth en los clientes cuando el servidor la cambia.
	 */
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth, BlueprintReadOnly, Category = "Health")
	float CurrentHealth;

	/** Función que se ejecuta en los clientes para reaccionar visualmente al cambio de vida */
	UFUNCTION()
	void OnRep_CurrentHealth();

	/** Función de Unreal para registrar variables en la red */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Override de la función nativa de daño (Solo se ejecuta en el Servidor) */
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

public:
	// Configuración de inputs
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** --- FASE 3: SISTEMA DE DISPARO (NETWORKING) --- */

	// Función llamada localmente por el input
	void StartShooting();

	/** RPC de Servidor: El cliente pide disparar */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire();

	/** RPC Multicast: El servidor avisa a todos para efectos visuales */
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_FireEffects();
};
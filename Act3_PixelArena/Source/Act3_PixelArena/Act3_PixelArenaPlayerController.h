#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Act3_PixelArenaPlayerController.generated.h"

/**
 * Clase encargada de gestionar la entrada del jugador, el movimiento Top-Down
 * y la sincronización de la rotación en red para el proyecto PixelArena.
 */
UCLASS()
class ACT3_PIXELARENA_API AAct3_PixelArenaPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAct3_PixelArenaPlayerController();

	/** Ejecuta la lógica de rotación y actualización en cada frame. */
	virtual void PlayerTick(float DeltaTime) override;

	/** --- CONFIGURACIÓN DE ENTRADA (ENHANCED INPUT) --- */

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* SetDestinationClickAction;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	/** --- LÓGICA DE MOVIMIENTO --- */

	/** Se ejecuta al presionar el clic por primera vez. */
	void OnInputStarted();

	/** Se ejecuta mientras se mantiene presionado el clic (movimiento continuo). */
	void OnSetDestinationTriggered();

	/** Se ejecuta al soltar el clic (decide entre moverse a un punto o detenerse). */
	void OnSetDestinationReleased();

	/** RPC para procesar el movimiento de navegación en el servidor. */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetDestination(FVector DestLocation);

	/** RPC para detener el movimiento del personaje en el servidor inmediatamente. */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopMovement();

	/** --- LÓGICA DE ROTACIÓN SINCRONIZADA --- */

	/** Calcula localmente la rotación hacia la posición del mouse. */
	void UpdateLookRotation();

	/** RPC para replicar la rotación del cliente a todos los demás jugadores a través del servidor. */
	UFUNCTION(Server, Unreliable, WithValidation)
	void Server_UpdateRotation(FRotator NewRotation);

private:
	/** Ubicación en el mundo donde el jugador hizo clic. */
	FVector CachedDestination;

	/** Tiempo acumulado que el botón de movimiento ha permanecido presionado. */
	float FollowTime;
};
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PixelHero.generated.h"

/**
 * Clase del Héroe para PixelArena.
 * Gestiona el movimiento, combate replicado y la interfaz de salud sobre la cabeza.
 */
UCLASS()
class ACT3_PIXELARENA_API APixelHero : public ACharacter
{
	GENERATED_BODY()

public:
	APixelHero();

protected:
	virtual void BeginPlay() override;

public:
	/** --- COMPONENTES DE CÁMARA --- */

	/** Brazo que sujeta la cámara a una distancia fija */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	/** Cámara principal desde perspectiva Top-Down */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;

	/** --- COMPONENTES DE INTERFAZ (UI) --- */

	/** Componente que renderiza el Widget de la barra de vida sobre el personaje */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
	class UWidgetComponent* HealthWidgetComp;

	/** * Evento que se implementa en Blueprint para actualizar visualmente la ProgressBar.
	 * Se llama automáticamente desde C++ cuando la vida cambia.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
	void UpdateHealthBarVisual(float CurrentHealthPercent);

	/** --- SISTEMA DE SALUD Y DAÑO --- */

	/** Salud actual, sincronizada por el servidor */
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth, BlueprintReadOnly, Category = "Stats")
	float CurrentHealth;

	/** Notificación de red: se ejecuta en los clientes cuando el servidor cambia la vida */
	UFUNCTION()
	void OnRep_CurrentHealth();

	/** Función nativa de Unreal para procesar daño */
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	/** --- SISTEMA DE COMBATE --- */

	/** Clase del proyectil a disparar (se asigna en el Blueprint) */
	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<class APixelProjectile> ProjectileClass;

	/** Inicia la lógica de disparo */
	void StartShooting();

	/** RPC: Ejecuta el spawn del proyectil en el servidor */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire();

	/** RPC: Replica efectos visuales (sonidos/partículas) en todos los clientes */
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_FireEffects();

	/** --- CONFIGURACIÓN DE RED Y ENTRADA --- */

	/** Registra las variables que deben replicarse */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Vincula las acciones de teclado/mouse */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
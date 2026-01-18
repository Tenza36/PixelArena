#include "Act3_PixelArenaPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AAct3_PixelArenaPlayerController::AAct3_PixelArenaPlayerController()
{
	bShowMouseCursor = true; // El ratón siempre es visible
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;

	// Configuraciones para asegurar que el mouse interactúe con el mundo
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AAct3_PixelArenaPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Añadir el contexto de mapeo de Enhanced Input al iniciar
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}

void AAct3_PixelArenaPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// Actualizamos la rotación del personaje hacia el mouse en cada frame
	if (GetPawn())
	{
		UpdateLookRotation();
	}
}

void AAct3_PixelArenaPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Vinculamos las acciones de clic con sus respectivos estados
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &AAct3_PixelArenaPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &AAct3_PixelArenaPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &AAct3_PixelArenaPlayerController::OnSetDestinationReleased);
	}
}

void AAct3_PixelArenaPlayerController::OnInputStarted()
{
	// Detenemos cualquier navegación previa al iniciar un nuevo clic
	StopMovement();
}

void AAct3_PixelArenaPlayerController::OnSetDestinationTriggered()
{
	// Acumulamos el tiempo para diferenciar entre clic corto y largo
	FollowTime += GetWorld()->GetDeltaSeconds();

	FHitResult Hit;
	if (GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit))
	{
		CachedDestination = Hit.Location;
	}

	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn)
	{
		// Movimiento continuo: movemos al personaje paso a paso hacia el mouse
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void AAct3_PixelArenaPlayerController::OnSetDestinationReleased()
{
	// Umbral para decidir si el personaje debe seguir caminando o detenerse
	const float ShortPressThreshold = 0.2f;

	if (FollowTime <= ShortPressThreshold)
	{
		// CLIC CORTO: Navegación automática hasta el punto final
		if (HasAuthority())
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		}
		else
		{
			Server_SetDestination(CachedDestination);
		}
	}
	else
	{
		// CLIC LARGO: Detención inmediata al soltar el botón
		StopMovement();
		if (!HasAuthority())
		{
			Server_StopMovement();
		}
	}

	FollowTime = 0.f; // Reiniciamos el temporizador
}

/** --- RPCs DE MOVIMIENTO --- **/

bool AAct3_PixelArenaPlayerController::Server_SetDestination_Validate(FVector DestLocation) { return true; }

void AAct3_PixelArenaPlayerController::Server_SetDestination_Implementation(FVector DestLocation)
{
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
}

bool AAct3_PixelArenaPlayerController::Server_StopMovement_Validate() { return true; }

void AAct3_PixelArenaPlayerController::Server_StopMovement_Implementation()
{
	StopMovement();
}

/** --- LÓGICA DE ROTACIÓN --- **/

void AAct3_PixelArenaPlayerController::UpdateLookRotation()
{
	APawn* MyPawn = GetPawn();
	FHitResult Hit;

	// Obtenemos el impacto del mouse en el mundo
	if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
	{
		FVector Direction = (Hit.Location - MyPawn->GetActorLocation());
		Direction.Z = 0.f; // Mantenemos al personaje nivelado en el plano

		if (!Direction.IsNearlyZero())
		{
			FRotator NewRotation = FRotationMatrix::MakeFromX(Direction).Rotator();

			// Aplicación local inmediata (Client-side prediction)
			MyPawn->SetActorRotation(NewRotation);

			// Notificamos al servidor para que replique a otros clientes
			if (!HasAuthority())
			{
				Server_UpdateRotation(NewRotation);
			}
		}
	}
}

bool AAct3_PixelArenaPlayerController::Server_UpdateRotation_Validate(FRotator NewRotation) { return true; }

void AAct3_PixelArenaPlayerController::Server_UpdateRotation_Implementation(FRotator NewRotation)
{
	if (APawn* MyPawn = GetPawn())
	{
		MyPawn->SetActorRotation(NewRotation);
	}
}
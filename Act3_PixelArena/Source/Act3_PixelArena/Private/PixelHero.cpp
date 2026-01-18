#include "PixelHero.h"
#include "Net/UnrealNetwork.h" // Obligatorio para DOREPLIFETIME
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// --- CONSTRUCTOR ---
APixelHero::APixelHero()
{
	// Activamos replicación de red
	bReplicates = true;
	SetReplicateMovement(true);

	// Fase 2: Configuración de Cámara Cenital
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Fase 4: Salud inicial
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
}

// --- RED Y REPLICACIÓN ---

// Registro de variables para que viajen por la red
void APixelHero::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Sincroniza CurrentHealth del servidor a los clientes
	DOREPLIFETIME(APixelHero, CurrentHealth);
}

void APixelHero::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		CurrentHealth = MaxHealth;
	}
}

void APixelHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &APixelHero::StartShooting);
}

// --- FASE 3: SISTEMA DE DISPARO ---

void APixelHero::StartShooting()
{
	Server_Fire(); // El cliente le pide al servidor disparar
}

bool APixelHero::Server_Fire_Validate()
{
	return true;
}

void APixelHero::Server_Fire_Implementation()
{
	FVector Start = GetActorLocation();
	FVector End = Start + (GetActorForwardVector() * 1000.f);
	FHitResult Hit;

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f, 0, 5.0f);

	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility))
	{
		AActor* HitActor = Hit.GetActor();
		if (HitActor && HitActor != this)
		{
			// Fase 4: El servidor aplica daño real
			UGameplayStatics::ApplyDamage(HitActor, 25.0f, GetController(), this, UDamageType::StaticClass());
		}
	}

	Multicast_FireEffects(); // Notifica a todos para ver el efecto
}

void APixelHero::Multicast_FireEffects_Implementation()
{
	if (GEngine)
	{
		FString Role = HasAuthority() ? TEXT("Servidor") : TEXT("Cliente");
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("[%s] ¡Disparo Visual!"), *Role));
	}
}

// --- FASE 4: SALUD Y DAÑO ---

float APixelHero::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	// El servidor resta la vida (Autoridad)
	CurrentHealth = FMath::Clamp(CurrentHealth - DamageToApply, 0.0f, MaxHealth);

	if (CurrentHealth <= 0.f)
	{
		Destroy(); // El servidor destruye al actor
	}

	return DamageToApply;
}

void APixelHero::OnRep_CurrentHealth()
{
	// Se ejecuta en clientes cuando cambia la salud en el servidor
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Orange, TEXT("¡Cliente: Salud Actualizada!"));
	}
}
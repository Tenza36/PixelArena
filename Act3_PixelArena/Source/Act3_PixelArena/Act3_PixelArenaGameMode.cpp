// Copyright Epic Games, Inc. All Rights Reserved.

#include "Act3_PixelArenaGameMode.h"
#include "Act3_PixelArenaPlayerController.h"
#include "Act3_PixelArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAct3_PixelArenaGameMode::AAct3_PixelArenaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAct3_PixelArenaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
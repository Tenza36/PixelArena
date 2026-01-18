// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PixelGameInstance.generated.h"


UCLASS()
class ACT3_PIXELARENA_API UPixelGameInstance : public UGameInstance
{
    GENERATED_BODY() 

public:
    /** Función para crear una partida (Host) */
    UFUNCTION(BlueprintCallable, Category = "Network")
    void HostGame();

    /** Función para unirse a una partida (Join) */
    UFUNCTION(BlueprintCallable, Category = "Network")
    void JoinGame(const FString& IPAddress);
}; 





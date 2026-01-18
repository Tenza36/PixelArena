// Fill out your copyright notice in the Description page of Project Settings.

#include "PixelGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UPixelGameInstance::HostGame()
{
    UWorld* World = GetWorld();
    if (!World) return;

    // 1. Limpieza de red: Si somos un cliente, cerramos la conexión actual
    APlayerController* PC = GetFirstLocalPlayerController();
    if (PC && !PC->HasAuthority())
    {
        // Forzamos al motor a desconectarse antes de viajar al nuevo mapa
        PC->ClientTravel("/Game/Maps/L_MainMenu", ETravelType::TRAVEL_Absolute);
    }

    // 2. Ejecutamos el Host con una pequeña demora o directamente si el estado es limpio
    // Usamos el nombre de tu mapa de juego real
    UGameplayStatics::OpenLevel(World, "TopDownMap", true, "listen");
}

void UPixelGameInstance::JoinGame(const FString& IPAddress)
{
    // El cliente viaja a la dirección IP proporcionada
    APlayerController* PC = GetFirstLocalPlayerController();
    if (PC)
    {
        PC->ClientTravel(IPAddress, ETravelType::TRAVEL_Absolute);
    }
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformsGameInstance.h"
#include "Engine/Engine.h"

UPuzzlePlatformsGameInstance::UPuzzlePlatformsGameInstance(const FObjectInitializer & ObjectInitializer)
{
    UE_LOG(LogTemp, Warning, TEXT("Constructor Log Message"));
}

void UPuzzlePlatformsGameInstance::Init()
{
    UE_LOG(LogTemp, Warning, TEXT("Init() Log Message"));
}

void UPuzzlePlatformsGameInstance::Host()
{
    UEngine* Engine = GetEngine();

    if(Engine != nullptr)
    {
        Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));
    }
}

void UPuzzlePlatformsGameInstance::Join(const FString& Address)
{
   
    UEngine* Engine = GetEngine();

    if(Engine != nullptr)
    {
        Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));
    }
}
   


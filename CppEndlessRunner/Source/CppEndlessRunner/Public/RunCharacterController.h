// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RunCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class CPPENDLESSRUNNER_API ARunCharacterController : public APlayerController
{
	GENERATED_BODY()
public:
	void BeginPlay();
	void Tick(float DeltaTime);
	void SetupInputComponent();
	UFUNCTION()
	void MoveRight(float offset);
private:
	class ARunCharacter* runCharacter;
	
};

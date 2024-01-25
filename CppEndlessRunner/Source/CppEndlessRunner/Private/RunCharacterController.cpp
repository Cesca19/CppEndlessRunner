// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacterController.h"
#include "RunCharacter.h"


void ARunCharacterController::BeginPlay()
{
	runCharacter = Cast<ARunCharacter>(GetPawn());
}

void ARunCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!runCharacter) return;
	runCharacter->AddMovementInput(runCharacter->GetActorForwardVector());
}

void ARunCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveRight", this, &ARunCharacterController::MoveRight);
}

void ARunCharacterController::MoveRight(float offset)
{
	if (!runCharacter) return;
	runCharacter->AddMovementInput(runCharacter->GetActorRightVector(), offset);
}

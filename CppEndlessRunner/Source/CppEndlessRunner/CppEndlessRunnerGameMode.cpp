// Copyright Epic Games, Inc. All Rights Reserved.

#include "CppEndlessRunnerGameMode.h"
#include "CppEndlessRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppEndlessRunnerGameMode::ACppEndlessRunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "PerceptionCGameMode.h"
#include "PerceptionCCharacter.h"
#include "UObject/ConstructorHelpers.h"

APerceptionCGameMode::APerceptionCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

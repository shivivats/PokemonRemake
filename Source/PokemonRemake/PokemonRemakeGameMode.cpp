// Copyright Epic Games, Inc. All Rights Reserved.

#include "PokemonRemakeGameMode.h"
#include "PokemonRemakeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APokemonRemakeGameMode::APokemonRemakeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

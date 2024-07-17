// Copyright Epic Games, Inc. All Rights Reserved.

#include "PokemonGameGameMode.h"
#include "PokemonGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

APokemonGameGameMode::APokemonGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

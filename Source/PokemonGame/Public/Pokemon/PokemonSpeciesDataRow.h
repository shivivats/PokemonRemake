// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EPokemonType.h"
#include "PokemonSpeciesDataRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FPokemonSpeciesDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:

	/** General Species Info */
	UPROPERTY(EditAnywhere, Category="General")
	int PokedexNum;
	
	 UPROPERTY(EditAnywhere, Category="General")
	 FName SpeciesName;

	UPROPERTY(EditAnywhere, Category="General")
	FName DisplayName;

	UPROPERTY(EditAnywhere, Category="General")
	EPokemonType Type1;

	UPROPERTY(EditAnywhere, Category="General")
	EPokemonType Type2;

	UPROPERTY(EditAnywhere, Category="General")
	FText SpeciesText;

	UPROPERTY(EditAnywhere, Category="General")
	FText SpeciesDescription;

	UPROPERTY(EditAnywhere, Category="General")
	float Height;

	UPROPERTY(EditAnywhere, Category="General")
	float Weight;

	UPROPERTY(EditAnywhere, Category="General")
	FName Ability;

	UPROPERTY(EditAnywhere, Category="General")
	FName EvolvesTo;

	/** Stats */
	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseHP;
	
	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseAttack;

	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseDefense;

	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseSpeed;
};
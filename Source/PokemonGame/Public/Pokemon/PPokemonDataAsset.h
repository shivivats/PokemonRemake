// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EPokemonType.h"
#include "Engine/DataAsset.h"
#include "PPokemonDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class POKEMONGAME_API UPPokemonDataAsset : public UDataAsset
{
	GENERATED_BODY()

protected:

	/** General Species Info */
	UPROPERTY(EditAnywhere, Category="General")
	int PokedexNum;
	
	UPROPERTY(EditAnywhere, Category="General")
	FName SpeciesName;

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
	float Width;

	/** Visuals */
	UPROPERTY(EditAnywhere, Category="Visual")
	USkeletalMesh* PokemonMesh;

	UPROPERTY(EditAnywhere, Category="Visual")
	UAnimBlueprint* AnimBP;

	UPROPERTY(EditAnywhere, Category="Visual")
	UAnimMontage* AttackAnim;

	/** Stats */
	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseHP;
	
	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseAttack;

	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseDefense;

	UPROPERTY(EditAnywhere, Category="Stats")
	int BaseSpeed;

public:
	int GetPokedexNum() const;
	FName GetSpeciesName() const;
	EPokemonType GetType1() const;
	EPokemonType GetType2() const;
	int GetHeight() const;
	int GetWidth() const;
	USkeletalMesh* GetPokemonMesh() const;
	int GetBaseHP() const;
	int GetBaseAttack() const;
	int GetBaseDefense() const;
	int GetBaseSpeed() const;
	FText GetSpeciesText() const;
	FText GetSpeciesDescription() const;
};

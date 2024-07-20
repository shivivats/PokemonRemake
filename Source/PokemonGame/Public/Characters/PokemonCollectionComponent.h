// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Pokemon/EPokemonSpeciesName.h"
#include "PokemonCollectionComponent.generated.h"

USTRUCT(BlueprintType)
struct FPokemonCollectionData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	EPokemonSpeciesName SpeciesName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	FName Nickname;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	int32 CurrentHP;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	int32 CurrentLevel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	TArray<FName> Attacks;
};


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class POKEMONGAME_API UPokemonCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPokemonCollectionComponent();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	TArray<FPokemonCollectionData> PartyPokemon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon")
	TArray<FPokemonCollectionData> BoxPokemon;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	FPokemonCollectionData GetFirstValidPartyPokemon();
};

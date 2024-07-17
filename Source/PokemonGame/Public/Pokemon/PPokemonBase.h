// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EPokemonType.h"
#include "GameFramework/Character.h"
#include "PPokemonDataAsset.h"
#include "PPokemonBase.generated.h"

class UPPokemonBattleComponent;
class UPPokemonAttackComponent;
class UPPokemonAttributeComponent;

UCLASS()
class POKEMONGAME_API APPokemonBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APPokemonBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	int PokemonLevel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	float CurrentHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	float CurrentWeight;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	UPPokemonDataAsset* PokemonDataAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Components")
	UPPokemonAttributeComponent* AttributeComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Components")
	UPPokemonAttackComponent* AttackComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Components")
	UPPokemonBattleComponent* BattleComponent;

public:

	TArray<EPokemonType> GetPokemonTypes();

	int GetPokemonLevel();

	UPPokemonDataAsset* GetPokemonDataAsset();

	/*
	 * The pokemon in the player's party or box will be created and destroyed as needed
	 * Their data will be serialized and stored in a file (look at tom looman's final videos on this or just google it)
	 * This data should be referenced and updated when the player opens the party, the box, or anything that refers to the party pokemon
	 * This can be stored in the GameInstance or the GameState(?)
	 */
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

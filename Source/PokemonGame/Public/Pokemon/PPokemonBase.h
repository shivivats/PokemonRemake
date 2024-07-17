// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PPokemonBase.generated.h"

class UPPokemonBattleComponent;
class UPPokemonAttackComponent;
class UPPokemonAttributeComponent;
enum EPokemonType : uint8;

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

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|General")
	int pokedexNum;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|General")
	FText speciesText;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|General")
	FText speciesDescription;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|General")
	FName speciesName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	float height;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	float weight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|General")
	int level;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|General")
	EPokemonType type1;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|General")
	EPokemonType type2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Components")
	UPPokemonAttributeComponent* AttributeComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Components")
	UPPokemonAttackComponent* AttackComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Components")
	UPPokemonBattleComponent* BattleComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

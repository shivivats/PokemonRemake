// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PPokemonAttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POKEMONGAME_API UPPokemonAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPPokemonAttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/* Base Stats, obtained from species */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int baseHP;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int baseAttack;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int baseDefense;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int baseSpeed;

	/* Actual Stats, change per level */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int hp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int attack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int defense;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int speed;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

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
	int BaseHealth;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int BaseAttack;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int BaseDefense;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Pokemon|Stats")
	int BaseSpeed;

	/* Actual Stats, change per level */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int MinHealth;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int Attack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int Defense;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Pokemon|Stats")
	int Speed;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int ChangeHealth(int HealthDelta);
};

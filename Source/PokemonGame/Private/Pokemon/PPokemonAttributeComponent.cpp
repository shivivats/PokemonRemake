// Fill out your copyright notice in the Description page of Project Settings.


#include "Pokemon/PPokemonAttributeComponent.h"

#include "Pokemon/PPokemonBase.h"
#include "Pokemon/PPokemonDataAsset.h"

// Sets default values for this component's properties
UPPokemonAttributeComponent::UPPokemonAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MinHealth=0;	
}

// Called when the game starts
void UPPokemonAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	/*
	 * I just define the stats here based on random formulas I came up with since I don't intend for this to be a balanced game, just a proof of work
	 */
	APPokemonBase* OwnerPokemon = Cast<APPokemonBase>(GetOwner());
	if(ensure(OwnerPokemon))
	{
		BaseHealth = OwnerPokemon->GetPokemonDataAsset()->GetBaseHP();
		BaseAttack = OwnerPokemon->GetPokemonDataAsset()->GetBaseAttack();
		BaseDefense = OwnerPokemon->GetPokemonDataAsset()->GetBaseDefense();
		BaseSpeed = OwnerPokemon->GetPokemonDataAsset()->GetBaseSpeed();
		
		int Level = OwnerPokemon->GetPokemonLevel();
		Health = BaseHealth * Level / 5;
		MaxHealth = Health;
		Attack = BaseAttack * Level / 10;
		Defense = BaseDefense * Level / 10;
		Speed = BaseSpeed * Level / 10;
	}
}


// Called every frame
void UPPokemonAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UPPokemonAttributeComponent::ChangeHealth(int HealthDelta)
{
	int OldHealth = Health;
	Health+=FMath::Clamp(HealthDelta, MinHealth, MaxHealth);

	int ActualDelta = Health - OldHealth;
	return ActualDelta;
}


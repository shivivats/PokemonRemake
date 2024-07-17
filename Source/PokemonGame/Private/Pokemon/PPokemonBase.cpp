// Fill out your copyright notice in the Description page of Project Settings.


#include "Pokemon/PPokemonBase.h"

#include "Pokemon/PPokemonAttackComponent.h"
#include "Pokemon/PPokemonAttributeComponent.h"
#include "Pokemon/PPokemonBattleComponent.h"
#include "Pokemon/PPokemonDataAsset.h"

// Sets default values
APPokemonBase::APPokemonBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttributeComponent = CreateDefaultSubobject<UPPokemonAttributeComponent>(TEXT("AttributeComponent"));
	BattleComponent = CreateDefaultSubobject<UPPokemonBattleComponent>(TEXT("BattleComponent"));
	AttackComponent = CreateDefaultSubobject<UPPokemonAttackComponent>(TEXT("AttackComponent"));
	
}

// Called when the game starts or when spawned
void APPokemonBase::BeginPlay()
{
	Super::BeginPlay();
	
}

TArray<EPokemonType> APPokemonBase::GetPokemonTypes()
{
	TArray<EPokemonType> Types;
	Types.Add(PokemonDataAsset->GetType1());
	Types.Add(PokemonDataAsset->GetType2());
	return Types;
}

int APPokemonBase::GetPokemonLevel()
{
	return PokemonLevel;
}

UPPokemonDataAsset* APPokemonBase::GetPokemonDataAsset()
{
	return PokemonDataAsset;
}

// Called every frame
void APPokemonBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APPokemonBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


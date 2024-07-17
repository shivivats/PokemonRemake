// Fill out your copyright notice in the Description page of Project Settings.


#include "PokemonGame/Public/Pokemon/PPokemonBase.h"

#include "PokemonGame/Public/Pokemon/PPokemonAttackComponent.h"
#include "PokemonGame/Public/Pokemon/PPokemonAttributeComponent.h"
#include "PokemonGame/Public/Pokemon/PPokemonBattleComponent.h"

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


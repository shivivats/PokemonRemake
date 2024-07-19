// Fill out your copyright notice in the Description page of Project Settings.


#include "Pokemon/PPokemonBase.h"

#include "Pokemon/PokemonSpeciesDataRow.h"
#include "Pokemon/PPokemonAttackComponent.h"
#include "Pokemon/PPokemonAttributeComponent.h"
#include "Pokemon/PPokemonBattleComponent.h"

// Sets default values
APPokemonBase::APPokemonBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttributeComponent = CreateDefaultSubobject<UPPokemonAttributeComponent>(TEXT("AttributeComponent"));
	BattleComponent = CreateDefaultSubobject<UPPokemonBattleComponent>(TEXT("BattleComponent"));
	AttackComponent = CreateDefaultSubobject<UPPokemonAttackComponent>(TEXT("AttackComponent"));

	if(FPokemonSpeciesDataRow* Row = GetPokemonData())
	{
		GetMesh()->SetSkeletalMeshAsset(Row->PokemonMesh);
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		GetMesh()->SetAnimClass(Row->AnimBP->);
	}
}

// Called when the game starts or when spawned
void APPokemonBase::BeginPlay()
{
	Super::BeginPlay();
	
}

TArray<EPokemonType> APPokemonBase::GetPokemonTypes()
{
	TArray<EPokemonType> Types;
	Types.Add(GetPokemonData()->Type1);
	Types.Add(GetPokemonData()->Type2);
	return Types;
}

int APPokemonBase::GetPokemonLevel()
{
	return PokemonLevel;
}

FPokemonSpeciesDataRow* APPokemonBase::GetPokemonData()
{
	// we need to get a struct of pokemon data
	FPokemonSpeciesDataRow* PokemonSpeciesDataRow = PokemonSpeciesDataTable->FindRow<FPokemonSpeciesDataRow>(PokemonSpeciesName, TEXT("Searching for pokemon data..."));
	
	return PokemonSpeciesDataRow;
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


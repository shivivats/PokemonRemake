// Fill out your copyright notice in the Description page of Project Settings.


#include "Pokemon/PPokemonDataAsset.h"

int UPPokemonDataAsset::GetPokedexNum() const
{
	return PokedexNum;
}

FName UPPokemonDataAsset::GetSpeciesName() const
{
	return SpeciesName;
}

EPokemonType UPPokemonDataAsset::GetType1() const
{
	return Type1;
}

EPokemonType UPPokemonDataAsset::GetType2() const
{
	return Type2;
}

int UPPokemonDataAsset::GetHeight() const
{
	return Height;
}

int UPPokemonDataAsset::GetWidth() const
{
	return Width;
}

USkeletalMesh* UPPokemonDataAsset::GetPokemonMesh() const
{
	return PokemonMesh;
}

int UPPokemonDataAsset::GetBaseHP() const
{
	return BaseHP;
}

int UPPokemonDataAsset::GetBaseAttack() const
{
	return BaseAttack;
}

int UPPokemonDataAsset::GetBaseDefense() const
{
	return BaseDefense;
}

int UPPokemonDataAsset::GetBaseSpeed() const
{
	return BaseSpeed;
}

FText UPPokemonDataAsset::GetSpeciesText() const
{
	return SpeciesText;
}

FText UPPokemonDataAsset::GetSpeciesDescription() const
{
	return SpeciesDescription;
}

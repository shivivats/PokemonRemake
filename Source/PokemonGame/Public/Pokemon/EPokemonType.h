// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "EPokemonType.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPokemonType : uint8
{
    TYPE_NONE    UMETA(DisplayName = "None"),
    TYPE_NORMAL  UMETA(DisplayName = "Normal"),
    TYPE_FIGHTING UMETA(DisplayName = "Fighting"),
    TYPE_FLYING  UMETA(DisplayName = "Flying"),
    TYPE_POISON  UMETA(DisplayName = "Poison"),
    TYPE_GROUND   UMETA(DisplayName = "Ground"),
    TYPE_ROCK    UMETA(DisplayName = "Rock"),
    TYPE_BUG     UMETA(DisplayName = "Bug"),
    TYPE_GHOST   UMETA(DisplayName = "Ghost"),
    TYPE_STEEL   UMETA(DisplayName = "Steel"),
    TYPE_FIRE    UMETA(DisplayName = "Fire"),
    TYPE_WATER    UMETA(DisplayName = "Water"),
    TYPE_GRASS    UMETA(DisplayName = "Grass"),
    TYPE_ELECTRIC  UMETA(DisplayName = "Electric"),
    TYPE_PSYCHIC UMETA(DisplayName = "Psychic"),
    TYPE_DRAGON   UMETA(DisplayName = "Dragon"),
    TYPE_DARKNESS UMETA(DisplayName = "Dark"),
    TYPE_FAIRY  UMETA(DisplayName= "Fairy")
    
};
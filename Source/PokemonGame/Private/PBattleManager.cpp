// Fill out your copyright notice in the Description page of Project Settings.


#include "PBattleManager.h"

// Sets default values
APBattleManager::APBattleManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APBattleManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APBattleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APBattleManager::BeginBattle()
{
	
}


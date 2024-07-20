// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PBattleManager.generated.h"

UCLASS()
class POKEMONGAME_API APBattleManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APBattleManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void BeginBattle();

	UFUNCTION(BlueprintImplementableEvent)
	void EndBattle();

	/*
	 * The battle manager needs to do the following:
	 * - Start a battle upon receiving a notification from the player
	 * - End the battle when all the player's pokemon die, the enemy pokemon dies (or is captured), or if the player successfully runs
	 *
	 * - During the battle, for each turn the player will decide what to do and then the turn will take place based on the speed
	 * - We can hide the player UI when the turn is happening and replace it with a textbox describing what's happening (like in the earlier gen games)
	 * - The pokemon's attack component should implement the attack function and the battle manager will call the appropriate attack functions
	 *
	 * - DELEGATES need to be implemented for battle begin, player turn end, enemy turn end, battle end
	 * - the player will definitely subscribe to the battle begin and battle end delegate (with a reason for battle end)
	 * - the turn end delegates will determine UI changes for PP and such
	 * - the enemy pokemon will also need to subscribe to the battle end delegate in case its still free afterwards
	 */
};

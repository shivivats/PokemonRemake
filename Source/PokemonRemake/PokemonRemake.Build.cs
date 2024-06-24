// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PokemonRemake : ModuleRules
{
	public PokemonRemake(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

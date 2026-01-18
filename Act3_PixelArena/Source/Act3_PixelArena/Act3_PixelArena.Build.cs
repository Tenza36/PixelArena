// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Act3_PixelArena : ModuleRules
{
	public Act3_PixelArena(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}

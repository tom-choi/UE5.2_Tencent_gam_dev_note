// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class David_Nixon_Learn : ModuleRules
{
	public David_Nixon_Learn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

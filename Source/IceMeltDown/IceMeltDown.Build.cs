// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IceMeltDown : ModuleRules
{
	public IceMeltDown(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

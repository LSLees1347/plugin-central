// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SteamShared : ModuleRules
{
	public SteamShared(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrecompileForTargets = PrecompileTargetsType.Any;
		PrivateDefinitions.Add("STEAMSHARED_PACKAGE=1");
		PublicDefinitions.Add("STEAM_SDK_INSTALLED=1");

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core", 
				"Sockets",
				"SteamSdk", "Projects"
			}
		);

		
	}
}
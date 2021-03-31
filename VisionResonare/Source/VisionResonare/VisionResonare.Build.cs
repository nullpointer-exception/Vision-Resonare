// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class VisionResonare : ModuleRules
{
	public VisionResonare(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

        //Dirty fix for the strange bug which requires that UELinkerFixups must be destroyed each time
        //modifications are made sounde wise...
        string DevelopmentDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Intermediate/Build/Win64/VisionResonareEditor/Development/"));
        string UELinkerFixupsDir = DevelopmentDir + "UELinkerFixups";
        try
        {
            File.Delete(DevelopmentDir + "Makefile.ubt");
            Directory.Delete(UELinkerFixupsDir, true);
        }
        catch (System.Exception) { }
    }
}

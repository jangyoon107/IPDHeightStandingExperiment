// Some copyright should be here...

using UnrealBuildTool;
using System.IO;
public class ViconTracking : ModuleRules
{
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
    }

    public ViconTracking(TargetInfo Target)
	{
		
		PublicIncludePaths.AddRange(
			new string[] {
				"ViconTracking/Public"
				
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"ViconTracking/Private",
				"Include",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",

				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        LoadViconDataStreamSDK(Target);
	}

    public bool LoadViconDataStreamSDK(TargetInfo Target)
    {
        bool isLibrarySupported = false;
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            isLibrarySupported = true;
            string LibrariesPath = Path.Combine(ThirdPartyPath, "ViconSDK", "Libraries");
            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "TrackingDLL.lib"));
        }
        if (isLibrarySupported)
        {
            PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "ViconSDK", "Includes"));
        }
        Definitions.Add(string.Format("WITH_VICON_BINDING={0}", isLibrarySupported ? 1 : 0));
        return isLibrarySupported;
    }
}

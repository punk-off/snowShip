using UnrealBuildTool;

public class octoberBlockTarget : TargetRules
{
	public octoberBlockTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("octoberBlock");
	}
}

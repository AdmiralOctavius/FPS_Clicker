// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class FPS_ClickerEditorTarget : TargetRules
{
	public FPS_ClickerEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "FPS_Clicker" } );
	}
}

/**
 * Name: UpGun
 * Version: 0.5
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.OnAnyTeamButtonClicked
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_C::OnAnyTeamButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.OnAnyTeamButtonClicked");
		
		UHUD_TeamSelection_C_OnAnyTeamButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.GetTimerText
	 * 		Flags  -> ()
	 */
	class FText UHUD_TeamSelection_C::GetTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.GetTimerText");
		
		UHUD_TeamSelection_C_GetTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.OnPlayerTeamUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeamId                                Team                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamSelection_C::OnPlayerTeamUpdated(const struct FUpGunTeamId& Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.OnPlayerTeamUpdated");
		
		UHUD_TeamSelection_C_OnPlayerTeamUpdated_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.UpdateCurrentTeam
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_C::UpdateCurrentTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.UpdateCurrentTeam");
		
		UHUD_TeamSelection_C_UpdateCurrentTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.OnTeamsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunTeam>                          Teams                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_TeamSelection_C::OnTeamsUpdated(TArray<struct FUpGunTeam> Teams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.OnTeamsUpdated");
		
		UHUD_TeamSelection_C_OnTeamsUpdated_Params params {};
		params.Teams = Teams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.Construct");
		
		UHUD_TeamSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.OnShown
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.OnShown");
		
		UHUD_TeamSelection_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection.HUD_TeamSelection_C.ExecuteUbergraph_HUD_TeamSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamSelection_C::ExecuteUbergraph_HUD_TeamSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection.HUD_TeamSelection_C.ExecuteUbergraph_HUD_TeamSelection");
		
		UHUD_TeamSelection_C_ExecuteUbergraph_HUD_TeamSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_TeamSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_TeamSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_TeamSelection.HUD_TeamSelection_C");
		return ptr;
	}

}



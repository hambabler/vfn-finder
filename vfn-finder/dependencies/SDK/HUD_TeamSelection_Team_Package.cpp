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
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.GetPlayerNames
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::GetPlayerNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.GetPlayerNames");
		
		UHUD_TeamSelection_Team_C_GetPlayerNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.GetTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeam                                  Team                                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UHUD_TeamSelection_Team_C::GetTeam(struct FUpGunTeam* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.GetTeam");
		
		UHUD_TeamSelection_Team_C_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Team != nullptr)
			*Team = params.Team;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.Text_Players In team
	 * 		Flags  -> ()
	 */
	class FText UHUD_TeamSelection_Team_C::Text_Players_In_team()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.Text_Players In team");
		
		UHUD_TeamSelection_Team_C_Text_Players_In_team_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.Construct");
		
		UHUD_TeamSelection_Team_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_TeamSelection_Team_C_BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.UpdateVisuals");
		
		UHUD_TeamSelection_Team_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UHUD_TeamSelection_Team_C_BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UHUD_TeamSelection_Team_C_BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.AppearWithDelay
	 * 		Flags  -> ()
	 */
	void UHUD_TeamSelection_Team_C::AppearWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.AppearWithDelay");
		
		UHUD_TeamSelection_Team_C_AppearWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.ExecuteUbergraph_HUD_TeamSelection_Team
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamSelection_Team_C::ExecuteUbergraph_HUD_TeamSelection_Team(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.ExecuteUbergraph_HUD_TeamSelection_Team");
		
		UHUD_TeamSelection_Team_C_ExecuteUbergraph_HUD_TeamSelection_Team_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_TeamSelection_Team_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_TeamSelection_Team_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_TeamSelection_Team.HUD_TeamSelection_Team_C");
		return ptr;
	}

}



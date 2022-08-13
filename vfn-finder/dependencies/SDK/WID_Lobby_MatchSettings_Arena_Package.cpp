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
	 * 		Name   -> Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.UpdateAvailability
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_Arena_C::UpdateAvailability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.UpdateAvailability");
		
		UWID_Lobby_MatchSettings_Arena_C_UpdateAvailability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_Arena_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.Construct");
		
		UWID_Lobby_MatchSettings_Arena_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.BndEvt__WID_Lobby_MatchSettings_Arena_Button_map_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_Arena_C::BndEvt__WID_Lobby_MatchSettings_Arena_Button_map_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.BndEvt__WID_Lobby_MatchSettings_Arena_Button_map_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWID_Lobby_MatchSettings_Arena_C_BndEvt__WID_Lobby_MatchSettings_Arena_Button_map_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.ExecuteUbergraph_WID_Lobby_MatchSettings_Arena
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_MatchSettings_Arena_C::ExecuteUbergraph_WID_Lobby_MatchSettings_Arena(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C.ExecuteUbergraph_WID_Lobby_MatchSettings_Arena");
		
		UWID_Lobby_MatchSettings_Arena_C_ExecuteUbergraph_WID_Lobby_MatchSettings_Arena_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Lobby_MatchSettings_Arena_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Lobby_MatchSettings_Arena_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Lobby_MatchSettings_Arena.WID_Lobby_MatchSettings_Arena_C");
		return ptr;
	}

}



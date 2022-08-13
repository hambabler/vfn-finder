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
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.Gen_Minia
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_PlayerEntry_C::Gen_Minia()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.Gen_Minia");
		
		UWID_Lobby_PlayerEntry_C_Gen_Minia_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.OnReadyStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsReady                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWID_Lobby_PlayerEntry_C::OnReadyStateUpdated(bool bIsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.OnReadyStateUpdated");
		
		UWID_Lobby_PlayerEntry_C_OnReadyStateUpdated_Params params {};
		params.bIsReady = bIsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_PlayerEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.Construct");
		
		UWID_Lobby_PlayerEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.BndEvt__WID_Lobby_PlayerEntry_W_button_kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_PlayerEntry_C::BndEvt__WID_Lobby_PlayerEntry_W_button_kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.BndEvt__WID_Lobby_PlayerEntry_W_button_kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UWID_Lobby_PlayerEntry_C_BndEvt__WID_Lobby_PlayerEntry_W_button_kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.BndEvt__WID_Lobby_PlayerEntry_W_button_ban_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_PlayerEntry_C::BndEvt__WID_Lobby_PlayerEntry_W_button_ban_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.BndEvt__WID_Lobby_PlayerEntry_W_button_ban_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UWID_Lobby_PlayerEntry_C_BndEvt__WID_Lobby_PlayerEntry_W_button_ban_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.DisplayPlayerScreen
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_PlayerEntry_C::DisplayPlayerScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.DisplayPlayerScreen");
		
		UWID_Lobby_PlayerEntry_C_DisplayPlayerScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.ExecuteUbergraph_WID_Lobby_PlayerEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_PlayerEntry_C::ExecuteUbergraph_WID_Lobby_PlayerEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C.ExecuteUbergraph_WID_Lobby_PlayerEntry");
		
		UWID_Lobby_PlayerEntry_C_ExecuteUbergraph_WID_Lobby_PlayerEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Lobby_PlayerEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Lobby_PlayerEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Lobby_PlayerEntry.WID_Lobby_PlayerEntry_C");
		return ptr;
	}

}



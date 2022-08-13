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
	 * 		Name   -> Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.PopulateWidget
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_Friend_Entry_C::PopulateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.PopulateWidget");
		
		UWID_Lobby_Friend_Entry_C_PopulateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.BndEvt__Lobby_PlayersToInvite_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_Friend_Entry_C::BndEvt__Lobby_PlayersToInvite_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.BndEvt__Lobby_PlayersToInvite_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UWID_Lobby_Friend_Entry_C_BndEvt__Lobby_PlayersToInvite_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_Friend_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.Construct");
		
		UWID_Lobby_Friend_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.ExecuteUbergraph_WID_Lobby_Friend_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_Friend_Entry_C::ExecuteUbergraph_WID_Lobby_Friend_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C.ExecuteUbergraph_WID_Lobby_Friend_Entry");
		
		UWID_Lobby_Friend_Entry_C_ExecuteUbergraph_WID_Lobby_Friend_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Lobby_Friend_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Lobby_Friend_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Lobby_Friend_Entry.WID_Lobby_Friend_Entry_C");
		return ptr;
	}

}



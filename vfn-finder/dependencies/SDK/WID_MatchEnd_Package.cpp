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
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.Appear
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::Appear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.Appear");
		
		UWID_MatchEnd_C_Appear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.GetTimerText
	 * 		Flags  -> ()
	 */
	class FText UWID_MatchEnd_C::GetTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.GetTimerText");
		
		UWID_MatchEnd_C_GetTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6");
		
		UWID_MatchEnd_C_OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6");
		
		UWID_MatchEnd_C_OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.Construct");
		
		UWID_MatchEnd_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UWID_MatchEnd_C_BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UWID_MatchEnd_C_BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_C::BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature");
		
		UWID_MatchEnd_C_BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.OnItemDropped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunInventoryItem                         Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWID_MatchEnd_C::OnItemDropped(const struct FUpGunInventoryItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.OnItemDropped");
		
		UWID_MatchEnd_C_OnItemDropped_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd.WID_MatchEnd_C.ExecuteUbergraph_WID_MatchEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_MatchEnd_C::ExecuteUbergraph_WID_MatchEnd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd.WID_MatchEnd_C.ExecuteUbergraph_WID_MatchEnd");
		
		UWID_MatchEnd_C_ExecuteUbergraph_WID_MatchEnd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_MatchEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_MatchEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_MatchEnd.WID_MatchEnd_C");
		return ptr;
	}

}



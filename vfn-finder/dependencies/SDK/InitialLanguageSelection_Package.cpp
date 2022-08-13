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
	 * 		Name   -> Function InitialLanguageSelection.InitialLanguageSelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UInitialLanguageSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialLanguageSelection.InitialLanguageSelection_C.Construct");
		
		UInitialLanguageSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InitialLanguageSelection.InitialLanguageSelection_C.WidgetAnimationEvt_Leave_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UInitialLanguageSelection_C::WidgetAnimationEvt_Leave_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialLanguageSelection.InitialLanguageSelection_C.WidgetAnimationEvt_Leave_K2Node_WidgetAnimationEvent_1");
		
		UInitialLanguageSelection_C_WidgetAnimationEvt_Leave_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InitialLanguageSelection.InitialLanguageSelection_C.ClickedOnLangue
	 * 		Flags  -> ()
	 */
	void UInitialLanguageSelection_C::ClickedOnLangue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialLanguageSelection.InitialLanguageSelection_C.ClickedOnLangue");
		
		UInitialLanguageSelection_C_ClickedOnLangue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InitialLanguageSelection.InitialLanguageSelection_C.BndEvt__InitialLanguageSelection_W_button_understand_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInitialLanguageSelection_C::BndEvt__InitialLanguageSelection_W_button_understand_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialLanguageSelection.InitialLanguageSelection_C.BndEvt__InitialLanguageSelection_W_button_understand_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UInitialLanguageSelection_C_BndEvt__InitialLanguageSelection_W_button_understand_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InitialLanguageSelection.InitialLanguageSelection_C.ExecuteUbergraph_InitialLanguageSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInitialLanguageSelection_C::ExecuteUbergraph_InitialLanguageSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialLanguageSelection.InitialLanguageSelection_C.ExecuteUbergraph_InitialLanguageSelection");
		
		UInitialLanguageSelection_C_ExecuteUbergraph_InitialLanguageSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInitialLanguageSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInitialLanguageSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InitialLanguageSelection.InitialLanguageSelection_C");
		return ptr;
	}

}



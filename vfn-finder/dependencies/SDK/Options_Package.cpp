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
	 * 		Name   -> Function Options.Options_C.SwitchWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DesiredIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_C::SwitchWidget(int32_t DesiredIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options.Options_C.SwitchWidget");
		
		UOptions_C_SwitchWidget_Params params {};
		params.DesiredIndex = DesiredIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options.Options_C.BndEvt__Options_W_Button_Audio_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_C::BndEvt__Options_W_Button_Audio_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options.Options_C.BndEvt__Options_W_Button_Audio_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UOptions_C_BndEvt__Options_W_Button_Audio_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options.Options_C.BndEvt__Options_W_Button_Controls_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_C::BndEvt__Options_W_Button_Controls_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options.Options_C.BndEvt__Options_W_Button_Controls_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UOptions_C_BndEvt__Options_W_Button_Controls_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options.Options_C.BndEvt__Options_W_Button_Graphismes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_C::BndEvt__Options_W_Button_Graphismes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options.Options_C.BndEvt__Options_W_Button_Graphismes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UOptions_C_BndEvt__Options_W_Button_Graphismes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options.Options_C.ExecuteUbergraph_Options
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_C::ExecuteUbergraph_Options(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options.Options_C.ExecuteUbergraph_Options");
		
		UOptions_C_ExecuteUbergraph_Options_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options.Options_C");
		return ptr;
	}

}



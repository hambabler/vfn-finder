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
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.InitiateWidgets
	 * 		Flags  -> ()
	 */
	void UOptions_Mapping_C::InitiateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.InitiateWidgets");
		
		UOptions_Mapping_C_InitiateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.PopulateKeyMapping
	 * 		Flags  -> ()
	 */
	void UOptions_Mapping_C::PopulateKeyMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.PopulateKeyMapping");
		
		UOptions_Mapping_C_PopulateKeyMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Mapping_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.Construct");
		
		UOptions_Mapping_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Mapping_C::BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UOptions_Mapping_C_BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Mapping_C::BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UOptions_Mapping_C_BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Mapping_C::BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature(float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature");
		
		UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature_Params params {};
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Mapping_C::BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature(float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature");
		
		UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature_Params params {};
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Mapping_C::BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature");
		
		UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Mapping_C::BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature");
		
		UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mapping.Options_Mapping_C.ExecuteUbergraph_Options_Mapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Mapping_C::ExecuteUbergraph_Options_Mapping(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mapping.Options_Mapping_C.ExecuteUbergraph_Options_Mapping");
		
		UOptions_Mapping_C_ExecuteUbergraph_Options_Mapping_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Mapping_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Mapping_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Mapping.Options_Mapping_C");
		return ptr;
	}

}



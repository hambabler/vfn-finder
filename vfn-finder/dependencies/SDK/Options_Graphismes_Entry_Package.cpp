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
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.InitiateSliderAndText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_Entry_C::InitiateSliderAndText(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.InitiateSliderAndText");
		
		UOptions_Graphismes_Entry_C_InitiateSliderAndText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.GenerateComboBox
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_Entry_C::GenerateComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.GenerateComboBox");
		
		UOptions_Graphismes_Entry_C_GenerateComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Graphismes_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.PreConstruct");
		
		UOptions_Graphismes_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Graphismes_Entry_C::BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_Entry_C::BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_Entry_C::BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_Entry_C::BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_Entry_C::BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.ExecuteUbergraph_Options_Graphismes_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_Entry_C::ExecuteUbergraph_Options_Graphismes_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.ExecuteUbergraph_Options_Graphismes_Entry");
		
		UOptions_Graphismes_Entry_C_ExecuteUbergraph_Options_Graphismes_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.StoppedSlider__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_Entry_C::StoppedSlider__DelegateSignature(float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.StoppedSlider__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_StoppedSlider__DelegateSignature_Params params {};
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_Entry_C::UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_Entry_C_UpdatedEntry__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction UOptions_Graphismes_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Graphismes_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Graphismes_Entry.Options_Graphismes_Entry_C");
		return ptr;
	}

}



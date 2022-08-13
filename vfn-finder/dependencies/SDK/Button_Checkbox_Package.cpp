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
	 * 		Name   -> Function Button_Checkbox.Button_Checkbox_C.IsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButton_Checkbox_C::IsChecked(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Checkbox.Button_Checkbox_C.IsChecked");
		
		UButton_Checkbox_C_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Checkbox.Button_Checkbox_C.BndEvt__Button_Checkbox_CheckBox_49_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButton_Checkbox_C::BndEvt__Button_Checkbox_CheckBox_49_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Checkbox.Button_Checkbox_C.BndEvt__Button_Checkbox_CheckBox_49_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UButton_Checkbox_C_BndEvt__Button_Checkbox_CheckBox_49_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Checkbox.Button_Checkbox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButton_Checkbox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Checkbox.Button_Checkbox_C.PreConstruct");
		
		UButton_Checkbox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Checkbox.Button_Checkbox_C.ExecuteUbergraph_Button_Checkbox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButton_Checkbox_C::ExecuteUbergraph_Button_Checkbox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Checkbox.Button_Checkbox_C.ExecuteUbergraph_Button_Checkbox");
		
		UButton_Checkbox_C_ExecuteUbergraph_Button_Checkbox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Checkbox.Button_Checkbox_C.ClickedOnCheckbox__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButton_Checkbox_C::ClickedOnCheckbox__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Checkbox.Button_Checkbox_C.ClickedOnCheckbox__DelegateSignature");
		
		UButton_Checkbox_C_ClickedOnCheckbox__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButton_Checkbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton_Checkbox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Checkbox.Button_Checkbox_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.VisualsOnButtonClicked
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::VisualsOnButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.VisualsOnButtonClicked");
		
		UCustom_Armor_Button_C_VisualsOnButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.Expections
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::Expections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.Expections");
		
		UCustom_Armor_Button_C_Expections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.GenerateButtonForTexture
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::GenerateButtonForTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.GenerateButtonForTexture");
		
		UCustom_Armor_Button_C_GenerateButtonForTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.GenerateSimplePatternButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseTint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustom_Armor_Button_C::GenerateSimplePatternButton(bool UseTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.GenerateSimplePatternButton");
		
		UCustom_Armor_Button_C_GenerateSimplePatternButton_Params params {};
		params.UseTint = UseTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.UpdatePlayerData
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::UpdatePlayerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.UpdatePlayerData");
		
		UCustom_Armor_Button_C_UpdatePlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.GenerateButton
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::GenerateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.GenerateButton");
		
		UCustom_Armor_Button_C_GenerateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UCustom_Armor_Button_C_BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UCustom_Armor_Button_C_BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.Construct");
		
		UCustom_Armor_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Armor_Button_C::BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCustom_Armor_Button_C_BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Armor_Button.Custom_Armor_Button_C.ExecuteUbergraph_Custom_Armor_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Armor_Button_C::ExecuteUbergraph_Custom_Armor_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Armor_Button.Custom_Armor_Button_C.ExecuteUbergraph_Custom_Armor_Button");
		
		UCustom_Armor_Button_C_ExecuteUbergraph_Custom_Armor_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustom_Armor_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustom_Armor_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Custom_Armor_Button.Custom_Armor_Button_C");
		return ptr;
	}

}



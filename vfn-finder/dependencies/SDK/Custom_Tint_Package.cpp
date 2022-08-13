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
	 * 		Name   -> Function Custom_Tint.Custom_Tint_C.Generate Tint Button
	 * 		Flags  -> ()
	 */
	void UCustom_Tint_C::Generate_Tint_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Tint.Custom_Tint_C.Generate Tint Button");
		
		UCustom_Tint_C_Generate_Tint_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Tint.Custom_Tint_C.BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Tint_C::BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Tint.Custom_Tint_C.BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCustom_Tint_C_BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Tint.Custom_Tint_C.ExecuteUbergraph_Custom_Tint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Tint_C::ExecuteUbergraph_Custom_Tint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Tint.Custom_Tint_C.ExecuteUbergraph_Custom_Tint");
		
		UCustom_Tint_C_ExecuteUbergraph_Custom_Tint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Tint.Custom_Tint_C.SelectedTint__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Tint_C::SelectedTint__DelegateSignature(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Tint.Custom_Tint_C.SelectedTint__DelegateSignature");
		
		UCustom_Tint_C_SelectedTint__DelegateSignature_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustom_Tint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustom_Tint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Custom_Tint.Custom_Tint_C");
		return ptr;
	}

}



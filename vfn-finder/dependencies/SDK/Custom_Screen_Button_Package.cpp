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
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.VisualsOnButtonClicked
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::VisualsOnButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.VisualsOnButtonClicked");
		
		UCustom_Screen_Button_C_VisualsOnButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.Exceptions
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::Exceptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.Exceptions");
		
		UCustom_Screen_Button_C_Exceptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.GetDefaultTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Screen_Button_C::GetDefaultTintColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.GetDefaultTintColor");
		
		UCustom_Screen_Button_C_GetDefaultTintColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.UpdatePlayerData
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::UpdatePlayerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.UpdatePlayerData");
		
		UCustom_Screen_Button_C_UpdatePlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.PlayClickedAnimation
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::PlayClickedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.PlayClickedAnimation");
		
		UCustom_Screen_Button_C_PlayClickedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.ChangeTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LinearColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Screen_Button_C::ChangeTint(struct FLinearColor* LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.ChangeTint");
		
		UCustom_Screen_Button_C_ChangeTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinearColor != nullptr)
			*LinearColor = params.LinearColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.GenerateTints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Teintes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustom_Screen_Button_C::GenerateTints(TArray<struct FLinearColor>* Teintes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.GenerateTints");
		
		UCustom_Screen_Button_C_GenerateTints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Teintes != nullptr)
			*Teintes = params.Teintes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.GenerateScreen
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::GenerateScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.GenerateScreen");
		
		UCustom_Screen_Button_C_GenerateScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCustom_Screen_Button_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UCustom_Screen_Button_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UCustom_Screen_Button_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustom_Screen_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.Construct");
		
		UCustom_Screen_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.ChangeTint_Delegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Screen_Button_C::ChangeTint_Delegate(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.ChangeTint_Delegate");
		
		UCustom_Screen_Button_C_ChangeTint_Delegate_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Screen_Button.Custom_Screen_Button_C.ExecuteUbergraph_Custom_Screen_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Screen_Button_C::ExecuteUbergraph_Custom_Screen_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Screen_Button.Custom_Screen_Button_C.ExecuteUbergraph_Custom_Screen_Button");
		
		UCustom_Screen_Button_C_ExecuteUbergraph_Custom_Screen_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustom_Screen_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustom_Screen_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Custom_Screen_Button.Custom_Screen_Button_C");
		return ptr;
	}

}



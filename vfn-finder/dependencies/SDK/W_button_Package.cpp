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
	 * 		Name   -> Function W_button.W_button_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_button_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.SetText");
		
		UW_button_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	void UW_button_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.GetVisibility_1");
		
		UW_button_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_button_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.PreConstruct");
		
		UW_button_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_button_C::BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UW_button_C_BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_button_C::BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UW_button_C_BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_button_C::BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UW_button_C_BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_button_C::BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UW_button_C_BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_button_C::BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UW_button_C_BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.ExecuteUbergraph_W_button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_button_C::ExecuteUbergraph_W_button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.ExecuteUbergraph_W_button");
		
		UW_button_C_ExecuteUbergraph_W_button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_button.W_button_C.Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_button_C::Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_button.W_button_C.Clicked_Btn__DelegateSignature");
		
		UW_button_C_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_button.W_button_C");
		return ptr;
	}

}



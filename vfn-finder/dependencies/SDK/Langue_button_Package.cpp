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
	 * 		Name   -> Function Langue_button.Langue_button_C.Generate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLangues                                    langue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULangue_button_C::Generate(const struct FLangues& langue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Langue_button.Langue_button_C.Generate");
		
		ULangue_button_C_Generate_Params params {};
		params.langue = langue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Langue_button.Langue_button_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULangue_button_C::BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Langue_button.Langue_button_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		ULangue_button_C_BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Langue_button.Langue_button_C.BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULangue_button_C::BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Langue_button.Langue_button_C.BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		ULangue_button_C_BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Langue_button.Langue_button_C.BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULangue_button_C::BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Langue_button.Langue_button_C.BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		ULangue_button_C_BndEvt__Langue_button_Button_70_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Langue_button.Langue_button_C.ExecuteUbergraph_Langue_button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULangue_button_C::ExecuteUbergraph_Langue_button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Langue_button.Langue_button_C.ExecuteUbergraph_Langue_button");
		
		ULangue_button_C_ExecuteUbergraph_Langue_button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULangue_button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULangue_button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Langue_button.Langue_button_C");
		return ptr;
	}

}



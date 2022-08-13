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
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButton_Compteur_C::SetValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.SetValue");
		
		UButton_Compteur_C_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.FormatText
	 * 		Flags  -> ()
	 */
	class FText UButton_Compteur_C::FormatText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.FormatText");
		
		UButton_Compteur_C_FormatText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButton_Compteur_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.PreConstruct");
		
		UButton_Compteur_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.BndEvt__Button_Compteur_Btn+_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UButton_Compteur_C::BndEvt__Button_Compteur_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.BndEvt__Button_Compteur_Btn+_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UButton_Compteur_C_BndEvt__Button_Compteur_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.BndEvt__Button_Compteur_Btn-_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UButton_Compteur_C::BndEvt__Button_Compteur_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.BndEvt__Button_Compteur_Btn-_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UButton_Compteur_C_BndEvt__Button_Compteur_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.ExecuteUbergraph_Button_Compteur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButton_Compteur_C::ExecuteUbergraph_Button_Compteur(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.ExecuteUbergraph_Button_Compteur");
		
		UButton_Compteur_C_ExecuteUbergraph_Button_Compteur_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Button_Compteur.Button_Compteur_C.ClickedOnButtons__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButton_Compteur_C::ClickedOnButtons__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Compteur.Button_Compteur_C.ClickedOnButtons__DelegateSignature");
		
		UButton_Compteur_C_ClickedOnButtons__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButton_Compteur_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton_Compteur_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Compteur.Button_Compteur_C");
		return ptr;
	}

}



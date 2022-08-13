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
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.SequenceEvent__ENTRYPOINTCrossHair_list_1
	 * 		Flags  -> ()
	 */
	void UCrossHair_list_C::SequenceEvent__ENTRYPOINTCrossHair_list_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.SequenceEvent__ENTRYPOINTCrossHair_list_1");
		
		UCrossHair_list_C_SequenceEvent__ENTRYPOINTCrossHair_list_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.SpawnColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCrossHair_list_C::SpawnColors(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.SpawnColors");
		
		UCrossHair_list_C_SpawnColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.UpdateSavedData
	 * 		Flags  -> ()
	 */
	void UCrossHair_list_C::UpdateSavedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.UpdateSavedData");
		
		UCrossHair_list_C_UpdateSavedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.ChangeCrossColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Couleur_Crosshair                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrossHair_list_C::ChangeCrossColor(const struct FLinearColor& Couleur_Crosshair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.ChangeCrossColor");
		
		UCrossHair_list_C_ChangeCrossColor_Params params {};
		params.Couleur_Crosshair = Couleur_Crosshair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.IndexChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrossHair_list_C::IndexChange(bool Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.IndexChange");
		
		UCrossHair_list_C_IndexChange_Params params {};
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.SwitchDisplayedCrosshair
	 * 		Flags  -> ()
	 */
	void UCrossHair_list_C::SwitchDisplayedCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.SwitchDisplayedCrosshair");
		
		UCrossHair_list_C_SwitchDisplayedCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.Construct
	 * 		Flags  -> ()
	 */
	void UCrossHair_list_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.Construct");
		
		UCrossHair_list_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCrossHair_list_C::BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCrossHair_list_C_BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCrossHair_list_C::BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UCrossHair_list_C_BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.ChangeColorWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrossHair_list_C::ChangeColorWidget(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.ChangeColorWidget");
		
		UCrossHair_list_C_ChangeColorWidget_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CrossHair_list.CrossHair_list_C.ExecuteUbergraph_CrossHair_list
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrossHair_list_C::ExecuteUbergraph_CrossHair_list(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossHair_list.CrossHair_list_C.ExecuteUbergraph_CrossHair_list");
		
		UCrossHair_list_C_ExecuteUbergraph_CrossHair_list_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrossHair_list_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrossHair_list_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CrossHair_list.CrossHair_list_C");
		return ptr;
	}

}



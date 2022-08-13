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
	 * 		Name   -> Function Mapping_Action.Mapping_Action_C.SetVisuals
	 * 		Flags  -> ()
	 */
	void UMapping_Action_C::SetVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mapping_Action.Mapping_Action_C.SetVisuals");
		
		UMapping_Action_C_SetVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mapping_Action.Mapping_Action_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapping_Action_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mapping_Action.Mapping_Action_C.Construct");
		
		UMapping_Action_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mapping_Action.Mapping_Action_C.BndEvt__InputKeySelector_83_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UMapping_Action_C::BndEvt__InputKeySelector_83_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mapping_Action.Mapping_Action_C.BndEvt__InputKeySelector_83_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");
		
		UMapping_Action_C_BndEvt__InputKeySelector_83_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mapping_Action.Mapping_Action_C.BndEvt__Mapping_Action_InputKey_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapping_Action_C::BndEvt__Mapping_Action_InputKey_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mapping_Action.Mapping_Action_C.BndEvt__Mapping_Action_InputKey_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");
		
		UMapping_Action_C_BndEvt__Mapping_Action_InputKey_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mapping_Action.Mapping_Action_C.ExecuteUbergraph_Mapping_Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapping_Action_C::ExecuteUbergraph_Mapping_Action(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mapping_Action.Mapping_Action_C.ExecuteUbergraph_Mapping_Action");
		
		UMapping_Action_C_ExecuteUbergraph_Mapping_Action_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapping_Action_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapping_Action_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Mapping_Action.Mapping_Action_C");
		return ptr;
	}

}



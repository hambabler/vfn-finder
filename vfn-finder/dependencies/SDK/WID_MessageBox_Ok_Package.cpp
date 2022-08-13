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
	 * 		Name   -> Function WID_MessageBox_Ok.WID_MessageBox_Ok_C.BndEvt__WID_MessageBox_Ok_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_MessageBox_Ok_C::BndEvt__WID_MessageBox_Ok_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MessageBox_Ok.WID_MessageBox_Ok_C.BndEvt__WID_MessageBox_Ok_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UWID_MessageBox_Ok_C_BndEvt__WID_MessageBox_Ok_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MessageBox_Ok.WID_MessageBox_Ok_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWID_MessageBox_Ok_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MessageBox_Ok.WID_MessageBox_Ok_C.PreConstruct");
		
		UWID_MessageBox_Ok_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MessageBox_Ok.WID_MessageBox_Ok_C.ExecuteUbergraph_WID_MessageBox_Ok
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_MessageBox_Ok_C::ExecuteUbergraph_WID_MessageBox_Ok(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MessageBox_Ok.WID_MessageBox_Ok_C.ExecuteUbergraph_WID_MessageBox_Ok");
		
		UWID_MessageBox_Ok_C_ExecuteUbergraph_WID_MessageBox_Ok_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_MessageBox_Ok_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_MessageBox_Ok_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_MessageBox_Ok.WID_MessageBox_Ok_C");
		return ptr;
	}

}



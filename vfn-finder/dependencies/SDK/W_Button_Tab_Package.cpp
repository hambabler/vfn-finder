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
	 * 		Name   -> Function W_Button_Tab.W_Button_Tab_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Button_Tab_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Button_Tab.W_Button_Tab_C.PreConstruct");
		
		UW_Button_Tab_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Button_Tab.W_Button_Tab_C.BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Button_Tab_C::BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Button_Tab.W_Button_Tab_C.BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_Button_Tab_C_BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Button_Tab.W_Button_Tab_C.BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Button_Tab_C::BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Button_Tab.W_Button_Tab_C.BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UW_Button_Tab_C_BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Button_Tab.W_Button_Tab_C.BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Button_Tab_C::BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Button_Tab.W_Button_Tab_C.BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UW_Button_Tab_C_BndEvt__W_Button_Tab_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Button_Tab.W_Button_Tab_C.ExecuteUbergraph_W_Button_Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Button_Tab_C::ExecuteUbergraph_W_Button_Tab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Button_Tab.W_Button_Tab_C.ExecuteUbergraph_W_Button_Tab");
		
		UW_Button_Tab_C_ExecuteUbergraph_W_Button_Tab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Button_Tab.W_Button_Tab_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Button_Tab_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Button_Tab.W_Button_Tab_C.OnClicked__DelegateSignature");
		
		UW_Button_Tab_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Button_Tab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Button_Tab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Button_Tab.W_Button_Tab_C");
		return ptr;
	}

}



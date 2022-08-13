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
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UButtonMenuBase_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.OnFocusReceived");
		
		UButtonMenuBase_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UButtonMenuBase_C::BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UButtonMenuBase_C_BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonMenuBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.Tick");
		
		UButtonMenuBase_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UButtonMenuBase_C::BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UButtonMenuBase_C_BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButtonMenuBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.PreConstruct");
		
		UButtonMenuBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UButtonMenuBase_C::BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UButtonMenuBase_C_BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.OnFocused
	 * 		Flags  -> ()
	 */
	void UButtonMenuBase_C::OnFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.OnFocused");
		
		UButtonMenuBase_C_OnFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UButtonMenuBase_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.OnFocusLost");
		
		UButtonMenuBase_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.ExecuteUbergraph_ButtonMenuBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonMenuBase_C::ExecuteUbergraph_ButtonMenuBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.ExecuteUbergraph_ButtonMenuBase");
		
		UButtonMenuBase_C_ExecuteUbergraph_ButtonMenuBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ButtonMenuBase.ButtonMenuBase_C.ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UButtonMenuBase_C::ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonMenuBase.ButtonMenuBase_C.ButtonClicked__DelegateSignature");
		
		UButtonMenuBase_C_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButtonMenuBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonMenuBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonMenuBase.ButtonMenuBase_C");
		return ptr;
	}

}



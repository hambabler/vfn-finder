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
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.DLC
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::DLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.DLC");
		
		UW_Lobby_MatchSettings_MutatorChild_C_DLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.ShouldActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::ShouldActivate(bool* Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.ShouldActivate");
		
		UW_Lobby_MatchSettings_MutatorChild_C_ShouldActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Activate != nullptr)
			*Activate = params.Activate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.Construct");
		
		UW_Lobby_MatchSettings_MutatorChild_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_Lobby_MatchSettings_MutatorChild_C_BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UW_Lobby_MatchSettings_MutatorChild_C_BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UW_Lobby_MatchSettings_MutatorChild_C_BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UW_Lobby_MatchSettings_MutatorChild_C_BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UW_Lobby_MatchSettings_MutatorChild_C_BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UW_Lobby_MatchSettings_MutatorChild_C_BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.ExecuteUbergraph_W_Lobby_MatchSettings_MutatorChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Lobby_MatchSettings_MutatorChild_C::ExecuteUbergraph_W_Lobby_MatchSettings_MutatorChild(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C.ExecuteUbergraph_W_Lobby_MatchSettings_MutatorChild");
		
		UW_Lobby_MatchSettings_MutatorChild_C_ExecuteUbergraph_W_Lobby_MatchSettings_MutatorChild_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Lobby_MatchSettings_MutatorChild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Lobby_MatchSettings_MutatorChild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C");
		return ptr;
	}

}



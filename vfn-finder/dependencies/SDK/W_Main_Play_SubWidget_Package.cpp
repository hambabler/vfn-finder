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
	 * 		Name   -> Function W_Main_Play_SubWidget.W_Main_Play_SubWidget_C.BndEvt__W_Main_Play_SubWidget_Server_JoinViaCode_K2Node_ComponentBoundEvent_0_OpenServers__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_SubWidget_C::BndEvt__W_Main_Play_SubWidget_Server_JoinViaCode_K2Node_ComponentBoundEvent_0_OpenServers__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_SubWidget.W_Main_Play_SubWidget_C.BndEvt__W_Main_Play_SubWidget_Server_JoinViaCode_K2Node_ComponentBoundEvent_0_OpenServers__DelegateSignature");
		
		UW_Main_Play_SubWidget_C_BndEvt__W_Main_Play_SubWidget_Server_JoinViaCode_K2Node_ComponentBoundEvent_0_OpenServers__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_SubWidget.W_Main_Play_SubWidget_C.BndEvt__W_Main_Play_SubWidget_W_Main_Play_PublicServerList_K2Node_ComponentBoundEvent_1_SwitchToPlay__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_SubWidget_C::BndEvt__W_Main_Play_SubWidget_W_Main_Play_PublicServerList_K2Node_ComponentBoundEvent_1_SwitchToPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_SubWidget.W_Main_Play_SubWidget_C.BndEvt__W_Main_Play_SubWidget_W_Main_Play_PublicServerList_K2Node_ComponentBoundEvent_1_SwitchToPlay__DelegateSignature");
		
		UW_Main_Play_SubWidget_C_BndEvt__W_Main_Play_SubWidget_W_Main_Play_PublicServerList_K2Node_ComponentBoundEvent_1_SwitchToPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_SubWidget.W_Main_Play_SubWidget_C.ExecuteUbergraph_W_Main_Play_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Main_Play_SubWidget_C::ExecuteUbergraph_W_Main_Play_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_SubWidget.W_Main_Play_SubWidget_C.ExecuteUbergraph_W_Main_Play_SubWidget");
		
		UW_Main_Play_SubWidget_C_ExecuteUbergraph_W_Main_Play_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Main_Play_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Main_Play_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Main_Play_SubWidget.W_Main_Play_SubWidget_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnFindCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FUpGunLobbyData>                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Main_Play_PublicServerList_C::OnFindCompleted(bool bSucceeded, TArray<struct FUpGunLobbyData> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnFindCompleted");
		
		UW_Main_Play_PublicServerList_C_OnFindCompleted_Params params {};
		params.bSucceeded = bSucceeded;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.IsJoiningServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UW_Main_Play_PublicServer_Entry_C*           ServerJoined                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Main_Play_PublicServerList_C::IsJoiningServer(bool Lock, class UW_Main_Play_PublicServer_Entry_C* ServerJoined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.IsJoiningServer");
		
		UW_Main_Play_PublicServerList_C_IsJoiningServer_Params params {};
		params.Lock = Lock;
		params.ServerJoined = ServerJoined;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.IsSearching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Main_Play_PublicServerList_C::IsSearching(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.IsSearching");
		
		UW_Main_Play_PublicServerList_C_IsSearching_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnSwitched_Event
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServerList_C::OnSwitched_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnSwitched_Event");
		
		UW_Main_Play_PublicServerList_C_OnSwitched_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.RefreshList
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServerList_C::RefreshList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.RefreshList");
		
		UW_Main_Play_PublicServerList_C_RefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServerList_C::BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UW_Main_Play_PublicServerList_C_BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServerList_C::BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UW_Main_Play_PublicServerList_C_BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.ExecuteUbergraph_W_Main_Play_PublicServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Main_Play_PublicServerList_C::ExecuteUbergraph_W_Main_Play_PublicServerList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.ExecuteUbergraph_W_Main_Play_PublicServerList");
		
		UW_Main_Play_PublicServerList_C_ExecuteUbergraph_W_Main_Play_PublicServerList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnSwitched__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServerList_C::OnSwitched__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnSwitched__DelegateSignature");
		
		UW_Main_Play_PublicServerList_C_OnSwitched__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.SwitchToPlay__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServerList_C::SwitchToPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.SwitchToPlay__DelegateSignature");
		
		UW_Main_Play_PublicServerList_C_SwitchToPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Main_Play_PublicServerList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Main_Play_PublicServerList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C");
		return ptr;
	}

}



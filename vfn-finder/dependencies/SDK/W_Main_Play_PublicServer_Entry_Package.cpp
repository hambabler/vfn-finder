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
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.OnJoinCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunLobbyJoinResult                              Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Main_Play_PublicServer_Entry_C::OnJoinCompleted(EUpGunLobbyJoinResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.OnJoinCompleted");
		
		UW_Main_Play_PublicServer_Entry_C_OnJoinCompleted_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.JoiningServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsJoining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Main_Play_PublicServer_Entry_C::JoiningServer(bool IsJoining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.JoiningServer");
		
		UW_Main_Play_PublicServer_Entry_C_JoiningServer_Params params {};
		params.IsJoining = IsJoining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Main_Play_PublicServer_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.PreConstruct");
		
		UW_Main_Play_PublicServer_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServer_Entry_C::BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_Main_Play_PublicServer_Entry_C_BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServer_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.Construct");
		
		UW_Main_Play_PublicServer_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServer_Entry_C::BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UW_Main_Play_PublicServer_Entry_C_BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Main_Play_PublicServer_Entry_C::BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UW_Main_Play_PublicServer_Entry_C_BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.ExecuteUbergraph_W_Main_Play_PublicServer_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Main_Play_PublicServer_Entry_C::ExecuteUbergraph_W_Main_Play_PublicServer_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.ExecuteUbergraph_W_Main_Play_PublicServer_Entry");
		
		UW_Main_Play_PublicServer_Entry_C_ExecuteUbergraph_W_Main_Play_PublicServer_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Main_Play_PublicServer_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Main_Play_PublicServer_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C");
		return ptr;
	}

}



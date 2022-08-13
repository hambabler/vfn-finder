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
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.OnJoinCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunLobbyJoinResult                              Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServer_JoinViaCode_C::OnJoinCompleted(EUpGunLobbyJoinResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.OnJoinCompleted");
		
		UServer_JoinViaCode_C_OnJoinCompleted_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.BndEvt__Server_JoinViaCode_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServer_JoinViaCode_C::BndEvt__Server_JoinViaCode_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.BndEvt__Server_JoinViaCode_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UServer_JoinViaCode_C_BndEvt__Server_JoinViaCode_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.BndEvt__Server_JoinViaCode_W_button_172_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServer_JoinViaCode_C::BndEvt__Server_JoinViaCode_W_button_172_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.BndEvt__Server_JoinViaCode_W_button_172_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature");
		
		UServer_JoinViaCode_C_BndEvt__Server_JoinViaCode_W_button_172_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.Construct
	 * 		Flags  -> ()
	 */
	void UServer_JoinViaCode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.Construct");
		
		UServer_JoinViaCode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.BndEvt__Server_JoinViaCode_EditableText_562_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServer_JoinViaCode_C::BndEvt__Server_JoinViaCode_EditableText_562_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.BndEvt__Server_JoinViaCode_EditableText_562_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");
		
		UServer_JoinViaCode_C_BndEvt__Server_JoinViaCode_EditableText_562_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.ExecuteUbergraph_Server_JoinViaCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServer_JoinViaCode_C::ExecuteUbergraph_Server_JoinViaCode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.ExecuteUbergraph_Server_JoinViaCode");
		
		UServer_JoinViaCode_C_ExecuteUbergraph_Server_JoinViaCode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Server_JoinViaCode.Server_JoinViaCode_C.OpenServers__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServer_JoinViaCode_C::OpenServers__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Server_JoinViaCode.Server_JoinViaCode_C.OpenServers__DelegateSignature");
		
		UServer_JoinViaCode_C_OpenServers__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServer_JoinViaCode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServer_JoinViaCode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Server_JoinViaCode.Server_JoinViaCode_C");
		return ptr;
	}

}



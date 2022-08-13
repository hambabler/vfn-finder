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
	 * 		Name   -> Function ServerCreation.ServerCreation_C.OnLobbyCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UServerCreation_C::OnLobbyCreated(bool bSucceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.OnLobbyCreated");
		
		UServerCreation_C_OnLobbyCreated_Params params {};
		params.bSucceeded = bSucceeded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerCreation.ServerCreation_C.GamemodeInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Options_out                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerCreation_C::GamemodeInfos(TArray<class FString>* Options, class FString* Options_out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.GamemodeInfos");
		
		UServerCreation_C_GamemodeInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
		if (Options_out != nullptr)
			*Options_out = params.Options_out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerCreation.ServerCreation_C.Construct
	 * 		Flags  -> ()
	 */
	void UServerCreation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.Construct");
		
		UServerCreation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerCreation_C::BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UServerCreation_C_BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerCreation_C::BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");
		
		UServerCreation_C_BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServerCreation_C::BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");
		
		UServerCreation_C_BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerCreation.ServerCreation_C.ExecuteUbergraph_ServerCreation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerCreation_C::ExecuteUbergraph_ServerCreation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerCreation.ServerCreation_C.ExecuteUbergraph_ServerCreation");
		
		UServerCreation_C_ExecuteUbergraph_ServerCreation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerCreation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerCreation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerCreation.ServerCreation_C");
		return ptr;
	}

}



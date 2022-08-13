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
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_ChatBox_Message_C::AddIcon(class AUpGunBasePlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.AddIcon");
		
		UWID_ChatBox_Message_C_AddIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.GetSenderName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UWID_ChatBox_Message_C::GetSenderName(class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.GetSenderName");
		
		UWID_ChatBox_Message_C_GetSenderName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_Message_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnEntryReleased");
		
		UWID_ChatBox_Message_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWID_ChatBox_Message_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnItemExpansionChanged");
		
		UWID_ChatBox_Message_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWID_ChatBox_Message_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnItemSelectionChanged");
		
		UWID_ChatBox_Message_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_ChatBox_Message_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.OnListItemObjectSet");
		
		UWID_ChatBox_Message_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_Message_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.Construct");
		
		UWID_ChatBox_Message_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox_Message.WID_ChatBox_Message_C.ExecuteUbergraph_WID_ChatBox_Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_ChatBox_Message_C::ExecuteUbergraph_WID_ChatBox_Message(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox_Message.WID_ChatBox_Message_C.ExecuteUbergraph_WID_ChatBox_Message");
		
		UWID_ChatBox_Message_C_ExecuteUbergraph_WID_ChatBox_Message_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_ChatBox_Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_ChatBox_Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_ChatBox_Message.WID_ChatBox_Message_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.OnRoomsUpdated
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_C::OnRoomsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.OnRoomsUpdated");
		
		UWID_ChatBox_C_OnRoomsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.SwitchRoom
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_C::SwitchRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.SwitchRoom");
		
		UWID_ChatBox_C_SwitchRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWID_ChatBox_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.OnKeyDown");
		
		UWID_ChatBox_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.ChangeRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatRoomId                            Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWID_ChatBox_C::ChangeRoom(const struct FUpGunChatRoomId& Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.ChangeRoom");
		
		UWID_ChatBox_C_ChangeRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.Unfocus
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_C::Unfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.Unfocus");
		
		UWID_ChatBox_C_Unfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.Focus
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_C::Focus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.Focus");
		
		UWID_ChatBox_C_Focus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.Hide
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.Hide");
		
		UWID_ChatBox_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasShown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWID_ChatBox_C::Show(bool* WasShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.Show");
		
		UWID_ChatBox_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasShown != nullptr)
			*WasShown = params.WasShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.OnMessageReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatMessage                           Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWID_ChatBox_C::OnMessageReceived(const struct FUpGunChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.OnMessageReceived");
		
		UWID_ChatBox_C_OnMessageReceived_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_ChatBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.Construct");
		
		UWID_ChatBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.BndEvt__WID_ChatBox_TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_ChatBox_C::BndEvt__WID_ChatBox_TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.BndEvt__WID_ChatBox_TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
		
		UWID_ChatBox_C_BndEvt__WID_ChatBox_TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_ChatBox.WID_ChatBox_C.ExecuteUbergraph_WID_ChatBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_ChatBox_C::ExecuteUbergraph_WID_ChatBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_ChatBox.WID_ChatBox_C.ExecuteUbergraph_WID_ChatBox");
		
		UWID_ChatBox_C_ExecuteUbergraph_WID_ChatBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_ChatBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_ChatBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_ChatBox.WID_ChatBox_C");
		return ptr;
	}

}



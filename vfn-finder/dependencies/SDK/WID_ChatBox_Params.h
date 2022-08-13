#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WID_ChatBox.WID_ChatBox_C.OnRoomsUpdated
	 */
	struct UWID_ChatBox_C_OnRoomsUpdated_Params
	{	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.SwitchRoom
	 */
	struct UWID_ChatBox_C_SwitchRoom_Params
	{	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.OnKeyDown
	 */
	struct UWID_ChatBox_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.ChangeRoom
	 */
	struct UWID_ChatBox_C_ChangeRoom_Params
	{
	public:
		struct FUpGunChatRoomId                                    Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.Unfocus
	 */
	struct UWID_ChatBox_C_Unfocus_Params
	{	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.Focus
	 */
	struct UWID_ChatBox_C_Focus_Params
	{	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.Hide
	 */
	struct UWID_ChatBox_C_Hide_Params
	{	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.Show
	 */
	struct UWID_ChatBox_C_Show_Params
	{
	public:
		bool                                                       WasShown;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0WI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.OnMessageReceived
	 */
	struct UWID_ChatBox_C_OnMessageReceived_Params
	{
	public:
		struct FUpGunChatMessage                                   Message;                                                 // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.Construct
	 */
	struct UWID_ChatBox_C_Construct_Params
	{	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.BndEvt__WID_ChatBox_TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWID_ChatBox_C_BndEvt__WID_ChatBox_TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_ChatBox.WID_ChatBox_C.ExecuteUbergraph_WID_ChatBox
	 */
	struct UWID_ChatBox_C_ExecuteUbergraph_WID_ChatBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_02G6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

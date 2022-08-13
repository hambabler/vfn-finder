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
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.AddIcon
	 */
	struct UWID_ChatBox_Message_C_AddIcon_Params
	{
	public:
		class AUpGunBasePlayerState*                               PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.GetSenderName
	 */
	struct UWID_ChatBox_Message_C_GetSenderName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnEntryReleased
	 */
	struct UWID_ChatBox_Message_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnItemExpansionChanged
	 */
	struct UWID_ChatBox_Message_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.BP_OnItemSelectionChanged
	 */
	struct UWID_ChatBox_Message_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.OnListItemObjectSet
	 */
	struct UWID_ChatBox_Message_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.Construct
	 */
	struct UWID_ChatBox_Message_C_Construct_Params
	{	};

	/**
	 * Function WID_ChatBox_Message.WID_ChatBox_Message_C.ExecuteUbergraph_WID_ChatBox_Message
	 */
	struct UWID_ChatBox_Message_C_ExecuteUbergraph_WID_ChatBox_Message_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQ11[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnFindCompleted
	 */
	struct UW_Main_Play_PublicServerList_C_OnFindCompleted_Params
	{
	public:
		bool                                                       bSucceeded;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ILKY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FUpGunLobbyData>                             Data;                                                    // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.IsJoiningServer
	 */
	struct UW_Main_Play_PublicServerList_C_IsJoiningServer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4SRU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Main_Play_PublicServer_Entry_C*                   ServerJoined;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.IsSearching
	 */
	struct UW_Main_Play_PublicServerList_C_IsSearching_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnSwitched_Event
	 */
	struct UW_Main_Play_PublicServerList_C_OnSwitched_Event_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.RefreshList
	 */
	struct UW_Main_Play_PublicServerList_C_RefreshList_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct UW_Main_Play_PublicServerList_C_BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 */
	struct UW_Main_Play_PublicServerList_C_BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.ExecuteUbergraph_W_Main_Play_PublicServerList
	 */
	struct UW_Main_Play_PublicServerList_C_ExecuteUbergraph_W_Main_Play_PublicServerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G3ZK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.OnSwitched__DelegateSignature
	 */
	struct UW_Main_Play_PublicServerList_C_OnSwitched__DelegateSignature_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C.SwitchToPlay__DelegateSignature
	 */
	struct UW_Main_Play_PublicServerList_C_SwitchToPlay__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

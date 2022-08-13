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
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.OnJoinCompleted
	 */
	struct UW_Main_Play_PublicServer_Entry_C_OnJoinCompleted_Params
	{
	public:
		EUpGunLobbyJoinResult                                      Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.JoiningServer
	 */
	struct UW_Main_Play_PublicServer_Entry_C_JoiningServer_Params
	{
	public:
		bool                                                       IsJoining;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.PreConstruct
	 */
	struct UW_Main_Play_PublicServer_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Main_Play_PublicServer_Entry_C_BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.Construct
	 */
	struct UW_Main_Play_PublicServer_Entry_C_Construct_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_Main_Play_PublicServer_Entry_C_BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_Main_Play_PublicServer_Entry_C_BndEvt__W_Main_Play_PublicServer_Entry_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Main_Play_PublicServer_Entry.W_Main_Play_PublicServer_Entry_C.ExecuteUbergraph_W_Main_Play_PublicServer_Entry
	 */
	struct UW_Main_Play_PublicServer_Entry_C_ExecuteUbergraph_W_Main_Play_PublicServer_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

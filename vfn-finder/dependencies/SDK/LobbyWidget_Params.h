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
	 * Function LobbyWidget.LobbyWidget_C.LobbyWidget_AutoGenFunc
	 */
	struct ULobbyWidget_C_LobbyWidget_AutoGenFunc_Params
	{
	public:
		bool                                                       bIsReady;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.CountReadys
	 */
	struct ULobbyWidget_C_CountReadys_Params
	{
	public:
		int32_t                                                    PlayersInGame;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayersReadyOut;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.OnSelectedGameModeSettingsUpdated
	 */
	struct ULobbyWidget_C_OnSelectedGameModeSettingsUpdated_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.OnMutatorsUpdated
	 */
	struct ULobbyWidget_C_OnMutatorsUpdated_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.OnArenaUpdated
	 */
	struct ULobbyWidget_C_OnArenaUpdated_Params
	{
	public:
		class UUpGunArena*                                         Arena;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.GetRoundCountText
	 */
	struct ULobbyWidget_C_GetRoundCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.IsStartButtonEnabled
	 */
	struct ULobbyWidget_C_IsStartButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.InitializePlayButton
	 */
	struct ULobbyWidget_C_InitializePlayButton_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.UpdatePlayButton
	 */
	struct ULobbyWidget_C_UpdatePlayButton_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.UpdatePlayerList
	 */
	struct ULobbyWidget_C_UpdatePlayerList_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.PlayAppearAnimation
	 */
	struct ULobbyWidget_C_PlayAppearAnimation_Params
	{
	public:
		bool                                                       ShowUp;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.OnFailure_6F56F9354478BC56791004B686F62626
	 */
	struct ULobbyWidget_C_OnFailure_6F56F9354478BC56791004B686F62626_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.OnSuccess_6F56F9354478BC56791004B686F62626
	 */
	struct ULobbyWidget_C_OnSuccess_6F56F9354478BC56791004B686F62626_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.Construct
	 */
	struct ULobbyWidget_C_Construct_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature
	 */
	struct ULobbyWidget_C_BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.OnPlayerAddedOrRemoved
	 */
	struct ULobbyWidget_C_OnPlayerAddedOrRemoved_Params
	{
	public:
		class AUpGunBasePlayerState*                               PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 */
	struct ULobbyWidget_C_BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct ULobbyWidget_C_BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature
	 */
	struct ULobbyWidget_C_BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULobbyWidget_C_BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LobbyWidget.LobbyWidget_C.ExecuteUbergraph_LobbyWidget
	 */
	struct ULobbyWidget_C_ExecuteUbergraph_LobbyWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnGameStateChanged
	 */
	struct ABP_Lobby_HUD_C_OnGameStateChanged_Params
	{
	public:
		struct FGameplayTag                                        OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.On Ammo or Magazine Changed
	 */
	struct ABP_Lobby_HUD_C_On_Ammo_or_Magazine_Changed_Params
	{
	public:
		unsigned char                                              NewValue;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              OldValue;                                                // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MSQ3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnCurrentWeaponChanged
	 */
	struct ABP_Lobby_HUD_C_OnCurrentWeaponChanged_Params
	{
	public:
		class AUpGunWeapon*                                        NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AUpGunWeapon*                                        OldValue;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnCharacterUpdated
	 */
	struct ABP_Lobby_HUD_C_OnCharacterUpdated_Params
	{
	public:
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.ExtendMainHUD
	 */
	struct ABP_Lobby_HUD_C_ExtendMainHUD_Params
	{	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
	 */
	struct ABP_Lobby_HUD_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.BP_CreateWidgets
	 */
	struct ABP_Lobby_HUD_C_BP_CreateWidgets_Params
	{	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.ReceiveTick
	 */
	struct ABP_Lobby_HUD_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.ReceiveBeginPlay
	 */
	struct ABP_Lobby_HUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.HideLobbyHUD
	 */
	struct ABP_Lobby_HUD_C_HideLobbyHUD_Params
	{	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.ExecuteUbergraph_BP_Lobby_HUD
	 */
	struct ABP_Lobby_HUD_C_ExecuteUbergraph_BP_Lobby_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5YY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnLobbyMenuOpened__DelegateSignature
	 */
	struct ABP_Lobby_HUD_C_OnLobbyMenuOpened__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnLobbyMenuClosed__DelegateSignature
	 */
	struct ABP_Lobby_HUD_C_OnLobbyMenuClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

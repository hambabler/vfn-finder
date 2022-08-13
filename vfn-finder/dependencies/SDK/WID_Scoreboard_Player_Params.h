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
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.GetKDA
	 */
	struct UWID_Scoreboard_Player_C_GetKDA_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Update Kick Ban Buttons
	 */
	struct UWID_Scoreboard_Player_C_Update_Kick_Ban_Buttons_Params
	{	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.DefaultDisplay
	 */
	struct UWID_Scoreboard_Player_C_DefaultDisplay_Params
	{	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.SetBorderColor
	 */
	struct UWID_Scoreboard_Player_C_SetBorderColor_Params
	{
	public:
		class AUpGunBasePlayerState*                               OwningPlayerState;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Highlight player
	 */
	struct UWID_Scoreboard_Player_C_Highlight_player_Params
	{
	public:
		bool                                                       HighLight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SVW2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Construct
	 */
	struct UWID_Scoreboard_Player_C_Construct_Params
	{	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.BndEvt__WID_Scoreboard_Player_W_button_Kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 */
	struct UWID_Scoreboard_Player_C_BndEvt__WID_Scoreboard_Player_W_button_Kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.ExecuteUbergraph_WID_Scoreboard_Player
	 */
	struct UWID_Scoreboard_Player_C_ExecuteUbergraph_WID_Scoreboard_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

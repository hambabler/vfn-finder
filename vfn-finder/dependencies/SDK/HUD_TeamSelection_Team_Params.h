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
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.GetPlayerNames
	 */
	struct UHUD_TeamSelection_Team_C_GetPlayerNames_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.GetTeam
	 */
	struct UHUD_TeamSelection_Team_C_GetTeam_Params
	{
	public:
		struct FUpGunTeam                                          Team;                                                    // 0x0000(0x0038)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.Text_Players In team
	 */
	struct UHUD_TeamSelection_Team_C_Text_Players_In_team_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.Construct
	 */
	struct UHUD_TeamSelection_Team_C_Construct_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_TeamSelection_Team_C_BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.UpdateVisuals
	 */
	struct UHUD_TeamSelection_Team_C_UpdateVisuals_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHUD_TeamSelection_Team_C_BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHUD_TeamSelection_Team_C_BndEvt__HUD_TeamSelection_Team_Button_56_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.AppearWithDelay
	 */
	struct UHUD_TeamSelection_Team_C_AppearWithDelay_Params
	{	};

	/**
	 * Function HUD_TeamSelection_Team.HUD_TeamSelection_Team_C.ExecuteUbergraph_HUD_TeamSelection_Team
	 */
	struct UHUD_TeamSelection_Team_C_ExecuteUbergraph_HUD_TeamSelection_Team_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.OnAnyTeamButtonClicked
	 */
	struct UHUD_TeamSelection_C_OnAnyTeamButtonClicked_Params
	{	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.GetTimerText
	 */
	struct UHUD_TeamSelection_C_GetTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.OnPlayerTeamUpdated
	 */
	struct UHUD_TeamSelection_C_OnPlayerTeamUpdated_Params
	{
	public:
		struct FUpGunTeamId                                        Team;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QIE2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.UpdateCurrentTeam
	 */
	struct UHUD_TeamSelection_C_UpdateCurrentTeam_Params
	{	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.OnTeamsUpdated
	 */
	struct UHUD_TeamSelection_C_OnTeamsUpdated_Params
	{
	public:
		TArray<struct FUpGunTeam>                                  Teams;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.Construct
	 */
	struct UHUD_TeamSelection_C_Construct_Params
	{	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.OnShown
	 */
	struct UHUD_TeamSelection_C_OnShown_Params
	{	};

	/**
	 * Function HUD_TeamSelection.HUD_TeamSelection_C.ExecuteUbergraph_HUD_TeamSelection
	 */
	struct UHUD_TeamSelection_C_ExecuteUbergraph_HUD_TeamSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

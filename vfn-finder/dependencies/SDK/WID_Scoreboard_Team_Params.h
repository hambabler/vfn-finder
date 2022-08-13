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
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.GetTeamScore
	 */
	struct UWID_Scoreboard_Team_C_GetTeamScore_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.UpdateTeamScore
	 */
	struct UWID_Scoreboard_Team_C_UpdateTeamScore_Params
	{	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.OnPlayerScoreUpdated
	 */
	struct UWID_Scoreboard_Team_C_OnPlayerScoreUpdated_Params
	{	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.ReorderPlayerList
	 */
	struct UWID_Scoreboard_Team_C_ReorderPlayerList_Params
	{	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.UpdatePlayerList
	 */
	struct UWID_Scoreboard_Team_C_UpdatePlayerList_Params
	{	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.Construct
	 */
	struct UWID_Scoreboard_Team_C_Construct_Params
	{	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.Tick
	 */
	struct UWID_Scoreboard_Team_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.ExecuteUbergraph_WID_Scoreboard_Team
	 */
	struct UWID_Scoreboard_Team_C_ExecuteUbergraph_WID_Scoreboard_Team_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDT7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

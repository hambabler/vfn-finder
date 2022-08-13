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
	 * Function WID_Scoreboard.WID_Scoreboard_C.GetPlayerArray
	 */
	struct UWID_Scoreboard_C_GetPlayerArray_Params
	{
	public:
		TArray<class AUpGunBasePlayerState*>                       Players;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.ReorderPlayerList
	 */
	struct UWID_Scoreboard_C_ReorderPlayerList_Params
	{	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.UpdatePlayerList
	 */
	struct UWID_Scoreboard_C_UpdatePlayerList_Params
	{	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.Update Teams
	 */
	struct UWID_Scoreboard_C_Update_Teams_Params
	{
	public:
		TArray<struct FUpGunTeam>                                  Teams;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.Tick
	 */
	struct UWID_Scoreboard_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.Construct
	 */
	struct UWID_Scoreboard_C_Construct_Params
	{	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.AppearAnim
	 */
	struct UWID_Scoreboard_C_AppearAnim_Params
	{	};

	/**
	 * Function WID_Scoreboard.WID_Scoreboard_C.ExecuteUbergraph_WID_Scoreboard
	 */
	struct UWID_Scoreboard_C_ExecuteUbergraph_WID_Scoreboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZL9T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

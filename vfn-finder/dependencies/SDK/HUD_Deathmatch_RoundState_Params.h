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
	 * Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.UpdateLeadingPlayer
	 */
	struct UHUD_Deathmatch_RoundState_C_UpdateLeadingPlayer_Params
	{
	public:
		class AUpGunBasePlayerState*                               Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.OnGameStateChanged
	 */
	struct UHUD_Deathmatch_RoundState_C_OnGameStateChanged_Params
	{
	public:
		struct FGameplayTag                                        OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.GetRoundTimerText
	 */
	struct UHUD_Deathmatch_RoundState_C_GetRoundTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.OnRoundUpdated
	 */
	struct UHUD_Deathmatch_RoundState_C_OnRoundUpdated_Params
	{
	public:
		unsigned char                                              OldRound;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewRound;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DKL5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.Construct
	 */
	struct UHUD_Deathmatch_RoundState_C_Construct_Params
	{	};

	/**
	 * Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.ExecuteUbergraph_HUD_Deathmatch_RoundState
	 */
	struct UHUD_Deathmatch_RoundState_C_ExecuteUbergraph_HUD_Deathmatch_RoundState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6K82[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function HUD_PlayerActions.HUD_PlayerActions_C.GetScoreText
	 */
	struct UHUD_PlayerActions_C_GetScoreText_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUD_PlayerActions.HUD_PlayerActions_C.OnGivedScore
	 */
	struct UHUD_PlayerActions_C_OnGivedScore_Params
	{
	public:
		struct FGameplayTag                                        ScoreTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		float                                                      Score;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DLC7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerActions.HUD_PlayerActions_C.AddAction
	 */
	struct UHUD_PlayerActions_C_AddAction_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_PlayerActions.HUD_PlayerActions_C.OnScoreUpdated
	 */
	struct UHUD_PlayerActions_C_OnScoreUpdated_Params
	{	};

	/**
	 * Function HUD_PlayerActions.HUD_PlayerActions_C.Construct
	 */
	struct UHUD_PlayerActions_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerActions.HUD_PlayerActions_C.ExecuteUbergraph_HUD_PlayerActions
	 */
	struct UHUD_PlayerActions_C_ExecuteUbergraph_HUD_PlayerActions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

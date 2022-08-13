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
	 * Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.DidNotSpawn_7EABA1AD4B48F69AF8B94F800EE8245D
	 */
	struct UGA_Skill_LastFlame_C_DidNotSpawn_7EABA1AD4B48F69AF8B94F800EE8245D_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.Success_7EABA1AD4B48F69AF8B94F800EE8245D
	 */
	struct UGA_Skill_LastFlame_C_Success_7EABA1AD4B48F69AF8B94F800EE8245D_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.EventReceived_5FD4468B4DA4D5D20A770D82C5E79F45
	 */
	struct UGA_Skill_LastFlame_C_EventReceived_5FD4468B4DA4D5D20A770D82C5E79F45_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.K2_ActivateAbility
	 */
	struct UGA_Skill_LastFlame_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.ExecuteUbergraph_GA_Skill_LastFlame
	 */
	struct UGA_Skill_LastFlame_C_ExecuteUbergraph_GA_Skill_LastFlame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A43F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

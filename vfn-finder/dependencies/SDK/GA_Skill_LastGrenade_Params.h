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
	 * Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5
	 */
	struct UGA_Skill_LastGrenade_C_DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.Success_F298BCA14A29563ECBBC3D8ED88D37F5
	 */
	struct UGA_Skill_LastGrenade_C_Success_F298BCA14A29563ECBBC3D8ED88D37F5_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.EventReceived_94687D994008B101571C08AAA0028257
	 */
	struct UGA_Skill_LastGrenade_C_EventReceived_94687D994008B101571C08AAA0028257_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.K2_ActivateAbility
	 */
	struct UGA_Skill_LastGrenade_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.ExecuteUbergraph_GA_Skill_LastGrenade
	 */
	struct UGA_Skill_LastGrenade_C_ExecuteUbergraph_GA_Skill_LastGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y6NT[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

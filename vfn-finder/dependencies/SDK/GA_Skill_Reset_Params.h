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
	 * Function GA_Skill_Reset.GA_Skill_Reset_C.EventReceived_85FD00274469AC1CF58C0A976A30ECCA
	 */
	struct UGA_Skill_Reset_C_EventReceived_85FD00274469AC1CF58C0A976A30ECCA_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Skill_Reset.GA_Skill_Reset_C.K2_ActivateAbility
	 */
	struct UGA_Skill_Reset_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_Reset.GA_Skill_Reset_C.ExecuteUbergraph_GA_Skill_Reset
	 */
	struct UGA_Skill_Reset_C_ExecuteUbergraph_GA_Skill_Reset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KY3O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

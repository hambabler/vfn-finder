﻿#pragma once

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
	 * Function GA_Skill_LustForSpeed.GA_Skill_LustForSpeed_C.K2_ActivateAbility
	 */
	struct UGA_Skill_LustForSpeed_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_LustForSpeed.GA_Skill_LustForSpeed_C.K2_OnEndAbility
	 */
	struct UGA_Skill_LustForSpeed_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_LustForSpeed.GA_Skill_LustForSpeed_C.CheckVelocity
	 */
	struct UGA_Skill_LustForSpeed_C_CheckVelocity_Params
	{	};

	/**
	 * Function GA_Skill_LustForSpeed.GA_Skill_LustForSpeed_C.ExecuteUbergraph_GA_Skill_LustForSpeed
	 */
	struct UGA_Skill_LustForSpeed_C_ExecuteUbergraph_GA_Skill_LustForSpeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

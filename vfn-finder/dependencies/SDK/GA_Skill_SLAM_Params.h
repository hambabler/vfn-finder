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
	 * Function GA_Skill_SLAM.GA_Skill_SLAM_C.Earthquake
	 */
	struct UGA_Skill_SLAM_C_Earthquake_Params
	{	};

	/**
	 * Function GA_Skill_SLAM.GA_Skill_SLAM_C.K2_ActivateAbility
	 */
	struct UGA_Skill_SLAM_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_SLAM.GA_Skill_SLAM_C.OnCharacterLanded
	 */
	struct UGA_Skill_SLAM_C_OnCharacterLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function GA_Skill_SLAM.GA_Skill_SLAM_C.K2_OnEndAbility
	 */
	struct UGA_Skill_SLAM_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_SLAM.GA_Skill_SLAM_C.ExecuteUbergraph_GA_Skill_SLAM
	 */
	struct UGA_Skill_SLAM_C_ExecuteUbergraph_GA_Skill_SLAM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

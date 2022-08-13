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
	 * Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.MultiplySensibility
	 */
	struct UGA_Skill_Sight_Iron_C_MultiplySensibility_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NDHU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.OnRelease_C172A5A248A5057F148D79B631780B96
	 */
	struct UGA_Skill_Sight_Iron_C_OnRelease_C172A5A248A5057F148D79B631780B96_Params
	{
	public:
		float                                                      TimeHeld;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.K2_ActivateAbility
	 */
	struct UGA_Skill_Sight_Iron_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.K2_OnEndAbility
	 */
	struct UGA_Skill_Sight_Iron_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.ExecuteUbergraph_GA_Skill_Sight_Iron
	 */
	struct UGA_Skill_Sight_Iron_C_ExecuteUbergraph_GA_Skill_Sight_Iron_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

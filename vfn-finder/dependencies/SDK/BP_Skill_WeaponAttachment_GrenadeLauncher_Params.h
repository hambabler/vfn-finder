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
	 * Function BP_Skill_WeaponAttachment_GrenadeLauncher.BP_Skill_WeaponAttachment_GrenadeLauncher_C.OnRep_IsReloading
	 */
	struct ABP_Skill_WeaponAttachment_GrenadeLauncher_C_OnRep_IsReloading_Params
	{	};

	/**
	 * Function BP_Skill_WeaponAttachment_GrenadeLauncher.BP_Skill_WeaponAttachment_GrenadeLauncher_C.Fire
	 */
	struct ABP_Skill_WeaponAttachment_GrenadeLauncher_C_Fire_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Skill_WeaponAttachment_GrenadeLauncher.BP_Skill_WeaponAttachment_GrenadeLauncher_C.OnFired
	 */
	struct ABP_Skill_WeaponAttachment_GrenadeLauncher_C_OnFired_Params
	{	};

	/**
	 * Function BP_Skill_WeaponAttachment_GrenadeLauncher.BP_Skill_WeaponAttachment_GrenadeLauncher_C.ReceiveTick
	 */
	struct ABP_Skill_WeaponAttachment_GrenadeLauncher_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Skill_WeaponAttachment_GrenadeLauncher.BP_Skill_WeaponAttachment_GrenadeLauncher_C.ExecuteUbergraph_BP_Skill_WeaponAttachment_GrenadeLauncher
	 */
	struct ABP_Skill_WeaponAttachment_GrenadeLauncher_C_ExecuteUbergraph_BP_Skill_WeaponAttachment_GrenadeLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V7IE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

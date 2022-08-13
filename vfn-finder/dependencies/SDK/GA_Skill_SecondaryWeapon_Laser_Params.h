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
	 * Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.Trace
	 */
	struct UGA_Skill_SecondaryWeapon_Laser_C_Trace_Params
	{
	public:
		struct FHitResult                                          OutHit;                                                  // 0x0000(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             Normal;                                                  // 0x008C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.OnSync_2AADC4EB48EAEED90D8A83BE93834193
	 */
	struct UGA_Skill_SecondaryWeapon_Laser_C_OnSync_2AADC4EB48EAEED90D8A83BE93834193_Params
	{	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.K2_ActivateAbility
	 */
	struct UGA_Skill_SecondaryWeapon_Laser_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.ShootWithDelay
	 */
	struct UGA_Skill_SecondaryWeapon_Laser_C_ShootWithDelay_Params
	{	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser
	 */
	struct UGA_Skill_SecondaryWeapon_Laser_C_ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NF0A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

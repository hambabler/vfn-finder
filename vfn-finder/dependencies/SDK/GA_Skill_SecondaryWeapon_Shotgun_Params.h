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
	 * Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.Get Weapon
	 */
	struct UGA_Skill_SecondaryWeapon_Shotgun_C_Get_Weapon_Params
	{
	public:
		class UPrimitiveComponent*                                 Weapon;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.K2_ActivateAbility
	 */
	struct UGA_Skill_SecondaryWeapon_Shotgun_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.ShootWithDelay
	 */
	struct UGA_Skill_SecondaryWeapon_Shotgun_C_ShootWithDelay_Params
	{	};

	/**
	 * Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_Shotgun
	 */
	struct UGA_Skill_SecondaryWeapon_Shotgun_C_ExecuteUbergraph_GA_Skill_SecondaryWeapon_Shotgun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

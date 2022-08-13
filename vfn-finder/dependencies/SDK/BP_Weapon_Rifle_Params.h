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
	 * Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.StatBulletFired
	 */
	struct ABP_Weapon_Rifle_C_StatBulletFired_Params
	{
	public:
		int32_t                                                    InDelta;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.FindDesiredVector
	 */
	struct ABP_Weapon_Rifle_C_FindDesiredVector_Params
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeviationStrengh;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberOfBullets;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ActualBullet;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.OnFired
	 */
	struct ABP_Weapon_Rifle_C_OnFired_Params
	{	};

	/**
	 * Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.Fire
	 */
	struct ABP_Weapon_Rifle_C_Fire_Params
	{
	public:
		float                                                      SyncChance;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.ExecuteUbergraph_BP_Weapon_Rifle
	 */
	struct ABP_Weapon_Rifle_C_ExecuteUbergraph_BP_Weapon_Rifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

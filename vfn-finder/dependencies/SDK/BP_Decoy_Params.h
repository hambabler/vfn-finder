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
	 * Function BP_Decoy.BP_Decoy_C.SetCustom
	 */
	struct ABP_Decoy_C_SetCustom_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.Skill_Voodoo
	 */
	struct ABP_Decoy_C_Skill_Voodoo_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DB9C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageInstigator;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0010(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		unsigned char                                              UnknownData_6YHQ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.Shoot
	 */
	struct ABP_Decoy_C_Shoot_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.OnRep_IsDead
	 */
	struct ABP_Decoy_C_OnRep_IsDead_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ExplodeOnDeath
	 */
	struct ABP_Decoy_C_ExplodeOnDeath_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ExtractInfos
	 */
	struct ABP_Decoy_C_ExtractInfos_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ReceiveBeginPlay
	 */
	struct ABP_Decoy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ReceiveTick
	 */
	struct ABP_Decoy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.Death
	 */
	struct ABP_Decoy_C_Death_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ShootServer
	 */
	struct ABP_Decoy_C_ShootServer_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.Damage
	 */
	struct ABP_Decoy_C_Damage_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ReceiveDestroyed
	 */
	struct ABP_Decoy_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_Decoy.BP_Decoy_C.ExecuteUbergraph_BP_Decoy
	 */
	struct ABP_Decoy_C_ExecuteUbergraph_BP_Decoy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SBWQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

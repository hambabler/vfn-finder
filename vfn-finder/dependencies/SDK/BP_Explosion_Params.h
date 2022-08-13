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
	 * Function BP_Explosion.BP_Explosion_C.PushPhysicObjects
	 */
	struct ABP_Explosion_C_PushPhysicObjects_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.RedirectProjectiles
	 */
	struct ABP_Explosion_C_RedirectProjectiles_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UProjectileMovementComponent*                        Projectile;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.Repulsive
	 */
	struct ABP_Explosion_C_Repulsive_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.PlayCameraShake
	 */
	struct ABP_Explosion_C_PlayCameraShake_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.SpawnDecal
	 */
	struct ABP_Explosion_C_SpawnDecal_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.BaseParticleAndSound
	 */
	struct ABP_Explosion_C_BaseParticleAndSound_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.Find Explosion Size
	 */
	struct ABP_Explosion_C_Find_Explosion_Size_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.ReceiveBeginPlay
	 */
	struct ABP_Explosion_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Explosion.BP_Explosion_C.ExecuteUbergraph_BP_Explosion
	 */
	struct ABP_Explosion_C_ExecuteUbergraph_BP_Explosion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGYG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

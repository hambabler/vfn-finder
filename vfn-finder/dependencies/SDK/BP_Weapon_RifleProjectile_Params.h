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
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_ChargedSpray_DamageType
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_ChargedSpray_DamageType_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.SetupVFX
	 */
	struct ABP_Weapon_RifleProjectile_C_SetupVFX_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Heal
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_Heal_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.InitFire
	 */
	struct ABP_Weapon_RifleProjectile_C_InitFire_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_LifeSteal
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_LifeSteal_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Fire
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_Fire_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_ActivateBoomerang
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_ActivateBoomerang_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Boomerang
	 */
	struct ABP_Weapon_RifleProjectile_C_Boomerang_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_LustForLife
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_LustForLife_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Shrapnel
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_Shrapnel_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Heavy
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_Heavy_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ExtractSkills
	 */
	struct ABP_Weapon_RifleProjectile_C_ExtractSkills_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Bullet_Explosive
	 */
	struct ABP_Weapon_RifleProjectile_C_Bullet_Explosive_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Pierce Collisions
	 */
	struct ABP_Weapon_RifleProjectile_C_Pierce_Collisions_Params
	{
	public:
		ECollisionResponse                                         NewResponse;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLRG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Pierce
	 */
	struct ABP_Weapon_RifleProjectile_C_Pierce_Params
	{
	public:
		bool                                                       HasPierced;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Homing
	 */
	struct ABP_Weapon_RifleProjectile_C_Skill_Homing_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.GenerateColor
	 */
	struct ABP_Weapon_RifleProjectile_C_GenerateColor_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Decal&Particle
	 */
	struct ABP_Weapon_RifleProjectile_C_Decal_Particle_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.DestroyIfNoBounces
	 */
	struct ABP_Weapon_RifleProjectile_C_DestroyIfNoBounces_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.InitBounces
	 */
	struct ABP_Weapon_RifleProjectile_C_InitBounces_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeInitialSize__FinishedFunc
	 */
	struct ABP_Weapon_RifleProjectile_C_ChangeInitialSize__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeInitialSize__UpdateFunc
	 */
	struct ABP_Weapon_RifleProjectile_C_ChangeInitialSize__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Weapon_RifleProjectile_C_BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ReceiveBeginPlay
	 */
	struct ABP_Weapon_RifleProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ABP_Weapon_RifleProjectile_C_BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.RestoreVelocity
	 */
	struct ABP_Weapon_RifleProjectile_C_RestoreVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.RestoreCollisions
	 */
	struct ABP_Weapon_RifleProjectile_C_RestoreCollisions_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ReceiveTick
	 */
	struct ABP_Weapon_RifleProjectile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeBulletSize
	 */
	struct ABP_Weapon_RifleProjectile_C_ChangeBulletSize_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.OnFinalHit
	 */
	struct ABP_Weapon_RifleProjectile_C_OnFinalHit_Params
	{	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.OnSystemFinished
	 */
	struct ABP_Weapon_RifleProjectile_C_OnSystemFinished_Params
	{
	public:
		class UNiagaraComponent*                                   PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ExecuteUbergraph_BP_Weapon_RifleProjectile
	 */
	struct ABP_Weapon_RifleProjectile_C_ExecuteUbergraph_BP_Weapon_RifleProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

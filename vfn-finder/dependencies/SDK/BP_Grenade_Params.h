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
	 * Function BP_Grenade.BP_Grenade_C.Explode_Incendiary
	 */
	struct ABP_Grenade_C_Explode_Incendiary_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ChangeVelocityOnSpawn
	 */
	struct ABP_Grenade_C_ChangeVelocityOnSpawn_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ComputeSeed
	 */
	struct ABP_Grenade_C_ComputeSeed_Params
	{
	public:
		int32_t                                                    Modifier;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.IsSticky_Test
	 */
	struct ABP_Grenade_C_IsSticky_Test_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Sounds
	 */
	struct ABP_Grenade_C_Sounds_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Explode_Inception
	 */
	struct ABP_Grenade_C_Explode_Inception_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Explode_Smoke
	 */
	struct ABP_Grenade_C_Explode_Smoke_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Explode_Base
	 */
	struct ABP_Grenade_C_Explode_Base_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Explode_Frag
	 */
	struct ABP_Grenade_C_Explode_Frag_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Extract Infos
	 */
	struct ABP_Grenade_C_Extract_Infos_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ChooseMesh
	 */
	struct ABP_Grenade_C_ChooseMesh_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay
	 */
	struct ABP_Grenade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ActivateGrenade
	 */
	struct ABP_Grenade_C_ActivateGrenade_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.InitiateExplosion
	 */
	struct ABP_Grenade_C_InitiateExplosion_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.Explode
	 */
	struct ABP_Grenade_C_Explode_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ExplodeEarly
	 */
	struct ABP_Grenade_C_ExplodeEarly_Params
	{	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ReceiveHit
	 */
	struct ABP_Grenade_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_90VA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade
	 */
	struct ABP_Grenade_C_ExecuteUbergraph_BP_Grenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

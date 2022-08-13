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
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.Customization
	 */
	struct ABP_Weapon_Magazine_Projectile_C_Customization_Params
	{	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.SetSize
	 */
	struct ABP_Weapon_Magazine_Projectile_C_SetSize_Params
	{	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.OnRep_Hit
	 */
	struct ABP_Weapon_Magazine_Projectile_C_OnRep_Hit_Params
	{	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.HasHit
	 */
	struct ABP_Weapon_Magazine_Projectile_C_HasHit_Params
	{	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.ReceiveBeginPlay
	 */
	struct ABP_Weapon_Magazine_Projectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.HasHit_RPC
	 */
	struct ABP_Weapon_Magazine_Projectile_C_HasHit_RPC_Params
	{	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Weapon_Magazine_Projectile_C_BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature
	 */
	struct ABP_Weapon_Magazine_Projectile_C_BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.ExecuteUbergraph_BP_Weapon_Magazine_Projectile
	 */
	struct ABP_Weapon_Magazine_Projectile_C_ExecuteUbergraph_BP_Weapon_Magazine_Projectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

/**
 * Name: UpGun
 * Version: 0.5
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_ChargedSpray_DamageType
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_ChargedSpray_DamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_ChargedSpray_DamageType");
		
		ABP_Weapon_RifleProjectile_C_Skill_ChargedSpray_DamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.SetupVFX
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::SetupVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.SetupVFX");
		
		ABP_Weapon_RifleProjectile_C_SetupVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Heal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_Heal(class AActor** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Heal");
		
		ABP_Weapon_RifleProjectile_C_Skill_Heal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.InitFire
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::InitFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.InitFire");
		
		ABP_Weapon_RifleProjectile_C_InitFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_LifeSteal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_LifeSteal(class AActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_LifeSteal");
		
		ABP_Weapon_RifleProjectile_C_Skill_LifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_Fire(class AActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Fire");
		
		ABP_Weapon_RifleProjectile_C_Skill_Fire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_ActivateBoomerang
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_ActivateBoomerang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_ActivateBoomerang");
		
		ABP_Weapon_RifleProjectile_C_Skill_ActivateBoomerang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Boomerang
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Boomerang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Boomerang");
		
		ABP_Weapon_RifleProjectile_C_Boomerang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_LustForLife
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_LustForLife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_LustForLife");
		
		ABP_Weapon_RifleProjectile_C_Skill_LustForLife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Shrapnel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_Shrapnel(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Shrapnel");
		
		ABP_Weapon_RifleProjectile_C_Skill_Shrapnel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Heavy
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_Heavy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Heavy");
		
		ABP_Weapon_RifleProjectile_C_Skill_Heavy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ExtractSkills
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::ExtractSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ExtractSkills");
		
		ABP_Weapon_RifleProjectile_C_ExtractSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Bullet_Explosive
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Bullet_Explosive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Bullet_Explosive");
		
		ABP_Weapon_RifleProjectile_C_Bullet_Explosive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Pierce Collisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionResponse                                 NewResponse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::Pierce_Collisions(ECollisionResponse NewResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Pierce Collisions");
		
		ABP_Weapon_RifleProjectile_C_Pierce_Collisions_Params params {};
		params.NewResponse = NewResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Pierce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasPierced                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_RifleProjectile_C::Pierce(bool* HasPierced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Pierce");
		
		ABP_Weapon_RifleProjectile_C_Pierce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasPierced != nullptr)
			*HasPierced = params.HasPierced;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Homing
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Skill_Homing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Skill_Homing");
		
		ABP_Weapon_RifleProjectile_C_Skill_Homing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.GenerateColor
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::GenerateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.GenerateColor");
		
		ABP_Weapon_RifleProjectile_C_GenerateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Decal&Particle
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::Decal_Particle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.Decal&Particle");
		
		ABP_Weapon_RifleProjectile_C_Decal_Particle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.DestroyIfNoBounces
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::DestroyIfNoBounces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.DestroyIfNoBounces");
		
		ABP_Weapon_RifleProjectile_C_DestroyIfNoBounces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.InitBounces
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::InitBounces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.InitBounces");
		
		ABP_Weapon_RifleProjectile_C_InitBounces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeInitialSize__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::ChangeInitialSize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeInitialSize__FinishedFunc");
		
		ABP_Weapon_RifleProjectile_C_ChangeInitialSize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeInitialSize__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::ChangeInitialSize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeInitialSize__UpdateFunc");
		
		ABP_Weapon_RifleProjectile_C_ChangeInitialSize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Weapon_RifleProjectile_C::BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_Weapon_RifleProjectile_C_BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ReceiveBeginPlay");
		
		ABP_Weapon_RifleProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");
		
		ABP_Weapon_RifleProjectile_C_BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.RestoreVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::RestoreVelocity(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.RestoreVelocity");
		
		ABP_Weapon_RifleProjectile_C_RestoreVelocity_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.RestoreCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::RestoreCollisions(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.RestoreCollisions");
		
		ABP_Weapon_RifleProjectile_C_RestoreCollisions_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ReceiveTick");
		
		ABP_Weapon_RifleProjectile_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeBulletSize
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::ChangeBulletSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ChangeBulletSize");
		
		ABP_Weapon_RifleProjectile_C_ChangeBulletSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.OnFinalHit
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_RifleProjectile_C::OnFinalHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.OnFinalHit");
		
		ABP_Weapon_RifleProjectile_C_OnFinalHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.OnSystemFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::OnSystemFinished(class UNiagaraComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.OnSystemFinished");
		
		ABP_Weapon_RifleProjectile_C_OnSystemFinished_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ExecuteUbergraph_BP_Weapon_RifleProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_RifleProjectile_C::ExecuteUbergraph_BP_Weapon_RifleProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C.ExecuteUbergraph_BP_Weapon_RifleProjectile");
		
		ABP_Weapon_RifleProjectile_C_ExecuteUbergraph_BP_Weapon_RifleProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_RifleProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_RifleProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C");
		return ptr;
	}

}



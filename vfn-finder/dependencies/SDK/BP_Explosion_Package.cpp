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
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.PushPhysicObjects
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::PushPhysicObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.PushPhysicObjects");
		
		ABP_Explosion_C_PushPhysicObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.RedirectProjectiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UProjectileMovementComponent*                Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_C::RedirectProjectiles(class AActor** Actor, class UProjectileMovementComponent* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.RedirectProjectiles");
		
		ABP_Explosion_C_RedirectProjectiles_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.Repulsive
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::Repulsive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.Repulsive");
		
		ABP_Explosion_C_Repulsive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.PlayCameraShake
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::PlayCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.PlayCameraShake");
		
		ABP_Explosion_C_PlayCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.SpawnDecal
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::SpawnDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.SpawnDecal");
		
		ABP_Explosion_C_SpawnDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.BaseParticleAndSound
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::BaseParticleAndSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.BaseParticleAndSound");
		
		ABP_Explosion_C_BaseParticleAndSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.Find Explosion Size
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::Find_Explosion_Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.Find Explosion Size");
		
		ABP_Explosion_C_Find_Explosion_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.ReceiveBeginPlay");
		
		ABP_Explosion_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion.BP_Explosion_C.ExecuteUbergraph_BP_Explosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_C::ExecuteUbergraph_BP_Explosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion.BP_Explosion_C.ExecuteUbergraph_BP_Explosion");
		
		ABP_Explosion_C_ExecuteUbergraph_BP_Explosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosion.BP_Explosion_C");
		return ptr;
	}

}



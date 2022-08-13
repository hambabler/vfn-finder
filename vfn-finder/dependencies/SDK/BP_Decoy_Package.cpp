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
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.SetCustom
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::SetCustom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.SetCustom");
		
		ABP_Decoy_C_SetCustom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.Skill_Voodoo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Decoy_C::Skill_Voodoo(float* DamageTaken, class AActor** DamageInstigator, struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.Skill_Voodoo");
		
		ABP_Decoy_C_Skill_Voodoo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageTaken != nullptr)
			*DamageTaken = params.DamageTaken;
		if (DamageInstigator != nullptr)
			*DamageInstigator = params.DamageInstigator;
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.Shoot
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::Shoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.Shoot");
		
		ABP_Decoy_C_Shoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.OnRep_IsDead
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::OnRep_IsDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.OnRep_IsDead");
		
		ABP_Decoy_C_OnRep_IsDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ExplodeOnDeath
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::ExplodeOnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ExplodeOnDeath");
		
		ABP_Decoy_C_ExplodeOnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ExtractInfos
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::ExtractInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ExtractInfos");
		
		ABP_Decoy_C_ExtractInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ReceiveBeginPlay");
		
		ABP_Decoy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Decoy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ReceiveTick");
		
		ABP_Decoy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.Death
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.Death");
		
		ABP_Decoy_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ShootServer
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::ShootServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ShootServer");
		
		ABP_Decoy_C_ShootServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Decoy_C::Damage(const struct FGameplayEffectSpec& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.Damage");
		
		ABP_Decoy_C_Damage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Decoy_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ReceiveDestroyed");
		
		ABP_Decoy_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Decoy.BP_Decoy_C.ExecuteUbergraph_BP_Decoy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Decoy_C::ExecuteUbergraph_BP_Decoy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Decoy.BP_Decoy_C.ExecuteUbergraph_BP_Decoy");
		
		ABP_Decoy_C_ExecuteUbergraph_BP_Decoy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Decoy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Decoy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decoy.BP_Decoy_C");
		return ptr;
	}

}



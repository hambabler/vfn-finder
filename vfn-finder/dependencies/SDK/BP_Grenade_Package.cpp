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
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Explode_Incendiary
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Explode_Incendiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Explode_Incendiary");
		
		ABP_Grenade_C_Explode_Incendiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ChangeVelocityOnSpawn
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::ChangeVelocityOnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ChangeVelocityOnSpawn");
		
		ABP_Grenade_C_ChangeVelocityOnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ComputeSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_C::ComputeSeed(int32_t Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ComputeSeed");
		
		ABP_Grenade_C_ComputeSeed_Params params {};
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.IsSticky_Test
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Grenade_C::IsSticky_Test(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.IsSticky_Test");
		
		ABP_Grenade_C_IsSticky_Test_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Sounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Grenade_C::Sounds(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Sounds");
		
		ABP_Grenade_C_Sounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Explode_Inception
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Explode_Inception()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Explode_Inception");
		
		ABP_Grenade_C_Explode_Inception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Explode_Smoke
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Explode_Smoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Explode_Smoke");
		
		ABP_Grenade_C_Explode_Smoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Explode_Base
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Explode_Base()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Explode_Base");
		
		ABP_Grenade_C_Explode_Base_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Explode_Frag
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Explode_Frag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Explode_Frag");
		
		ABP_Grenade_C_Explode_Frag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Extract Infos
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Extract_Infos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Extract Infos");
		
		ABP_Grenade_C_Extract_Infos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ChooseMesh
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::ChooseMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ChooseMesh");
		
		ABP_Grenade_C_ChooseMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay");
		
		ABP_Grenade_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ActivateGrenade
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::ActivateGrenade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ActivateGrenade");
		
		ABP_Grenade_C_ActivateGrenade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.InitiateExplosion
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::InitiateExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.InitiateExplosion");
		
		ABP_Grenade_C_InitiateExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Explode
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Explode");
		
		ABP_Grenade_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ExplodeEarly
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_C::ExplodeEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ExplodeEarly");
		
		ABP_Grenade_C_ExplodeEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ReceiveHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Grenade_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ReceiveHit");
		
		ABP_Grenade_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_C::ExecuteUbergraph_BP_Grenade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade");
		
		ABP_Grenade_C_ExecuteUbergraph_BP_Grenade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade.BP_Grenade_C");
		return ptr;
	}

}



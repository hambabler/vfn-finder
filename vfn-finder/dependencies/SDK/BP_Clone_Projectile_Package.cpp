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
	 * 		Name   -> Function BP_Clone_Projectile.BP_Clone_Projectile_C.Decal&Particles
	 * 		Flags  -> ()
	 */
	void ABP_Clone_Projectile_C::Decal_Particles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clone_Projectile.BP_Clone_Projectile_C.Decal&Particles");
		
		ABP_Clone_Projectile_C_Decal_Particles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Clone_Projectile.BP_Clone_Projectile_C.SetColor
	 * 		Flags  -> ()
	 */
	void ABP_Clone_Projectile_C::SetColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clone_Projectile.BP_Clone_Projectile_C.SetColor");
		
		ABP_Clone_Projectile_C_SetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Clone_Projectile.BP_Clone_Projectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Clone_Projectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clone_Projectile.BP_Clone_Projectile_C.ReceiveBeginPlay");
		
		ABP_Clone_Projectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Clone_Projectile.BP_Clone_Projectile_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Clone_Projectile_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clone_Projectile.BP_Clone_Projectile_C.ReceiveDestroyed");
		
		ABP_Clone_Projectile_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Clone_Projectile.BP_Clone_Projectile_C.ReceiveHit
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
	void ABP_Clone_Projectile_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clone_Projectile.BP_Clone_Projectile_C.ReceiveHit");
		
		ABP_Clone_Projectile_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function BP_Clone_Projectile.BP_Clone_Projectile_C.ExecuteUbergraph_BP_Clone_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Clone_Projectile_C::ExecuteUbergraph_BP_Clone_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clone_Projectile.BP_Clone_Projectile_C.ExecuteUbergraph_BP_Clone_Projectile");
		
		ABP_Clone_Projectile_C_ExecuteUbergraph_BP_Clone_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Clone_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Clone_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Clone_Projectile.BP_Clone_Projectile_C");
		return ptr;
	}

}



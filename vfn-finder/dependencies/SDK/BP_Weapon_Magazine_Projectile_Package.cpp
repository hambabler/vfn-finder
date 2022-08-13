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
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.Customization
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Magazine_Projectile_C::Customization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.Customization");
		
		ABP_Weapon_Magazine_Projectile_C_Customization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.SetSize
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Magazine_Projectile_C::SetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.SetSize");
		
		ABP_Weapon_Magazine_Projectile_C_SetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.OnRep_Hit
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Magazine_Projectile_C::OnRep_Hit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.OnRep_Hit");
		
		ABP_Weapon_Magazine_Projectile_C_OnRep_Hit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.HasHit
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Magazine_Projectile_C::HasHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.HasHit");
		
		ABP_Weapon_Magazine_Projectile_C_HasHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Magazine_Projectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.ReceiveBeginPlay");
		
		ABP_Weapon_Magazine_Projectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.HasHit_RPC
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Magazine_Projectile_C::HasHit_RPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.HasHit_RPC");
		
		ABP_Weapon_Magazine_Projectile_C_HasHit_RPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Weapon_Magazine_Projectile_C::BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_Weapon_Magazine_Projectile_C_BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Magazine_Projectile_C::BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature");
		
		ABP_Weapon_Magazine_Projectile_C_BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.ExecuteUbergraph_BP_Weapon_Magazine_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Magazine_Projectile_C::ExecuteUbergraph_BP_Weapon_Magazine_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C.ExecuteUbergraph_BP_Weapon_Magazine_Projectile");
		
		ABP_Weapon_Magazine_Projectile_C_ExecuteUbergraph_BP_Weapon_Magazine_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_Magazine_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_Magazine_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C");
		return ptr;
	}

}



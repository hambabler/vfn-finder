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
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.OnRep_DamageTaken
	 * 		Flags  -> ()
	 */
	void ABP_Lampe_C::OnRep_DamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.OnRep_DamageTaken");
		
		ABP_Lampe_C_OnRep_DamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Lampe_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.UserConstructionScript");
		
		ABP_Lampe_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Lampe_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.Timeline_0__FinishedFunc");
		
		ABP_Lampe_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Lampe_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.Timeline_0__UpdateFunc");
		
		ABP_Lampe_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.ReactToDamageRPC
	 * 		Flags  -> ()
	 */
	void ABP_Lampe_C::ReactToDamageRPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.ReactToDamageRPC");
		
		ABP_Lampe_C_ReactToDamageRPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.ReceiveHit
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
	void ABP_Lampe_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.ReceiveHit");
		
		ABP_Lampe_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lampe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.ReceiveBeginPlay");
		
		ABP_Lampe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lampe.BP_Lampe_C.ExecuteUbergraph_BP_Lampe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lampe_C::ExecuteUbergraph_BP_Lampe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lampe.BP_Lampe_C.ExecuteUbergraph_BP_Lampe");
		
		ABP_Lampe_C_ExecuteUbergraph_BP_Lampe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lampe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lampe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lampe.BP_Lampe_C");
		return ptr;
	}

}



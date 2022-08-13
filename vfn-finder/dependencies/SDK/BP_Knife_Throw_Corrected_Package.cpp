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
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.CheckRange
	 * 		Flags  -> ()
	 */
	void ABP_Knife_Throw_Corrected_C::CheckRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.CheckRange");
		
		ABP_Knife_Throw_Corrected_C_CheckRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Knife_Throw_Corrected_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.ReceiveBeginPlay");
		
		ABP_Knife_Throw_Corrected_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.BndEvt__BP_Knife_Thrown_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Knife_Throw_Corrected_C::BndEvt__BP_Knife_Thrown_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.BndEvt__BP_Knife_Thrown_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_Knife_Throw_Corrected_C_BndEvt__BP_Knife_Thrown_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.Hit_Knife
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ComponentHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_Throw_Corrected_C::Hit_Knife(class AActor* Actor, class USceneComponent* ComponentHit, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.Hit_Knife");
		
		ABP_Knife_Throw_Corrected_C_Hit_Knife_Params params {};
		params.Actor = Actor;
		params.ComponentHit = ComponentHit;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.BndEvt__BP_Knife_Thrown_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_Throw_Corrected_C::BndEvt__BP_Knife_Thrown_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.BndEvt__BP_Knife_Thrown_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature");
		
		ABP_Knife_Throw_Corrected_C_BndEvt__BP_Knife_Thrown_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.Feedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBaseCharacter*                         UpGunChara                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_Throw_Corrected_C::Feedback(class AUpGunBaseCharacter* UpGunChara)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.Feedback");
		
		ABP_Knife_Throw_Corrected_C_Feedback_Params params {};
		params.UpGunChara = UpGunChara;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.ExecuteUbergraph_BP_Knife_Throw_Corrected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_Throw_Corrected_C::ExecuteUbergraph_BP_Knife_Throw_Corrected(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C.ExecuteUbergraph_BP_Knife_Throw_Corrected");
		
		ABP_Knife_Throw_Corrected_C_ExecuteUbergraph_BP_Knife_Throw_Corrected_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Knife_Throw_Corrected_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Knife_Throw_Corrected_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function LampeSuspendue.LampeSuspendue_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ALampeSuspendue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampeSuspendue.LampeSuspendue_C.UserConstructionScript");
		
		ALampeSuspendue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LampeSuspendue.LampeSuspendue_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ALampeSuspendue_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampeSuspendue.LampeSuspendue_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ALampeSuspendue_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LampeSuspendue.LampeSuspendue_C.Simulate physics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALampeSuspendue_C::Simulate_physics(const struct FVector& Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampeSuspendue.LampeSuspendue_C.Simulate physics");
		
		ALampeSuspendue_C_Simulate_physics_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LampeSuspendue.LampeSuspendue_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALampeSuspendue_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampeSuspendue.LampeSuspendue_C.ReceiveBeginPlay");
		
		ALampeSuspendue_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LampeSuspendue.LampeSuspendue_C.ExecuteUbergraph_LampeSuspendue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALampeSuspendue_C::ExecuteUbergraph_LampeSuspendue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampeSuspendue.LampeSuspendue_C.ExecuteUbergraph_LampeSuspendue");
		
		ALampeSuspendue_C_ExecuteUbergraph_LampeSuspendue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALampeSuspendue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALampeSuspendue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LampeSuspendue.LampeSuspendue_C");
		return ptr;
	}

}



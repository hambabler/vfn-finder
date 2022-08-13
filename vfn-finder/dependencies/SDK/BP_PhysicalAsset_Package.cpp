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
	 * 		Name   -> Function BP_PhysicalAsset.BP_PhysicalAsset_C.Impulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Impact_Point                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicalAsset_C::Impulse(const struct FVector& Impact_Point, const struct FVector& ImpactNormal, float Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhysicalAsset.BP_PhysicalAsset_C.Impulse");
		
		ABP_PhysicalAsset_C_Impulse_Params params {};
		params.Impact_Point = Impact_Point;
		params.ImpactNormal = ImpactNormal;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicalAsset.BP_PhysicalAsset_C.BndEvt__BP_PhysicalAsset_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PhysicalAsset_C::BndEvt__BP_PhysicalAsset_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhysicalAsset.BP_PhysicalAsset_C.BndEvt__BP_PhysicalAsset_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_PhysicalAsset_C_BndEvt__BP_PhysicalAsset_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_PhysicalAsset.BP_PhysicalAsset_C.ExecuteUbergraph_BP_PhysicalAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicalAsset_C::ExecuteUbergraph_BP_PhysicalAsset(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhysicalAsset.BP_PhysicalAsset_C.ExecuteUbergraph_BP_PhysicalAsset");
		
		ABP_PhysicalAsset_C_ExecuteUbergraph_BP_PhysicalAsset_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhysicalAsset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhysicalAsset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhysicalAsset.BP_PhysicalAsset_C");
		return ptr;
	}

}



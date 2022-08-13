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
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FootStep_C::PlaySound(const class FName& InSocketName, float VolumeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.PlaySound");
		
		ABP_FootStep_C_PlaySound_Params params {};
		params.InSocketName = InSocketName;
		params.VolumeMultiplier = VolumeMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.TraceFloor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_FootStep_C::TraceFloor(const class FName& Bone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.TraceFloor");
		
		ABP_FootStep_C_TraceFloor_Params params {};
		params.Bone = Bone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.DestroyTest
	 * 		Flags  -> ()
	 */
	void ABP_FootStep_C::DestroyTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.DestroyTest");
		
		ABP_FootStep_C_DestroyTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.Particle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FootStep_C::Particle(const class FName& Bone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.Particle");
		
		ABP_FootStep_C_Particle_Params params {};
		params.Bone = Bone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.Step
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FootStep_C::Step(const class FName& Name, float VolumeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.Step");
		
		ABP_FootStep_C_Step_Params params {};
		params.Name = Name;
		params.VolumeMultiplier = VolumeMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FootStep_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.ReceiveBeginPlay");
		
		ABP_FootStep_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_FootStep_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.ReceiveDestroyed");
		
		ABP_FootStep_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.Jump
	 * 		Flags  -> ()
	 */
	void ABP_FootStep_C::Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.Jump");
		
		ABP_FootStep_C_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.Land
	 * 		Flags  -> ()
	 */
	void ABP_FootStep_C::Land()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.Land");
		
		ABP_FootStep_C_Land_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootStep.BP_FootStep_C.ExecuteUbergraph_BP_FootStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FootStep_C::ExecuteUbergraph_BP_FootStep(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootStep.BP_FootStep_C.ExecuteUbergraph_BP_FootStep");
		
		ABP_FootStep_C_ExecuteUbergraph_BP_FootStep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FootStep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FootStep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FootStep.BP_FootStep_C");
		return ptr;
	}

}



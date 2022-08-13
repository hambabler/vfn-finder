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
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.Decals
	 * 		Flags  -> ()
	 */
	void ABP_Shrapnel_C::Decals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.Decals");
		
		ABP_Shrapnel_C_Decals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.DoesLinearFallOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldUseLinearFallOff                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Shrapnel_C::DoesLinearFallOff(bool ShouldUseLinearFallOff, float Time, float* ReturnDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.DoesLinearFallOff");
		
		ABP_Shrapnel_C_DoesLinearFallOff_Params params {};
		params.ShouldUseLinearFallOff = ShouldUseLinearFallOff;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnDamage != nullptr)
			*ReturnDamage = params.ReturnDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.ParticleEffect
	 * 		Flags  -> ()
	 */
	void ABP_Shrapnel_C::ParticleEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.ParticleEffect");
		
		ABP_Shrapnel_C_ParticleEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.ComputeSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Shrapnel_C::ComputeSeed(int32_t Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.ComputeSeed");
		
		ABP_Shrapnel_C_ComputeSeed_Params params {};
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.GenerateDirections
	 * 		Flags  -> ()
	 */
	void ABP_Shrapnel_C::GenerateDirections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.GenerateDirections");
		
		ABP_Shrapnel_C_GenerateDirections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Shrapnel_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.ReceiveBeginPlay");
		
		ABP_Shrapnel_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shrapnel.BP_Shrapnel_C.ExecuteUbergraph_BP_Shrapnel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Shrapnel_C::ExecuteUbergraph_BP_Shrapnel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shrapnel.BP_Shrapnel_C.ExecuteUbergraph_BP_Shrapnel");
		
		ABP_Shrapnel_C_ExecuteUbergraph_BP_Shrapnel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Shrapnel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Shrapnel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shrapnel.BP_Shrapnel_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.Get Angular from Direction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DirectionnalVector                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxDesiredRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DesiredAngle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UpGunSpectatorPawn_C::Get_Angular_from_Direction(struct FVector* DirectionnalVector, float MaxDesiredRotation, float* DesiredAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.Get Angular from Direction");
		
		ABP_UpGunSpectatorPawn_C_Get_Angular_from_Direction_Params params {};
		params.MaxDesiredRotation = MaxDesiredRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DirectionnalVector != nullptr)
			*DirectionnalVector = params.DirectionnalVector;
		if (DesiredAngle != nullptr)
			*DesiredAngle = params.DesiredAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.Orient
	 * 		Flags  -> ()
	 */
	void ABP_UpGunSpectatorPawn_C::Orient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.Orient");
		
		ABP_UpGunSpectatorPawn_C_Orient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UpGunSpectatorPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.ReceiveTick");
		
		ABP_UpGunSpectatorPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.ExecuteUbergraph_BP_UpGunSpectatorPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UpGunSpectatorPawn_C::ExecuteUbergraph_BP_UpGunSpectatorPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.ExecuteUbergraph_BP_UpGunSpectatorPawn");
		
		ABP_UpGunSpectatorPawn_C_ExecuteUbergraph_BP_UpGunSpectatorPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UpGunSpectatorPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UpGunSpectatorPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C");
		return ptr;
	}

}



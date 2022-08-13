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
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.GenRandomValue
	 * 		Flags  -> ()
	 */
	float UBPC_Shake_C::GenRandomValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.GenRandomValue");
		
		UBPC_Shake_C_GenRandomValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.GenNewRot
	 * 		Flags  -> ()
	 */
	void UBPC_Shake_C::GenNewRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.GenNewRot");
		
		UBPC_Shake_C_GenNewRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.SelectComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToShake                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Shake_C::SelectComponent(class USceneComponent* ComponentToShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.SelectComponent");
		
		UBPC_Shake_C_SelectComponent_Params params {};
		params.ComponentToShake = ComponentToShake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Shake_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.ReceiveTick");
		
		UBPC_Shake_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.Shake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Shake_C::Shake(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.Shake");
		
		UBPC_Shake_C_Shake_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Shake_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.ReceiveBeginPlay");
		
		UBPC_Shake_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Shake.BPC_Shake_C.ExecuteUbergraph_BPC_Shake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Shake_C::ExecuteUbergraph_BPC_Shake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Shake.BPC_Shake_C.ExecuteUbergraph_BPC_Shake");
		
		UBPC_Shake_C_ExecuteUbergraph_BPC_Shake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Shake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Shake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Shake.BPC_Shake_C");
		return ptr;
	}

}



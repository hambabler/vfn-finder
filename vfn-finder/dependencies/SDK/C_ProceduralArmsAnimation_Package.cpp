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
	 * 		Name   -> Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Yaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ProceduralArmsAnimation_C::Arms_Yaw(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Yaw");
		
		UC_ProceduralArmsAnimation_C_Arms_Yaw_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Pitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ProceduralArmsAnimation_C::Arms_Pitch(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Pitch");
		
		UC_ProceduralArmsAnimation_C_Arms_Pitch_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Roll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ProceduralArmsAnimation_C::Arms_Roll(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Roll");
		
		UC_ProceduralArmsAnimation_C_Arms_Roll_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UC_ProceduralArmsAnimation_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ReceiveBeginPlay");
		
		UC_ProceduralArmsAnimation_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ProceduralArmsAnimation_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ReceiveTick");
		
		UC_ProceduralArmsAnimation_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ExecuteUbergraph_C_ProceduralArmsAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ProceduralArmsAnimation_C::ExecuteUbergraph_C_ProceduralArmsAnimation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ExecuteUbergraph_C_ProceduralArmsAnimation");
		
		UC_ProceduralArmsAnimation_C_ExecuteUbergraph_C_ProceduralArmsAnimation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UC_ProceduralArmsAnimation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_ProceduralArmsAnimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C");
		return ptr;
	}

}



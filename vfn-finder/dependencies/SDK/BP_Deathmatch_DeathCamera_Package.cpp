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
	 * 		Name   -> Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_DeathCamera_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_1");
		
		ABP_Deathmatch_DeathCamera_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_DeathCamera_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_2");
		
		ABP_Deathmatch_DeathCamera_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_DeathCamera_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.ReceiveTick");
		
		ABP_Deathmatch_DeathCamera_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.ExecuteUbergraph_BP_Deathmatch_DeathCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_DeathCamera_C::ExecuteUbergraph_BP_Deathmatch_DeathCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C.ExecuteUbergraph_BP_Deathmatch_DeathCamera");
		
		ABP_Deathmatch_DeathCamera_C_ExecuteUbergraph_BP_Deathmatch_DeathCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Deathmatch_DeathCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Deathmatch_DeathCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C");
		return ptr;
	}

}



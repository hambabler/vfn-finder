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
	 * 		Name   -> Function BP_Deathmatch_PlayerController.BP_Deathmatch_PlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_PlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_PlayerController.BP_Deathmatch_PlayerController_C.ReceiveBeginPlay");
		
		ABP_Deathmatch_PlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_PlayerController.BP_Deathmatch_PlayerController_C.ExecuteUbergraph_BP_Deathmatch_PlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_PlayerController_C::ExecuteUbergraph_BP_Deathmatch_PlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_PlayerController.BP_Deathmatch_PlayerController_C.ExecuteUbergraph_BP_Deathmatch_PlayerController");
		
		ABP_Deathmatch_PlayerController_C_ExecuteUbergraph_BP_Deathmatch_PlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Deathmatch_PlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Deathmatch_PlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathmatch_PlayerController.BP_Deathmatch_PlayerController_C");
		return ptr;
	}

}



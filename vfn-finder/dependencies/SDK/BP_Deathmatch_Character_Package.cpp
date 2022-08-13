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
	 * 		Name   -> Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_Character_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.ReceiveBeginPlay");
		
		ABP_Deathmatch_Character_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.BP_OnSpawnDefaultPlayerWeapons
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_Character_C::BP_OnSpawnDefaultPlayerWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.BP_OnSpawnDefaultPlayerWeapons");
		
		ABP_Deathmatch_Character_C_BP_OnSpawnDefaultPlayerWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.ShowHealthBar
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_Character_C::ShowHealthBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.ShowHealthBar");
		
		ABP_Deathmatch_Character_C_ShowHealthBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.ExecuteUbergraph_BP_Deathmatch_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_Character_C::ExecuteUbergraph_BP_Deathmatch_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_Character.BP_Deathmatch_Character_C.ExecuteUbergraph_BP_Deathmatch_Character");
		
		ABP_Deathmatch_Character_C_ExecuteUbergraph_BP_Deathmatch_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Deathmatch_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Deathmatch_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathmatch_Character.BP_Deathmatch_Character_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_Lobby_Character.BP_Lobby_Character_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_Character_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_Character.BP_Lobby_Character_C.ReceiveBeginPlay");
		
		ABP_Lobby_Character_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_Character.BP_Lobby_Character_C.BP_OnSpawnDefaultPlayerWeapons
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_Character_C::BP_OnSpawnDefaultPlayerWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_Character.BP_Lobby_Character_C.BP_OnSpawnDefaultPlayerWeapons");
		
		ABP_Lobby_Character_C_BP_OnSpawnDefaultPlayerWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_Character.BP_Lobby_Character_C.ExecuteUbergraph_BP_Lobby_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_Character_C::ExecuteUbergraph_BP_Lobby_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_Character.BP_Lobby_Character_C.ExecuteUbergraph_BP_Lobby_Character");
		
		ABP_Lobby_Character_C_ExecuteUbergraph_BP_Lobby_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lobby_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lobby_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_Character.BP_Lobby_Character_C");
		return ptr;
	}

}



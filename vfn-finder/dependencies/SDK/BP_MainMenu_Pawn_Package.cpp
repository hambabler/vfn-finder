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
	 * 		Name   -> Function BP_MainMenu_Pawn.BP_MainMenu_Pawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MainMenu_Pawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Pawn.BP_MainMenu_Pawn_C.ReceiveBeginPlay");
		
		ABP_MainMenu_Pawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Pawn.BP_MainMenu_Pawn_C.ExecuteUbergraph_BP_MainMenu_Pawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MainMenu_Pawn_C::ExecuteUbergraph_BP_MainMenu_Pawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Pawn.BP_MainMenu_Pawn_C.ExecuteUbergraph_BP_MainMenu_Pawn");
		
		ABP_MainMenu_Pawn_C_ExecuteUbergraph_BP_MainMenu_Pawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MainMenu_Pawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MainMenu_Pawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenu_Pawn.BP_MainMenu_Pawn_C");
		return ptr;
	}

}



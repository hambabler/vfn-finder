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
	 * 		Name   -> Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.OnFailure_545312D845C1C57B4FC1D5902FDDFEC4
	 * 		Flags  -> ()
	 */
	void ABP_MainMenu_GameMode_C::OnFailure_545312D845C1C57B4FC1D5902FDDFEC4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.OnFailure_545312D845C1C57B4FC1D5902FDDFEC4");
		
		ABP_MainMenu_GameMode_C_OnFailure_545312D845C1C57B4FC1D5902FDDFEC4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.OnSuccess_545312D845C1C57B4FC1D5902FDDFEC4
	 * 		Flags  -> ()
	 */
	void ABP_MainMenu_GameMode_C::OnSuccess_545312D845C1C57B4FC1D5902FDDFEC4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.OnSuccess_545312D845C1C57B4FC1D5902FDDFEC4");
		
		ABP_MainMenu_GameMode_C_OnSuccess_545312D845C1C57B4FC1D5902FDDFEC4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MainMenu_GameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.ReceiveBeginPlay");
		
		ABP_MainMenu_GameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.ExecuteUbergraph_BP_MainMenu_GameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MainMenu_GameMode_C::ExecuteUbergraph_BP_MainMenu_GameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.ExecuteUbergraph_BP_MainMenu_GameMode");
		
		ABP_MainMenu_GameMode_C_ExecuteUbergraph_BP_MainMenu_GameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MainMenu_GameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MainMenu_GameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenu_GameMode.BP_MainMenu_GameMode_C");
		return ptr;
	}

}



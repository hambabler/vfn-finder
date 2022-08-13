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
	 * 		Name   -> Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.CountScaredPlayers
	 * 		Flags  -> ()
	 */
	void UGA_Ghost_Bouh_C::CountScaredPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.CountScaredPlayers");
		
		UGA_Ghost_Bouh_C_CountScaredPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.OnFinish_DEABB5B6479F5D91E7EEE3AE0C2C7780
	 * 		Flags  -> ()
	 */
	void UGA_Ghost_Bouh_C::OnFinish_DEABB5B6479F5D91E7EEE3AE0C2C7780()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.OnFinish_DEABB5B6479F5D91E7EEE3AE0C2C7780");
		
		UGA_Ghost_Bouh_C_OnFinish_DEABB5B6479F5D91E7EEE3AE0C2C7780_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Ghost_Bouh_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.K2_ActivateAbility");
		
		UGA_Ghost_Bouh_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Ghost_Bouh_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.K2_OnEndAbility");
		
		UGA_Ghost_Bouh_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.ExecuteUbergraph_GA_Ghost_Bouh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Ghost_Bouh_C::ExecuteUbergraph_GA_Ghost_Bouh(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Ghost_Bouh.GA_Ghost_Bouh_C.ExecuteUbergraph_GA_Ghost_Bouh");
		
		UGA_Ghost_Bouh_C_ExecuteUbergraph_GA_Ghost_Bouh_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Ghost_Bouh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Ghost_Bouh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ghost_Bouh.GA_Ghost_Bouh_C");
		return ptr;
	}

}



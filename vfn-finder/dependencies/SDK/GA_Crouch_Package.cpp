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
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.OnRelease_F5F39A2B40E1A956234F9BB116E9F99F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeHeld                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Crouch_C::OnRelease_F5F39A2B40E1A956234F9BB116E9F99F(float TimeHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.OnRelease_F5F39A2B40E1A956234F9BB116E9F99F");
		
		UGA_Crouch_C_OnRelease_F5F39A2B40E1A956234F9BB116E9F99F_Params params {};
		params.TimeHeld = TimeHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Crouch_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.K2_ActivateAbility");
		
		UGA_Crouch_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Crouch_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.K2_OnEndAbility");
		
		UGA_Crouch_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.ExecuteUbergraph_GA_Crouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Crouch_C::ExecuteUbergraph_GA_Crouch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.ExecuteUbergraph_GA_Crouch");
		
		UGA_Crouch_C_ExecuteUbergraph_GA_Crouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Crouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Crouch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Crouch.GA_Crouch_C");
		return ptr;
	}

}



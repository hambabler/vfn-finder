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
	 * 		Name   -> Function PlafondGen.PlafondGen_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APlafondGen_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlafondGen.PlafondGen_C.UserConstructionScript");
		
		APlafondGen_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlafondGen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlafondGen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlafondGen.PlafondGen_C");
		return ptr;
	}

}



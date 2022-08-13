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
	 * 		Name   -> Function Palissade_builder.Palissade_builder_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APalissade_builder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Palissade_builder.Palissade_builder_C.UserConstructionScript");
		
		APalissade_builder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APalissade_builder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APalissade_builder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Palissade_builder.Palissade_builder_C");
		return ptr;
	}

}



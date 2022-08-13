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
	 * 		Name   -> PredefinedFunction UGE_Environment_Damage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Environment_Damage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Environment_Damage.GE_Environment_Damage_C");
		return ptr;
	}

}



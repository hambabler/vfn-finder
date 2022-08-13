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
	 * 		Name   -> PredefinedFunction ABP_Deathmatch_Ghost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Deathmatch_Ghost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C");
		return ptr;
	}

}



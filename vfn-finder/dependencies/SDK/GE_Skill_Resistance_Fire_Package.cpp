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
	 * 		Name   -> PredefinedFunction UGE_Skill_Resistance_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Skill_Resistance_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Skill_Resistance_Fire.GE_Skill_Resistance_Fire_C");
		return ptr;
	}

}



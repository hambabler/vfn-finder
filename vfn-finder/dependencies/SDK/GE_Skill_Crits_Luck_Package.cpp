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
	 * 		Name   -> PredefinedFunction UGE_Skill_Crits_Luck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Skill_Crits_Luck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Skill_Crits_Luck.GE_Skill_Crits_Luck_C");
		return ptr;
	}

}



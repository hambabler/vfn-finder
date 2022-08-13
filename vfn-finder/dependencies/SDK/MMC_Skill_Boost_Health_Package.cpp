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
	 * 		Name   -> PredefinedFunction UMMC_Skill_Boost_Health_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMMC_Skill_Boost_Health_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MMC_Skill_Boost_Health.MMC_Skill_Boost_Health_C");
		return ptr;
	}

}



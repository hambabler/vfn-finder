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
	 * 		Name   -> PredefinedFunction UGE_Skill_ControlledExplosion_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Skill_ControlledExplosion_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Skill_ControlledExplosion_Base.GE_Skill_ControlledExplosion_Base_C");
		return ptr;
	}

}



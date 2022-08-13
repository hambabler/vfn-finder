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
	 * 		Name   -> PredefinedFunction UGE_Skill_Rifle_Bullet_Boomerang_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Skill_Rifle_Bullet_Boomerang_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Skill_Rifle_Bullet_Boomerang.GE_Skill_Rifle_Bullet_Boomerang_C");
		return ptr;
	}

}



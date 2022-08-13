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
	 * 		Name   -> PredefinedFunction UGE_Damage_Explosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Damage_Explosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Damage_Explosion.GE_Damage_Explosion_C");
		return ptr;
	}

}



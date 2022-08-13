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
	 * 		Name   -> PredefinedFunction UGE_Weapon_Damage_Knife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Weapon_Damage_Knife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Weapon_Damage_Knife.GE_Weapon_Damage_Knife_C");
		return ptr;
	}

}



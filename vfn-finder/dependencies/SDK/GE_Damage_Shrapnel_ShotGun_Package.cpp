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
	 * 		Name   -> PredefinedFunction UGE_Damage_Shrapnel_ShotGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Damage_Shrapnel_ShotGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Damage_Shrapnel_ShotGun.GE_Damage_Shrapnel_ShotGun_C");
		return ptr;
	}

}



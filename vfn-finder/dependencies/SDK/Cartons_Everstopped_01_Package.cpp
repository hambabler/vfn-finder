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
	 * 		Name   -> PredefinedFunction ACartons_Everstopped_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACartons_Everstopped_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cartons_Everstopped_01.Cartons-Everstopped_01_C");
		return ptr;
	}

}



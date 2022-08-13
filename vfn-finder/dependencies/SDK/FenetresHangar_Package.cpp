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
	 * 		Name   -> PredefinedFunction AFenetresHangar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFenetresHangar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FenetresHangar.FenetresHangar_C");
		return ptr;
	}

}



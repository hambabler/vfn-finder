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
	 * 		Name   -> PredefinedFunction ULobbyMainHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULobbyMainHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyMainHUD.LobbyMainHUD_C");
		return ptr;
	}

}



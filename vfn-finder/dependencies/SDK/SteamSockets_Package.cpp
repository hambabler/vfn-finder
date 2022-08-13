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
	 * 		Name   -> PredefinedFunction USteamSocketsNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamSocketsNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamSockets.SteamSocketsNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamSocketsNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamSocketsNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamSockets.SteamSocketsNetDriver");
		return ptr;
	}

}



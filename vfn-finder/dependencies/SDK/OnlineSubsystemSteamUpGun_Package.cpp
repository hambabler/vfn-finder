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
	 * 		Name   -> PredefinedFunction USteamUpGunAuthComponentModuleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUpGunAuthComponentModuleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemSteamUpGun.SteamUpGunAuthComponentModuleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUpGunNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUpGunNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemSteamUpGun.SteamUpGunNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUpGunNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUpGunNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemSteamUpGun.SteamUpGunNetDriver");
		return ptr;
	}

}



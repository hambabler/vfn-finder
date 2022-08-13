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
	 * 		Name   -> PredefinedFunction UBP_Chatbox_Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Chatbox_Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chatbox_Message.BP_Chatbox_Message_C");
		return ptr;
	}

}



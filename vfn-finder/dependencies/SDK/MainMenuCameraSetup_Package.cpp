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
	 * 		Name   -> Function MainMenuCameraSetup.MainMenuCameraSetup_C.ShowInitialLanguageChoice
	 * 		Flags  -> ()
	 */
	void AMainMenuCameraSetup_C::ShowInitialLanguageChoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuCameraSetup.MainMenuCameraSetup_C.ShowInitialLanguageChoice");
		
		AMainMenuCameraSetup_C_ShowInitialLanguageChoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenuCameraSetup.MainMenuCameraSetup_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainMenuCameraSetup_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuCameraSetup.MainMenuCameraSetup_C.ReceiveBeginPlay");
		
		AMainMenuCameraSetup_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenuCameraSetup.MainMenuCameraSetup_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuCameraSetup_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuCameraSetup.MainMenuCameraSetup_C.ReceiveTick");
		
		AMainMenuCameraSetup_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenuCameraSetup.MainMenuCameraSetup_C.ExecuteUbergraph_MainMenuCameraSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuCameraSetup_C::ExecuteUbergraph_MainMenuCameraSetup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuCameraSetup.MainMenuCameraSetup_C.ExecuteUbergraph_MainMenuCameraSetup");
		
		AMainMenuCameraSetup_C_ExecuteUbergraph_MainMenuCameraSetup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuCameraSetup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuCameraSetup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuCameraSetup.MainMenuCameraSetup_C");
		return ptr;
	}

}



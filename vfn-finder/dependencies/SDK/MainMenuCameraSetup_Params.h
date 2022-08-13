#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MainMenuCameraSetup.MainMenuCameraSetup_C.ShowInitialLanguageChoice
	 */
	struct AMainMenuCameraSetup_C_ShowInitialLanguageChoice_Params
	{	};

	/**
	 * Function MainMenuCameraSetup.MainMenuCameraSetup_C.ReceiveBeginPlay
	 */
	struct AMainMenuCameraSetup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenuCameraSetup.MainMenuCameraSetup_C.ReceiveTick
	 */
	struct AMainMenuCameraSetup_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuCameraSetup.MainMenuCameraSetup_C.ExecuteUbergraph_MainMenuCameraSetup
	 */
	struct AMainMenuCameraSetup_C_ExecuteUbergraph_MainMenuCameraSetup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

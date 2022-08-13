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
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.VisualsOnButtonClicked
	 */
	struct UCustom_Screen_Button_C_VisualsOnButtonClicked_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.Exceptions
	 */
	struct UCustom_Screen_Button_C_Exceptions_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.GetDefaultTintColor
	 */
	struct UCustom_Screen_Button_C_GetDefaultTintColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.UpdatePlayerData
	 */
	struct UCustom_Screen_Button_C_UpdatePlayerData_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.PlayClickedAnimation
	 */
	struct UCustom_Screen_Button_C_PlayClickedAnimation_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.ChangeTint
	 */
	struct UCustom_Screen_Button_C_ChangeTint_Params
	{
	public:
		struct FLinearColor                                        LinearColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.GenerateTints
	 */
	struct UCustom_Screen_Button_C_GenerateTints_Params
	{
	public:
		TArray<struct FLinearColor>                                Teintes;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.GenerateScreen
	 */
	struct UCustom_Screen_Button_C_GenerateScreen_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCustom_Screen_Button_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCustom_Screen_Button_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCustom_Screen_Button_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.Construct
	 */
	struct UCustom_Screen_Button_C_Construct_Params
	{	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.ChangeTint_Delegate
	 */
	struct UCustom_Screen_Button_C_ChangeTint_Delegate_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Screen_Button.Custom_Screen_Button_C.ExecuteUbergraph_Custom_Screen_Button
	 */
	struct UCustom_Screen_Button_C_ExecuteUbergraph_Custom_Screen_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W7NV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

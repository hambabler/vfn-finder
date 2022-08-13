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
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.VisualsOnButtonClicked
	 */
	struct UCustom_Parent_Button_C_VisualsOnButtonClicked_Params
	{	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.IsCosmeticEquiped
	 */
	struct UCustom_Parent_Button_C_IsCosmeticEquiped_Params
	{
	public:
		bool                                                       IsEquiped;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.PlayAnimOnPrevis
	 */
	struct UCustom_Parent_Button_C_PlayAnimOnPrevis_Params
	{
	public:
		EUpGunCosmeticType                                         Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.OnFocusReceived
	 */
	struct UCustom_Parent_Button_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.Construct
	 */
	struct UCustom_Parent_Button_C_Construct_Params
	{	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.AppearBlend
	 */
	struct UCustom_Parent_Button_C_AppearBlend_Params
	{	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.OnMouseEnter
	 */
	struct UCustom_Parent_Button_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.OnMouseLeave
	 */
	struct UCustom_Parent_Button_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.OnFocusLost
	 */
	struct UCustom_Parent_Button_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Custom_Parent_Button.Custom_Parent_Button_C.ExecuteUbergraph_Custom_Parent_Button
	 */
	struct UCustom_Parent_Button_C_ExecuteUbergraph_Custom_Parent_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

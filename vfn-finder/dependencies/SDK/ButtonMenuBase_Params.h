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
	 * Function ButtonMenuBase.ButtonMenuBase_C.OnFocusReceived
	 */
	struct UButtonMenuBase_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UButtonMenuBase_C_BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.Tick
	 */
	struct UButtonMenuBase_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UButtonMenuBase_C_BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.PreConstruct
	 */
	struct UButtonMenuBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UButtonMenuBase_C_BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.OnFocused
	 */
	struct UButtonMenuBase_C_OnFocused_Params
	{	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.OnFocusLost
	 */
	struct UButtonMenuBase_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.ExecuteUbergraph_ButtonMenuBase
	 */
	struct UButtonMenuBase_C_ExecuteUbergraph_ButtonMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ButtonMenuBase.ButtonMenuBase_C.ButtonClicked__DelegateSignature
	 */
	struct UButtonMenuBase_C_ButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.InitiateSliderAndText
	 */
	struct UOptions_Graphismes_Entry_C_InitiateSliderAndText_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6WJG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.GenerateComboBox
	 */
	struct UOptions_Graphismes_Entry_C_GenerateComboBox_Params
	{	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.PreConstruct
	 */
	struct UOptions_Graphismes_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.ExecuteUbergraph_Options_Graphismes_Entry
	 */
	struct UOptions_Graphismes_Entry_C_ExecuteUbergraph_Options_Graphismes_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QOCY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.StoppedSlider__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_StoppedSlider__DelegateSignature_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes_Entry.Options_Graphismes_Entry_C.UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_Entry_C_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B4YN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

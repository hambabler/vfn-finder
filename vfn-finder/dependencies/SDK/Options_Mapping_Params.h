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
	 * Function Options_Mapping.Options_Mapping_C.InitiateWidgets
	 */
	struct UOptions_Mapping_C_InitiateWidgets_Params
	{	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.PopulateKeyMapping
	 */
	struct UOptions_Mapping_C_PopulateKeyMapping_Params
	{	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.Construct
	 */
	struct UOptions_Mapping_C_Construct_Params
	{	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 */
	struct UOptions_Mapping_C_BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct UOptions_Mapping_C_BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature
	 */
	struct UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature
	 */
	struct UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D4S6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Mapping_C_BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MS2J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Mapping.Options_Mapping_C.ExecuteUbergraph_Options_Mapping
	 */
	struct UOptions_Mapping_C_ExecuteUbergraph_Options_Mapping_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X28M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

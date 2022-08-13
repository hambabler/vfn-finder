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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Options_Mapping.Options_Mapping_C
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class UOptions_Mapping_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Apply;                                                   // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_AxisY;                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_FOV;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Sensibility;                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxMappingAction;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxMappingAxis;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxMappingMenu;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Apply;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Reset;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GameInstance;                                            // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitiateWidgets();
		void PopulateKeyMapping();
		void Construct();
		void BndEvt__Options_Mapping_W_button_Reset_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void BndEvt__Options_Mapping_W_button_Apply_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_2_StoppedSlider__DelegateSignature(float SliderValue);
		void BndEvt__Options_Mapping_Options_Graphismes_Sensibility_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature(float SliderValue);
		void BndEvt__Options_Mapping_Options_Graphismes_AxisY_K2Node_ComponentBoundEvent_4_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Mapping_Options_Graphismes_FOV_K2Node_ComponentBoundEvent_6_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void ExecuteUbergraph_Options_Mapping(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

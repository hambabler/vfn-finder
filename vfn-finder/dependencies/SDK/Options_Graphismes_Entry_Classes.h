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
	 * WidgetBlueprintGeneratedClass Options_Graphismes_Entry.Options_Graphismes_Entry_C
	 * Size -> 0x00AC (FullSize[0x030C] - InheritedSize[0x0260])
	 */
	class UOptions_Graphismes_Entry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_fond;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Checkbox_C*                                  Button_Checkbox;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     ComboBoxString_152;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Slider;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_186;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Label;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Slider;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    OptionIndex;                                             // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ECSH[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Label;                                                   // 0x02A8(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             UpdatedEntry;                                            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FText>                                        ComboBoxEntry;                                           // 0x02D0(0x0010) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             StoppedSlider;                                           // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      Slider_MinValue;                                         // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Slider_MaxValue;                                         // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DecimalNumber;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BorderColor;                                             // 0x02FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitiateSliderAndText(float InValue);
		void GenerateComboBox();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Options_Graphismes_Entry_Button_Checkbox_K2Node_ComponentBoundEvent_0_ClickedOnCheckbox__DelegateSignature(bool State);
		void BndEvt__Options_Graphismes_Entry_ComboBoxString_151_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Options_Graphismes_Entry_Slider_185_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature();
		void ExecuteUbergraph_Options_Graphismes_Entry(int32_t EntryPoint);
		void StoppedSlider__DelegateSignature(float SliderValue);
		void UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

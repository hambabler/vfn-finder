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
	 * WidgetBlueprintGeneratedClass Button_Checkbox.Button_Checkbox_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UButton_Checkbox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Clicked;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCheckBox*                                           CheckBox_50;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_checkBox;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Checked_Default;                                         // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L9UM[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0288(0x0018) Edit, BlueprintVisible
		struct FSlateFontInfo                                      Font;                                                    // 0x02A0(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickedOnCheckbox;                                       // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsChecked(bool* Return_Value);
		void BndEvt__Button_Checkbox_CheckBox_49_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Button_Checkbox(int32_t EntryPoint);
		void ClickedOnCheckbox__DelegateSignature(bool State);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

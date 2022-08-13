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
	 * WidgetBlueprintGeneratedClass W_button.W_button_C
	 * Size -> 0x0178 (FullSize[0x03D8] - InheritedSize[0x0260])
	 */
	class UW_button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hovered;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Clicked;                                                 // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_36;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_168;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_48;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x0298(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FMargin                                             Padding_Text;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ButtonColor;                                             // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  BorderMat;                                               // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DefaultText;                                             // 0x0318(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             Clicked_Btn;                                             // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateBrush                                         Image;                                                   // 0x0340(0x0088) Edit, BlueprintVisible
		struct FLinearColor                                        TextColor;                                               // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetText(const class FText& InText);
		void GetVisibility_1();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__W_button_Button_35_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_W_button(int32_t EntryPoint);
		void Clicked_Btn__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

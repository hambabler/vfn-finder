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
	 * WidgetBlueprintGeneratedClass ButtonMenuBase.ButtonMenuBase_C
	 * Size -> 0x00C0 (FullSize[0x0320] - InheritedSize[0x0260])
	 */
	class UButtonMenuBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover;                                                   // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_61;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ButtonText;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_Create;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      DesiredMargin;                                           // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color;                                                   // 0x028C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3HK8[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x02A0(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x02F8(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             ButtonClicked;                                           // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ButtonMenuBase_Button_60_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnFocused();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_ButtonMenuBase(int32_t EntryPoint);
		void ButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

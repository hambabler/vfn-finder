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
	 * WidgetBlueprintGeneratedClass W_Options_SoundBar.W_Options_SoundBar_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UW_Options_SoundBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox*                                           CheckBox_264;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_104;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_257;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SoundIndex;                                              // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9QQN[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_SAVE_C*                                          SavedData;                                               // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI_Upgun;                                                // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__W_Options_SoundBar_Slider_256_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__W_Options_SoundBar_Slider_256_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature();
		void BndEvt__W_Options_SoundBar_Slider_256_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__W_Options_SoundBar_CheckBox_263_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnUnMuteUpdated();
		void ExecuteUbergraph_W_Options_SoundBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

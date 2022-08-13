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
	 * WidgetBlueprintGeneratedClass Options_Graphismes.Options_Graphismes_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class UOptions_Graphismes_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Clicked;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCrossHair_list_C*                                   ListCrossHair;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Aliasing;                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_blur;                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Colorblinf;                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Display;                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_FPS;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_HDR;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_OptionnalLights;                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Patate;                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Quality;                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Resolution;                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_Graphismes_Entry_C*                         Options_Graphismes_Vsync;                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Apply;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_AutoSettings;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI;                                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBP_SAVE_C*                                          SAVE_Local;                                              // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetResolutions();
		void GenTexte();
		void SetDaltonisme(int32_t Index);
		void Génération_nom_pc_rigolo();
		void Set_antialiasing(int32_t* AliasingLevel);
		void Generate_combobox(class UComboBoxString** NewParam, TArray<class FText>* Options);
		void SetMotionBlur(bool* _bool_);
		void SetVsync(bool* _bool_);
		void ExecuteConsoleCommand(const class FString& Command, bool* _bool_, const class FString& Default, const class FString& Patate_true);
		void SetSettings(class UGameUserSettings** Settings);
		void Regen_comboboxes();
		void Construct();
		void BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature();
		void BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature(float SliderValue);
		void BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue);
		void ExecuteUbergraph_Options_Graphismes(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

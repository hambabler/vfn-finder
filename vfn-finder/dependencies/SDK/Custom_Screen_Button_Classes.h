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
	 * WidgetBlueprintGeneratedClass Custom_Screen_Button.Custom_Screen_Button_C
	 * Size -> 0x017B (FullSize[0x0448] - InheritedSize[0x02CD])
	 */
	class UCustom_Screen_Button_C : public UCustom_Parent_Button_C
	{
	public:
		unsigned char                                              UnknownData_6DP6[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover;                                                   // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Plop;                                                    // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_Display;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_145;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalColorBox;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Tint;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FUpGunScreen                                        Screen;                                                  // 0x0308(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            Material;                                                // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FaceColor;                                               // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class UMaterialInterface*>                   Exceptions_Mat;                                          // 0x03F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void VisualsOnButtonClicked();
		void Exceptions();
		void GetDefaultTintColor(struct FLinearColor* Color);
		void UpdatePlayerData();
		void PlayClickedAnimation();
		void ChangeTint(struct FLinearColor* LinearColor);
		void GenerateTints(TArray<struct FLinearColor>* Teintes);
		void GenerateScreen();
		void BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_144_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void ChangeTint_Delegate(const struct FLinearColor& Color);
		void ExecuteUbergraph_Custom_Screen_Button(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

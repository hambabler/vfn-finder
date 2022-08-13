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
	 * WidgetBlueprintGeneratedClass Custom_Hat_Button.Custom_Hat_Button_C
	 * Size -> 0x01C3 (FullSize[0x0490] - InheritedSize[0x02CD])
	 */
	class UCustom_Hat_Button_C : public UCustom_Parent_Button_C
	{
	public:
		unsigned char                                              UnknownData_RDIU[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover;                                                   // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Clicked;                                                 // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_36;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_486;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FUpGunEquipment                                     Hat;                                                     // 0x0300(0x0190) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void VisualsOnButtonClicked();
		void UpdatePlayerData();
		void GenerateHatButton();
		void BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HatButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HatButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_Custom_Hat_Button(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

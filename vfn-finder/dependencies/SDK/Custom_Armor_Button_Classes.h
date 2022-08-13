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
	 * WidgetBlueprintGeneratedClass Custom_Armor_Button.Custom_Armor_Button_C
	 * Size -> 0x01CB (FullSize[0x0498] - InheritedSize[0x02CD])
	 */
	class UCustom_Armor_Button_C : public UCustom_Parent_Button_C
	{
	public:
		unsigned char                                              UnknownData_C0C6[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover;                                                   // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Clicked;                                                 // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_color;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_36;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ButtonMat;                                               // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FUpGunArmor                                         Armor;                                                   // 0x0300(0x0140) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class UMaterialInterface*>                   Exceptions;                                              // 0x0448(0x0050) Edit, BlueprintVisible

	public:
		void VisualsOnButtonClicked();
		void Expections();
		void GenerateButtonForTexture();
		void GenerateSimplePatternButton(bool UseTint);
		void UpdatePlayerData();
		void GenerateButton();
		void BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ColorRobotButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_Custom_Armor_Button(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

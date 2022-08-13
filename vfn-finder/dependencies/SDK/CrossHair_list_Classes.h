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
	 * WidgetBlueprintGeneratedClass CrossHair_list.CrossHair_list_C
	 * Size -> 0x006C (FullSize[0x02CC] - InheritedSize[0x0260])
	 */
	class UCrossHair_list_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NewColor;                                                // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    swap;                                                    // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_preview;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      Box_Colors;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Next;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Prec;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      As_GI;                                                   // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Mat;                                                     // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  CrossHairList;                                           // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Index;                                                   // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color;                                                   // 0x02BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTCrossHair_list_1();
		void SpawnColors(TArray<struct FLinearColor>* Colors);
		void UpdateSavedData();
		void ChangeCrossColor(const struct FLinearColor& Couleur_Crosshair);
		void IndexChange(bool Add);
		void SwitchDisplayedCrosshair();
		void Construct();
		void BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void ChangeColorWidget(const struct FLinearColor& Color);
		void ExecuteUbergraph_CrossHair_list(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

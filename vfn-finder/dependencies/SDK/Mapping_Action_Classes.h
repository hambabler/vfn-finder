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
	 * WidgetBlueprintGeneratedClass Mapping_Action.Mapping_Action_C
	 * Size -> 0x0074 (FullSize[0x02D4] - InheritedSize[0x0260])
	 */
	class UMapping_Action_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Appear;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          ActionName;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_104;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInputKeySelector*                                   InputKey;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                RowName;                                                 // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UObject*                                             ButtonStyle;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputActionKeyMapping                              ActionKey;                                               // 0x0298(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UGI_BP_Upgun_C*                                      GI;                                                      // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UOptions_Mapping_C*                                  HUDParent;                                               // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetVisuals();
		void Construct();
		void BndEvt__InputKeySelector_83_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void BndEvt__Mapping_Action_InputKey_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
		void ExecuteUbergraph_Mapping_Action(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

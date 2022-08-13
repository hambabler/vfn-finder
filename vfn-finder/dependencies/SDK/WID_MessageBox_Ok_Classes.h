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
	 * WidgetBlueprintGeneratedClass WID_MessageBox_Ok.WID_MessageBox_Ok_C
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UWID_MessageBox_Ok_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextBlock;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TitleBlock;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Text;                                                    // 0x0298(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void BndEvt__WID_MessageBox_Ok_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WID_MessageBox_Ok(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

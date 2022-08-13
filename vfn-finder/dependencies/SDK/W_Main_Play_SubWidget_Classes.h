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
	 * WidgetBlueprintGeneratedClass W_Main_Play_SubWidget.W_Main_Play_SubWidget_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UW_Main_Play_SubWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Switch;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UServer_JoinViaCode_C*                               Server_JoinViaCode;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UServerCreation_C*                                   ServerCreation_widget;                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Main_Play_PublicServerList_C*                     W_Main_Play_PublicServerList;                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__W_Main_Play_SubWidget_Server_JoinViaCode_K2Node_ComponentBoundEvent_0_OpenServers__DelegateSignature();
		void BndEvt__W_Main_Play_SubWidget_W_Main_Play_PublicServerList_K2Node_ComponentBoundEvent_1_SwitchToPlay__DelegateSignature();
		void ExecuteUbergraph_W_Main_Play_SubWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

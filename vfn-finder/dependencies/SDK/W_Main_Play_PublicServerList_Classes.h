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
	 * WidgetBlueprintGeneratedClass W_Main_Play_PublicServerList.W_Main_Play_PublicServerList_C
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UW_Main_Play_PublicServerList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Bounce;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        ServerList;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           Throbber_388;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Refresh;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Retour;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Main_Play_PublicServer_Entry_C*                   W_Main_Play_PublicServer_Entry;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SwitchToPlay;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSwitched;                                              // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UW_Main_Play_PublicServer_Entry_C*>           ServerEntry;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnFindCompleted(bool bSucceeded, TArray<struct FUpGunLobbyData> Data);
		void IsJoiningServer(bool Lock, class UW_Main_Play_PublicServer_Entry_C* ServerJoined);
		void IsSearching(bool Lock);
		void OnSwitched_Event();
		void RefreshList();
		void BndEvt__W_Main_Play_PublicServerList_W_button_Retour_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__W_Main_Play_PublicServerList_W_button_Refresh_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void ExecuteUbergraph_W_Main_Play_PublicServerList(int32_t EntryPoint);
		void OnSwitched__DelegateSignature();
		void SwitchToPlay__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

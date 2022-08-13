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
	 * BlueprintGeneratedClass GI_BP_Upgun.GI_BP_Upgun_C
	 * Size -> 0x0148 (FullSize[0x0318] - InheritedSize[0x01D0])
	 */
	class UGI_BP_Upgun_C : public UUpGunGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<struct FKey, class UTexture2D*>                       InputKeyboard;                                           // 0x01D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<struct FKey, class UTexture2D*>                       InputGamepad;                                            // 0x0228(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_SAVE_C*                                          SavedData;                                               // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SaveSlot;                                                // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TMap<struct FGameplayTag, class UTexture2D*>               KillFeedTextures;                                        // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             UpdateCrossHair;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWID_MessageBox_Ok_C*                                NetworkErrorMsgBox;                                      // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCosmeticsUpdated;                                      // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             UpdateKeyMapping;                                        // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ApplyVisualSettingsAtLaunch();
		void CheckCosmeticOwnership();
		void ApplyKeyMappingFromSave(bool FallBackOnAZERTY);
		void ResetMapping(bool UseAZERTY);
		void RemoveMapping(bool ResetSavedValues);
		void AjustVolumesAtLauch();
		void SaveData();
		void CreateSaveSlot(bool* WasSlotCreated);
		void Load_Saved_Data(class UBP_SAVE_C** Data);
		void ReceiveInit();
		void BP_OnNetworkError(ENetworkFailure Type, const class FString& Msg);
		void BP_OnInitialInventoryReady();
		void ExecuteUbergraph_GI_BP_Upgun(int32_t EntryPoint);
		void UpdateKeyMapping__DelegateSignature();
		void OnCosmeticsUpdated__DelegateSignature();
		void UpdateCrossHair__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

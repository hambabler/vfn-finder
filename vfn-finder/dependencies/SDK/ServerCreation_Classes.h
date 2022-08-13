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
	 * WidgetBlueprintGeneratedClass ServerCreation.ServerCreation_C
	 * Size -> 0x00D0 (FullSize[0x0330] - InheritedSize[0x0260])
	 */
	class UServerCreation_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Chiffre;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton_Checkbox_C*                                  Button_Checkbox;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Checkbox_C*                                  Button_Checkbox_friends;                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Checkbox_C*                                  Button_Checkbox_full_version;                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Checkbox_C*                                  Button_Checkbox_lan;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Compteur_C*                                  Button_Compteur_nb_joueurs;                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExpandableArea*                                     ExpandableArea_271;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       ServerName;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              ServerNameVar;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      NomsMasculins;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      NomsFeminins;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       NomMasculin;                                             // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FAJG[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AdjAvantMasculin;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AdjApresMasculin;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DoubleAdjectif;                                          // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CHYU[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AdjAvantFeminin;                                         // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AdjApresFeminin;                                         // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnLobbyCreated(bool bSucceeded);
		void GamemodeInfos(TArray<class FString>* Options, class FString* Options_out);
		void Construct();
		void BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_ServerCreation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

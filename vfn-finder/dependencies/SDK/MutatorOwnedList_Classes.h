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
	 * WidgetBlueprintGeneratedClass MutatorOwnedList.MutatorOwnedList_C
	 * Size -> 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
	 */
	class UMutatorOwnedList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UHorizontalBox*                                      HorizontalBox_SkillList;                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        Timer;                                                   // 0x0270(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      BoxSize;                                                 // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BoxPadding;                                              // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UUpGunMutator*>                               MutatorListToAdd;                                        // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUpGunMutator*>                               AllMutatorList;                                          // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUpGunMutator*, class UMutatorOwnedEntry_C*>    DisplayedMutators;                                       // 0x02A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UUpGunMutator*>                               MutatorListToSub;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateList();
		void Generate_Mutator_List(const struct FGameplayTagContainer& Mutators, bool* HasMutators);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_MutatorOwnedList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

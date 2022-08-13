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
	 * WidgetBlueprintGeneratedClass Menu_Stats.Menu_Stats_C
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UMenu_Stats_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   CircularThrobber_331;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ListeStats;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGameplayTagContainer                               NotVisibleStats;                                         // 0x0280(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FUpGunStat>                                  StatsToDisplay;                                          // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void ExecuteUbergraph_Menu_Stats(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

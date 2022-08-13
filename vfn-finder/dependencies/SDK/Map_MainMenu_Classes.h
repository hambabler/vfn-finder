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
	 * BlueprintGeneratedClass Map_MainMenu.Map_MainMenu_C
	 * Size -> 0x0078 (FullSize[0x02A0] - InheritedSize[0x0228])
	 */
	class AMap_MainMenu_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     MusicMenu;                                               // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FUpGunOSSItemId, bool>                         PromoItems;                                              // 0x0238(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        TimerGive;                                               // 0x0288(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FUpGunOSSItemId                                     ItemToGive;                                              // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GiveItems_Event();
		void ExecuteUbergraph_Map_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

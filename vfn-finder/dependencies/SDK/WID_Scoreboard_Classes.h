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
	 * WidgetBlueprintGeneratedClass WID_Scoreboard.WID_Scoreboard_C
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UWID_Scoreboard_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Appear;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Teams;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMutatorOwnedList_C*                                 MutatorOwnedList;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PLayerList;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Gamemode;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Mutators;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWID_Scoreboard_Player_C*                            WID_Scoreboard_Player;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AUpGunGameStateBase*                                 GameState;                                               // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class AUpGunBasePlayerState*>                       CurrentPlayers;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AUpGunBasePlayerState*>                       OldCurrentPlayers;                                       // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void GetPlayerArray(TArray<class AUpGunBasePlayerState*>* Players);
		void ReorderPlayerList();
		void UpdatePlayerList();
		void Update_Teams(TArray<struct FUpGunTeam> Teams);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void AppearAnim();
		void ExecuteUbergraph_WID_Scoreboard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

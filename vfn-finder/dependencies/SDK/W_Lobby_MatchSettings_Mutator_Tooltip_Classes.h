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
	 * WidgetBlueprintGeneratedClass W_Lobby_MatchSettings_Mutator_Tooltip.W_Lobby_MatchSettings_Mutator_Tooltip_C
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UW_Lobby_MatchSettings_Mutator_Tooltip_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Show;                                                    // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_47;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Tip;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUpGunMutator*                                       Mutator;                                                 // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Show_achievement_progress();
		void JustWriteName();
		void Construct();
		void Appear();
		void ExecuteUbergraph_W_Lobby_MatchSettings_Mutator_Tooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

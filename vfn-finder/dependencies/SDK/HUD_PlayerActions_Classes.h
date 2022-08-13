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
	 * WidgetBlueprintGeneratedClass HUD_PlayerActions.HUD_PlayerActions_C
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UHUD_PlayerActions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVerticalBox*                                        List;                                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObject*                                             PS;                                                      // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void GetScoreText(const struct FGameplayTag& Tag, class AActor* Target, class FText* Text);
		void OnGivedScore(const struct FGameplayTag& ScoreTag, float Score, class AActor* Target);
		void AddAction(const class FText& Text);
		void OnScoreUpdated();
		void Construct();
		void ExecuteUbergraph_HUD_PlayerActions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * WidgetBlueprintGeneratedClass HUD_KillFeed.HUD_KillFeed_C
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UHUD_KillFeed_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVerticalBox*                                        List;                                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI;                                                      // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnPlayerKilledOther(const struct FGameplayEffectSpec& Spec, float Amount, class AUpGunBasePlayerState* Victim, class AUpGunBasePlayerState* Killer);
		void Construct();
		void ExecuteUbergraph_HUD_KillFeed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

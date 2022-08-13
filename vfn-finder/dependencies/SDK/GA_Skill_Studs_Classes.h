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
	 * BlueprintGeneratedClass GA_Skill_Studs.GA_Skill_Studs_C
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Studs_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 UpGun_Base_Character;                                    // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool CanDamage(class AActor* Other);
		struct FGameplayTag GetDamageType();
		void SelectPlayers(const struct FHitResult& Hit, TArray<class AUpGunBaseCharacter*>* Victimes);
		void EventReceived_457948F742D2CB0903E6D09160EE6263(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void Landed(const struct FHitResult& Hit);
		void ExecuteUbergraph_GA_Skill_Studs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

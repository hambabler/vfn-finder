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
	 * BlueprintGeneratedClass GA_Skill_Grappin.GA_Skill_Grappin_C
	 * Size -> 0x009C (FullSize[0x04DC] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Grappin_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 CharacterUpGun;                                          // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FHitResult                                          HitGrappin;                                              // 0x0450(0x008C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference

	public:
		void GrappinHit();
		void OnEvent_510B846242D0ABCA6A8A13BC894A4C00(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_510B846242D0ABCA6A8A13BC894A4C00(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_510B846242D0ABCA6A8A13BC894A4C00(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_510B846242D0ABCA6A8A13BC894A4C00(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_510B846242D0ABCA6A8A13BC894A4C00(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnTimedOutAndDestinationReached_F333022F4F3FB994E2F0F1956079CD0F();
		void OnTimedOut_F333022F4F3FB994E2F0F1956079CD0F();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Skill_Grappin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

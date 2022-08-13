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
	 * BlueprintGeneratedClass GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C
	 * Size -> 0x0014 (FullSize[0x0454] - InheritedSize[0x0440])
	 */
	class UGA_Skill_ControlledExplosion_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 UpGun_Character;                                         // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Explosion_Radius;                                        // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DidNotSpawn_299CDCB0438D1A3AEFB833A322EF8A75(class AActor* SpawnedActor);
		void Success_299CDCB0438D1A3AEFB833A322EF8A75(class AActor* SpawnedActor);
		void OnEvent_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void PlayMontage();
		void ExecuteUbergraph_GA_Skill_ControlledExplosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

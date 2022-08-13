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
	 * BlueprintGeneratedClass GA_Skill_Dash.GA_Skill_Dash_C
	 * Size -> 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Dash_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Strength;                                                // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DashHit(const struct FVector& Direction);
		void Get_Forward_Without_Up(struct FVector* Forward);
		void OnFinish_9FBFEA114A45F5714848E38E74ECDD8A();
		void OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5(class AActor* SpawnedActor);
		void Success_630AF27E422CBBA9540351A9F3D4D7C5(class AActor* SpawnedActor);
		void K2_ActivateAbility();
		void SpawnFire();
		void PlayMontage();
		void ExecuteUbergraph_GA_Skill_Dash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

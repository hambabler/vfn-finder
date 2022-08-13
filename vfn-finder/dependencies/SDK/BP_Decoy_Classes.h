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
	 * BlueprintGeneratedClass BP_Decoy.BP_Decoy_C
	 * Size -> 0x0054 (FullSize[0x0534] - InheritedSize[0x04E0])
	 */
	class ABP_Decoy_C : public AUpGunBasicDamageableCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Screen;                                                  // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Rifle;                                                   // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     HatRoot;                                                 // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UUpGunCosmeticManager*                               UpGunCosmeticManager;                                    // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsVoodoo;                                                // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsShooting;                                              // 0x0509(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsExplosive;                                             // 0x050A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7GZP[0x5];                                   // 0x050B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 UpGun_Base_Character;                                    // 0x0510(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FTimerHandle                                        TimerAutoDeath;                                          // 0x0518(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CloneLife;                                               // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDead;                                                  // 0x0524(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_7V71[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_AutoShoot;                                         // 0x0528(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmmoToShoot;                                             // 0x0530(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetCustom();
		void Skill_Voodoo(float* DamageTaken, class AActor** DamageInstigator, struct FHitResult* HitResult);
		void Shoot();
		void OnRep_IsDead();
		void ExplodeOnDeath();
		void ExtractInfos();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void Death();
		void ShootServer();
		void Damage(const struct FGameplayEffectSpec& Spec, float Amount);
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_Decoy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

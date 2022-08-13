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
	 * BlueprintGeneratedClass BP_Weapon_RifleProjectile.BP_Weapon_RifleProjectile_C
	 * Size -> 0x00A8 (FullSize[0x02E8] - InheritedSize[0x0240])
	 */
	class ABP_Weapon_RifleProjectile_C : public AUpGunWeaponProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bullet;                                                  // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      ChangeInitialSize_ScaleAlpha_61ED392D4CEFC7CE145848B34B5EB2DF; // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         ChangeInitialSize__Direction_61ED392D4CEFC7CE145848B34B5EB2DF; // 0x025C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0P5F[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ChangeInitialSize;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              Bounces;                                                 // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IDN1[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BulletColor;                                             // 0x026C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bullet_DesiredSize;                                      // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OverrideColor;                                           // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCrit;                                                  // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsHoming;                                                // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V7ZZ[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 Shooter_UpGunBaseCharacter;                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       HasPierced;                                              // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8K9Y[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Velocity;                                                // 0x02A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Piercing;                                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsExplosion;                                             // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              LifeSteal_base;                                          // 0x02B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LR4D[0x1];                                   // 0x02B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TravelledDistance;                                       // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeavy;                                                 // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8LZE[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BounceNumber;                                            // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OlderIsBetter;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PiercingUpgraded;                                        // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              IsShrapnel;                                              // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LustForLife;                                             // 0x02C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LustForLife_Value;                                       // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalDamageMultiWhenSpawned;                             // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              IsCritsPower;                                            // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBoomerang;                                             // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFire;                                                  // 0x02CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHeal;                                                  // 0x02CF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        Timer_Boomerang;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DamageClass;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   NS_Trail;                                                // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Skill_ChargedSpray_DamageType();
		void SetupVFX();
		void Skill_Heal(class AActor** Target);
		void InitFire();
		void Skill_LifeSteal(class AActor** Actor);
		void Skill_Fire(class AActor** Actor);
		void Skill_ActivateBoomerang();
		void Boomerang();
		void Skill_LustForLife();
		void Skill_Shrapnel(struct FHitResult* Hit);
		void Skill_Heavy();
		void ExtractSkills();
		void Bullet_Explosive();
		void Pierce_Collisions(ECollisionResponse NewResponse);
		void Pierce(bool* HasPierced);
		void Skill_Homing();
		void GenerateColor();
		void Decal_Particle();
		void DestroyIfNoBounces();
		void InitBounces();
		void ChangeInitialSize__FinishedFunc();
		void ChangeInitialSize__UpdateFunc();
		void BndEvt__BP_Weapon_RifleProjectile_CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveBeginPlay();
		void BndEvt__BP_Weapon_RifleProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void RestoreVelocity(const struct FVector& Velocity);
		void RestoreCollisions(float Delay);
		void ReceiveTick(float DeltaSeconds);
		void ChangeBulletSize();
		void OnFinalHit();
		void OnSystemFinished(class UNiagaraComponent* PSystem);
		void ExecuteUbergraph_BP_Weapon_RifleProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

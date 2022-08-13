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
	 * BlueprintGeneratedClass BP_Clone_Projectile.BP_Clone_Projectile_C
	 * Size -> 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
	 */
	class ABP_Clone_Projectile_C : public AUpGunWeaponProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Trail;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bullet;                                                  // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BulletColor;                                             // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmmoSeed;                                                // 0x0270(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             BulletDirection;                                         // 0x0274(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Decal_Particles();
		void SetColor();
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_Clone_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

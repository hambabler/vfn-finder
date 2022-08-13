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
	 * BlueprintGeneratedClass BP_Explosion.BP_Explosion_C
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class ABP_Explosion_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    ExplosionSize;                                           // 0x0230(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplosionRadius;                                         // 0x0234(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IsRepulsive;                                             // 0x0238(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_IAWA[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepulsiveForce;                                          // 0x023C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      Damage;                                                  // 0x0240(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BQU[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class AActor*>                                      Actors_to_Ignore;                                        // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn

	public:
		void PushPhysicObjects();
		void RedirectProjectiles(class AActor** Actor, class UProjectileMovementComponent* Projectile);
		void Repulsive();
		void PlayCameraShake();
		void SpawnDecal();
		void BaseParticleAndSound();
		void Find_Explosion_Size();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Explosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

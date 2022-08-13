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
	 * BlueprintGeneratedClass BP_Grenade.BP_Grenade_C
	 * Size -> 0x005D (FullSize[0x0295] - InheritedSize[0x0238])
	 */
	class ABP_Grenade_C : public AUpGunProjectileClientSimulated
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Niagara;                                                 // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Grenade;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       CanExplode;                                              // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              InceptionLevel;                                          // 0x0261(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_RFFL[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 UpGunPlayer;                                             // 0x0268(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              Fragmentation;                                           // 0x0270(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IsSmoke;                                                 // 0x0271(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsSticky;                                                // 0x0272(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsRepulsive;                                             // 0x0273(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsInstant;                                               // 0x0274(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ExtractInfoFromPlayer;                                   // 0x0275(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       AntiGravGrenade;                                         // 0x0276(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_8P5G[0x1];                                   // 0x0277(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delay_Explosion;                                         // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_TB8U[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerExplosion;                                          // 0x0280(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       GrenadeSeed;                                             // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		int32_t                                                    SeedInt;                                                 // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IsIncendiary;                                            // 0x0294(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void Explode_Incendiary();
		void ChangeVelocityOnSpawn();
		void ComputeSeed(int32_t Modifier);
		void IsSticky_Test(struct FHitResult* Hit);
		void Sounds(struct FHitResult* Hit);
		void Explode_Inception();
		void Explode_Smoke();
		void Explode_Base();
		void Explode_Frag();
		void Extract_Infos();
		void ChooseMesh();
		void ReceiveBeginPlay();
		void ActivateGrenade();
		void InitiateExplosion();
		void Explode();
		void ExplodeEarly();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_Grenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_Knife_Throw_Corrected.BP_Knife_Throw_Corrected_C
	 * Size -> 0x0054 (FullSize[0x0274] - InheritedSize[0x0220])
	 */
	class ABP_Knife_Throw_Corrected_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpGunCosmeticManager*                               UpGunCosmeticManager;                                    // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   SmokeHit;                                                // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio;                                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Trail;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Knife;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ShouldDispawn_C*                                BPC_ShouldDispawn;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity_Input;                                          // 0x0268(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void CheckRange();
		void ReceiveBeginPlay();
		void BndEvt__BP_Knife_Thrown_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void Hit_Knife(class AActor* Actor, class USceneComponent* ComponentHit, const class FName& SocketName);
		void BndEvt__BP_Knife_Thrown_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature(unsigned char Round);
		void Feedback(class AUpGunBaseCharacter* UpGunChara);
		void ExecuteUbergraph_BP_Knife_Throw_Corrected(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

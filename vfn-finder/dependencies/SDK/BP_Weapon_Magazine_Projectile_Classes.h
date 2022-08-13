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
	 * BlueprintGeneratedClass BP_Weapon_Magazine_Projectile.BP_Weapon_Magazine_Projectile_C
	 * Size -> 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
	 */
	class ABP_Weapon_Magazine_Projectile_C : public AUpGunProjectileClientSimulated
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_ShouldDispawn_C*                                BPC_ShouldDispawn;                                       // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                Magazine;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       Hit;                                                     // 0x0260(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_KIE6[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 UpGun_Character;                                         // 0x0268(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              Skill_Level;                                             // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G3Q9[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VelocityInput;                                           // 0x0274(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Customization();
		void SetSize();
		void OnRep_Hit();
		void HasHit();
		void ReceiveBeginPlay();
		void HasHit_RPC();
		void BndEvt__BP_Weapon_Magazine_Projectile_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__BP_Weapon_Magazine_Projectile_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRound__DelegateSignature(unsigned char Round);
		void ExecuteUbergraph_BP_Weapon_Magazine_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

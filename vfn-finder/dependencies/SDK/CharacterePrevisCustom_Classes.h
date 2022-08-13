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
	 * BlueprintGeneratedClass CharacterePrevisCustom.CharacterePrevisCustom_C
	 * Size -> 0x0162 (FullSize[0x0382] - InheritedSize[0x0220])
	 */
	class ACharacterePrevisCustom_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Face;                                                    // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Knife;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpGunCosmeticManager*                               UpGunCosmeticManager;                                    // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCableComponent*                                     Cable2;                                                  // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCableComponent*                                     Cable1;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCableComponent*                                     Cable;                                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Rifle;                                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Spin_Rot2_571026114F30323B55BD9CADDC9F6E73;              // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Spin_Jump_571026114F30323B55BD9CADDC9F6E73;              // 0x027C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Spin_Rot_571026114F30323B55BD9CADDC9F6E73;               // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Spin__Direction_571026114F30323B55BD9CADDC9F6E73;        // 0x0284(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P85C[0x3];                                   // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Spin;                                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Boing_XY_556D35EA49F144AB931030A9A9E8A259;               // 0x0290(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Boing__Direction_556D35EA49F144AB931030A9A9E8A259;       // 0x0294(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DTHR[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Boing;                                                   // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GameInstance;                                            // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBP_SAVE_C*                                          Local_SAVE;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMatFace;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       refresh;                                                 // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_X05Y[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicMatArmor;                                         // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    State;                                                   // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LWIS[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EUpGunCosmeticType, struct FUpGunInventoryItem>       LastCosmeticButtonUsed;                                  // 0x02D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FUpGunCosmeticSettings                              Cosmetic_Settings_old;                                   // 0x0320(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		EUpGunCosmeticType                                         EquipedWeapon;                                           // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowPreviewCosmetics;                                    // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AreCosmeticsUpdated(bool* Updated);
		void UserConstructionScript();
		void Boing__FinishedFunc();
		void Boing__UpdateFunc();
		void Spin__FinishedFunc();
		void Spin__UpdateFunc();
		void OnNotifyEnd_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName);
		void OnNotifyBegin_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName);
		void OnInterrupted_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName);
		void OnBlendOut_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName);
		void OnCompleted_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName);
		void OnNotifyEnd_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName);
		void OnNotifyBegin_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName);
		void OnInterrupted_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName);
		void OnBlendOut_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName);
		void OnCompleted_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void Play_Anim_chapeau();
		void PlayMontage(EUpGunCosmeticType Index);
		void SpinKnife();
		void SwitchWeapon(EUpGunCosmeticType WeaponToEquip);
		void OnCosmeticsUpdated();
		void ExecuteUbergraph_CharacterePrevisCustom(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_Skill_WeaponAttachment_Laser.BP_Skill_WeaponAttachment_Laser_C
	 * Size -> 0x0019 (FullSize[0x0249] - InheritedSize[0x0230])
	 */
	class ABP_Skill_WeaponAttachment_Laser_C : public AUpGunWeaponAttachment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsReloading;                                             // 0x0248(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_IsReloading();
		void Fire();
		void OnFired();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_Skill_WeaponAttachment_Laser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

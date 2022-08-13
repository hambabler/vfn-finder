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
	 * BlueprintGeneratedClass GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C
	 * Size -> 0x0028 (FullSize[0x0468] - InheritedSize[0x0440])
	 */
	class UGA_Skill_SecondaryWeapon_Laser_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Skill_WeaponAttachment_Laser_C*                  Attachment;                                              // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<int32_t>                                            ShotsToFire;                                             // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Trace(struct FHitResult* OutHit, struct FVector* Normal);
		void OnSync_2AADC4EB48EAEED90D8A83BE93834193();
		void K2_ActivateAbility();
		void ShootWithDelay();
		void ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

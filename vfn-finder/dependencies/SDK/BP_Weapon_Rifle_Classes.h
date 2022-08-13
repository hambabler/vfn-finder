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
	 * BlueprintGeneratedClass BP_Weapon_Rifle.BP_Weapon_Rifle_C
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class ABP_Weapon_Rifle_C : public AUpGunWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void StatBulletFired(int32_t InDelta);
		struct FVector FindDesiredVector(class UCameraComponent* Camera, float DeviationStrengh, int32_t NumberOfBullets, int32_t ActualBullet);
		void OnFired();
		void Fire(float SyncChance);
		void ExecuteUbergraph_BP_Weapon_Rifle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

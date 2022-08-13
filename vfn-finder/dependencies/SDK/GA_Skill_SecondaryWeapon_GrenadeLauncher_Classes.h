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
	 * BlueprintGeneratedClass GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UGA_Skill_SecondaryWeapon_GrenadeLauncher_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<int32_t>                                            ShotsToFire;                                             // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Get_Weapon(class UPrimitiveComponent** Weapon);
		void DidNotSpawn_D6DED8964CF951E7DBE457A3B788C37A(class AActor* SpawnedActor);
		void Success_D6DED8964CF951E7DBE457A3B788C37A(class AActor* SpawnedActor);
		void K2_ActivateAbility();
		void FireWithDelay();
		void ExecuteUbergraph_GA_Skill_SecondaryWeapon_GrenadeLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

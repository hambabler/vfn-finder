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
	 * BlueprintGeneratedClass GA_Skill_LastGrenade.GA_Skill_LastGrenade_C
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UGA_Skill_LastGrenade_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 UpGun_Character;                                         // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5(class AActor* SpawnedActor);
		void Success_F298BCA14A29563ECBBC3D8ED88D37F5(class AActor* SpawnedActor);
		void EventReceived_94687D994008B101571C08AAA0028257(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Skill_LastGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

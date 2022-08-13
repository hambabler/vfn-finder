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
	 * BlueprintGeneratedClass C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UC_ProceduralArmsAnimation_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACharacter*                                          Character;                                               // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPS_SK;                                                  // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredArmsRoll;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatSpringState                                   SpringRollArms;                                          // 0x00CC(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      DeltaArmsRoll;                                           // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredArmPitch;                                         // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatSpringState                                   SpringPitchArms;                                         // 0x00DC(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      DeltaArmPitch;                                           // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredArmYaw;                                           // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatSpringState                                   SpringYawArms;                                           // 0x00EC(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      DeltaArmsYaw;                                            // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Arms_Yaw(float DeltaTime);
		void Arms_Pitch(float DeltaTime);
		void Arms_Roll(float DeltaTime);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_C_ProceduralArmsAnimation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

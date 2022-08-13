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
	 * BlueprintGeneratedClass BP_Deathmatch_DeathCamera.BP_Deathmatch_DeathCamera_C
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class ABP_Deathmatch_DeathCamera_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    Camera;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_2(float AxisValue);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_Deathmatch_DeathCamera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

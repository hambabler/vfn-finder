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
	 * BlueprintGeneratedClass BPC_Shake.BPC_Shake_C
	 * Size -> 0x0034 (FullSize[0x00E4] - InheritedSize[0x00B0])
	 */
	class UBPC_Shake_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Strengh;                                                 // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            DesiredRot;                                              // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       IsShaking;                                               // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_DATL[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ComponentToShake;                                        // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer;                                                   // 0x00D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Intensity;                                               // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float GenRandomValue();
		void GenNewRot();
		void SelectComponent(class USceneComponent* ComponentToShake);
		void ReceiveTick(float DeltaSeconds);
		void Shake(float Duration);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_Shake(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

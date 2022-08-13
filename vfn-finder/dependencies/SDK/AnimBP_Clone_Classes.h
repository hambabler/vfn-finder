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
	 * AnimBlueprintGeneratedClass AnimBP_Clone.AnimBP_Clone_C
	 * Size -> 0x02D8 (FullSize[0x0590] - InheritedSize[0x02B8])
	 */
	class UAnimBP_Clone_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RCTP[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02F8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0340(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0428(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x04E8(0x0080)
		float                                                      Speed;                                                   // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_04LK[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Decoy_C*                                         BP_Clone;                                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       BigHead;                                                 // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSGY[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunGameStateBase*                                 UpGun_Game_State_Base;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_FootStep_C*                                      Footstep;                                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void AnimNotify_Land();
		void NewStep(const class FName& Bone);
		void AnimNotify_Step_L();
		void AnimNotify_Step_R();
		void ExecuteUbergraph_AnimBP_Clone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

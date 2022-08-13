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
	 * AnimBlueprintGeneratedClass AnimBP_Previs.AnimBP_Previs_C
	 * Size -> 0x0438 (FullSize[0x06F0] - InheritedSize[0x02B8])
	 */
	class UAnimBP_Previs_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_FTSC[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x02F8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0398(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0418(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0498(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0518(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0598(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0618(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0660(0x0080)
		int32_t                                                    StateIndex;                                              // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DOG0[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacterePrevisCustom_C*                           MainMenuCharacter;                                       // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Previs_AnimGraphNode_BlendListByInt_E15EE64F4323A280FE2FD081698137E3();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_AnimBP_Previs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

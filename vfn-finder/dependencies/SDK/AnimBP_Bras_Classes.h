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
	 * AnimBlueprintGeneratedClass AnimBP_Bras.AnimBP_Bras_C
	 * Size -> 0x0560 (FullSize[0x0818] - InheritedSize[0x02B8])
	 */
	class UAnimBP_Bras_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_I9UY[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02F8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x03B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0408(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0430(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x04B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x04E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0560(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0590(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0610(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0640(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0728(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0758(0x00B0)
		float                                                      Speed;                                                   // 0x0808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Falling;                                                 // 0x080C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Aiming;                                                  // 0x080D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Crouching;                                               // 0x080E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NH89[0x1];                                   // 0x080F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_AnimBP_Bras(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

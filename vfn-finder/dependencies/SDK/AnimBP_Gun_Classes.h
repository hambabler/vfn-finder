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
	 * AnimBlueprintGeneratedClass AnimBP_Gun.AnimBP_Gun_C
	 * Size -> 0x01D4 (FullSize[0x048C] - InheritedSize[0x02B8])
	 */
	class UAnimBP_Gun_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_FYYA[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02F8(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0340(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0360(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0380(0x0108)
		float                                                      MagazineSize;                                            // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Gun_AnimGraphNode_ModifyBone_CFB1E29E42EF3F970D6CE6AF23805B8A();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AnimBP_Gun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

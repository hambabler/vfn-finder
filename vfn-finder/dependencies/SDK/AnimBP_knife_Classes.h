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
	 * AnimBlueprintGeneratedClass AnimBP_knife.AnimBP_knife_C
	 * Size -> 0x01D1 (FullSize[0x0489] - InheritedSize[0x02B8])
	 */
	class UAnimBP_knife_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DXRP[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02F8(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0340(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0360(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0380(0x0108)
		bool                                                       GigaKnife;                                               // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_knife_AnimGraphNode_ModifyBone_D4F0FC6D4855DB7D4201319A3C382ED6();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AnimBP_knife(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

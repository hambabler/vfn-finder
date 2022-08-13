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
	 * AnimBlueprintGeneratedClass AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C
	 * Size -> 0x1974 (FullSize[0x1C2C] - InheritedSize[0x02B8])
	 */
	class UAnimBP_ThirdPersonView_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DQKC[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x02C8(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x03D0(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0490(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x04B0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x05B8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x06C0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x07C8(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x07E8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0830(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0858(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0880(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0900(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0930(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x09B0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x09E0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x0A90(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0BE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0C10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0C38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0C60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0C88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0CB0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0CD8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0D58(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0D88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0E08(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0E38(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F20(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0F50(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0FD0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1070(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x10F0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1120(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1208(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1238(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x12E8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1440(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1468(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1490(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x14B0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x15B8(0x0108)
		struct FAnimNode_LegIK                                     AnimGraphNode_LegIK;                                     // 0x16C0(0x00F8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x17B8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x17D8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1930(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1958(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1988(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1A90(0x0108)
		float                                                      Speed;                                                   // 0x1B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x1B9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Jumping;                                                 // 0x1BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Crouching;                                               // 0x1BA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MMTC[0x2];                                   // 0x1BA2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AimRotServer;                                            // 0x1BA4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Direction_interped;                                      // 0x1BB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Aiming;                                                  // 0x1BB4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_64BE[0x3];                                   // 0x1BB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 Character;                                               // 0x1BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      IK_Alpha;                                                // 0x1BC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasMovingPreviousFrame;                                  // 0x1BC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WOPN[0x3];                                   // 0x1BC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IK_DesiredLocation_foot_l;                               // 0x1BC8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IK_DesiredLocation_foot_r;                               // 0x1BD4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ForwardRotation;                                         // 0x1BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ForcedPelvisRotationWhenStatic;                          // 0x1BE4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            IK_DesiredRotation_foot_l;                               // 0x1BF0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            IK_DesiredRotation_foot_r;                               // 0x1BFC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AUpGunGameStateBase*                                 UpGun_Game_State_Base;                                   // 0x1C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       Mutator_BigHead;                                         // 0x1C10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8T7O[0x7];                                   // 0x1C11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_FootStep_C*                                      Footstep;                                                // 0x1C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IK_Loc;                                                  // 0x1C20(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void DistanceWithoutIK(float Threshold);
		void CheckMoving(float Treshold);
		float GetLegsDirection();
		void IK_Set_Foot_Loc_Rot(struct FVector* Vector, float ForwardOffset, float RightOffset, struct FRotator* Rot, const struct FRotator& RotOffset);
		bool ShouldUseIK();
		void Can_Jump(bool Should_Jump, bool* bJumping);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ShouldUseIK_Interp();
		void RecalculateFeetLoc();
		void OnLanded(const struct FHitResult& Hit);
		void NewStep(const class FName& Bone);
		void AnimNotify_Step_L();
		void AnimNotify_Step_R();
		void Land_Particle();
		void ExecuteUbergraph_AnimBP_ThirdPersonView(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

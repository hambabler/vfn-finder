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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.DashHit
	 */
	struct UGA_Skill_Dash_C_DashHit_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_515Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.Get Forward Without Up
	 */
	struct UGA_Skill_Dash_C_Get_Forward_Without_Up_Params
	{
	public:
		struct FVector                                             Forward;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.OnFinish_9FBFEA114A45F5714848E38E74ECDD8A
	 */
	struct UGA_Skill_Dash_C_OnFinish_9FBFEA114A45F5714848E38E74ECDD8A_Params
	{	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 */
	struct UGA_Skill_Dash_C_OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 */
	struct UGA_Skill_Dash_C_OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 */
	struct UGA_Skill_Dash_C_OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 */
	struct UGA_Skill_Dash_C_OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 */
	struct UGA_Skill_Dash_C_OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5
	 */
	struct UGA_Skill_Dash_C_DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.Success_630AF27E422CBBA9540351A9F3D4D7C5
	 */
	struct UGA_Skill_Dash_C_Success_630AF27E422CBBA9540351A9F3D4D7C5_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.K2_ActivateAbility
	 */
	struct UGA_Skill_Dash_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.SpawnFire
	 */
	struct UGA_Skill_Dash_C_SpawnFire_Params
	{	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.PlayMontage
	 */
	struct UGA_Skill_Dash_C_PlayMontage_Params
	{	};

	/**
	 * Function GA_Skill_Dash.GA_Skill_Dash_C.ExecuteUbergraph_GA_Skill_Dash
	 */
	struct UGA_Skill_Dash_C_ExecuteUbergraph_GA_Skill_Dash_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RNK3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

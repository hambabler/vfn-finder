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
	 * Function GA_Skill_TP.GA_Skill_TP_C.EditCollisions
	 */
	struct UGA_Skill_TP_C_EditCollisions_Params
	{
	public:
		ECollisionResponse                                         NewResponse;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.FindStartingLoc
	 */
	struct UGA_Skill_TP_C_FindStartingLoc_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HFPM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC
	 */
	struct UGA_Skill_TP_C_OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC_Params
	{	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC
	 */
	struct UGA_Skill_TP_C_OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC_Params
	{	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnEvent_4202992145B45966FE07BDA3175F470E
	 */
	struct UGA_Skill_TP_C_OnEvent_4202992145B45966FE07BDA3175F470E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnInterrupted_4202992145B45966FE07BDA3175F470E
	 */
	struct UGA_Skill_TP_C_OnInterrupted_4202992145B45966FE07BDA3175F470E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnBlendOut_4202992145B45966FE07BDA3175F470E
	 */
	struct UGA_Skill_TP_C_OnBlendOut_4202992145B45966FE07BDA3175F470E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnCancelled_4202992145B45966FE07BDA3175F470E
	 */
	struct UGA_Skill_TP_C_OnCancelled_4202992145B45966FE07BDA3175F470E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.OnCompleted_4202992145B45966FE07BDA3175F470E
	 */
	struct UGA_Skill_TP_C_OnCompleted_4202992145B45966FE07BDA3175F470E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2
	 */
	struct UGA_Skill_TP_C_Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2
	 */
	struct UGA_Skill_TP_C_ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.K2_ActivateAbility
	 */
	struct UGA_Skill_TP_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.TeleportPlayer
	 */
	struct UGA_Skill_TP_C_TeleportPlayer_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.K2_OnEndAbility
	 */
	struct UGA_Skill_TP_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.BP_InputPressed
	 */
	struct UGA_Skill_TP_C_BP_InputPressed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZ42[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GA_Skill_TP.GA_Skill_TP_C.ExecuteUbergraph_GA_Skill_TP
	 */
	struct UGA_Skill_TP_C_ExecuteUbergraph_GA_Skill_TP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ASK7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

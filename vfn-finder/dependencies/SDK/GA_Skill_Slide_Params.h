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
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.CreateTargetActor
	 */
	struct UGA_Skill_Slide_C_CreateTargetActor_Params
	{	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.OnFinish_E19CE26D4C360AB07BF5568EF471E18B
	 */
	struct UGA_Skill_Slide_C_OnFinish_E19CE26D4C360AB07BF5568EF471E18B_Params
	{	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.OnEvent_44321C7A4B5F559B0F45F3AED9AA2C47
	 */
	struct UGA_Skill_Slide_C_OnEvent_44321C7A4B5F559B0F45F3AED9AA2C47_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.OnInterrupted_44321C7A4B5F559B0F45F3AED9AA2C47
	 */
	struct UGA_Skill_Slide_C_OnInterrupted_44321C7A4B5F559B0F45F3AED9AA2C47_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.OnBlendOut_44321C7A4B5F559B0F45F3AED9AA2C47
	 */
	struct UGA_Skill_Slide_C_OnBlendOut_44321C7A4B5F559B0F45F3AED9AA2C47_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.OnCancelled_44321C7A4B5F559B0F45F3AED9AA2C47
	 */
	struct UGA_Skill_Slide_C_OnCancelled_44321C7A4B5F559B0F45F3AED9AA2C47_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.OnCompleted_44321C7A4B5F559B0F45F3AED9AA2C47
	 */
	struct UGA_Skill_Slide_C_OnCompleted_44321C7A4B5F559B0F45F3AED9AA2C47_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.K2_ActivateAbility
	 */
	struct UGA_Skill_Slide_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.K2_OnEndAbility
	 */
	struct UGA_Skill_Slide_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.PlayMontage
	 */
	struct UGA_Skill_Slide_C_PlayMontage_Params
	{	};

	/**
	 * Function GA_Skill_Slide.GA_Skill_Slide_C.ExecuteUbergraph_GA_Skill_Slide
	 */
	struct UGA_Skill_Slide_C_ExecuteUbergraph_GA_Skill_Slide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

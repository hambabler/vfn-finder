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
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.OnEvent_244B78624D6C92C8D3E611A40C9467B1
	 */
	struct UGA_Skill_AutoRepair_C_OnEvent_244B78624D6C92C8D3E611A40C9467B1_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.OnInterrupted_244B78624D6C92C8D3E611A40C9467B1
	 */
	struct UGA_Skill_AutoRepair_C_OnInterrupted_244B78624D6C92C8D3E611A40C9467B1_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.OnBlendOut_244B78624D6C92C8D3E611A40C9467B1
	 */
	struct UGA_Skill_AutoRepair_C_OnBlendOut_244B78624D6C92C8D3E611A40C9467B1_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.OnCancelled_244B78624D6C92C8D3E611A40C9467B1
	 */
	struct UGA_Skill_AutoRepair_C_OnCancelled_244B78624D6C92C8D3E611A40C9467B1_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.OnCompleted_244B78624D6C92C8D3E611A40C9467B1
	 */
	struct UGA_Skill_AutoRepair_C_OnCompleted_244B78624D6C92C8D3E611A40C9467B1_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.K2_ActivateAbility
	 */
	struct UGA_Skill_AutoRepair_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.K2_OnEndAbility
	 */
	struct UGA_Skill_AutoRepair_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_AutoRepair.GA_Skill_AutoRepair_C.ExecuteUbergraph_GA_Skill_AutoRepair
	 */
	struct UGA_Skill_AutoRepair_C_ExecuteUbergraph_GA_Skill_AutoRepair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

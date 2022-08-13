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
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.GrappinHit
	 */
	struct UGA_Skill_Grappin_C_GrappinHit_Params
	{	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnEvent_510B846242D0ABCA6A8A13BC894A4C00
	 */
	struct UGA_Skill_Grappin_C_OnEvent_510B846242D0ABCA6A8A13BC894A4C00_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnInterrupted_510B846242D0ABCA6A8A13BC894A4C00
	 */
	struct UGA_Skill_Grappin_C_OnInterrupted_510B846242D0ABCA6A8A13BC894A4C00_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnBlendOut_510B846242D0ABCA6A8A13BC894A4C00
	 */
	struct UGA_Skill_Grappin_C_OnBlendOut_510B846242D0ABCA6A8A13BC894A4C00_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnCancelled_510B846242D0ABCA6A8A13BC894A4C00
	 */
	struct UGA_Skill_Grappin_C_OnCancelled_510B846242D0ABCA6A8A13BC894A4C00_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnCompleted_510B846242D0ABCA6A8A13BC894A4C00
	 */
	struct UGA_Skill_Grappin_C_OnCompleted_510B846242D0ABCA6A8A13BC894A4C00_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnTimedOutAndDestinationReached_F333022F4F3FB994E2F0F1956079CD0F
	 */
	struct UGA_Skill_Grappin_C_OnTimedOutAndDestinationReached_F333022F4F3FB994E2F0F1956079CD0F_Params
	{	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.OnTimedOut_F333022F4F3FB994E2F0F1956079CD0F
	 */
	struct UGA_Skill_Grappin_C_OnTimedOut_F333022F4F3FB994E2F0F1956079CD0F_Params
	{	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.K2_ActivateAbility
	 */
	struct UGA_Skill_Grappin_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_Grappin.GA_Skill_Grappin_C.ExecuteUbergraph_GA_Skill_Grappin
	 */
	struct UGA_Skill_Grappin_C_ExecuteUbergraph_GA_Skill_Grappin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

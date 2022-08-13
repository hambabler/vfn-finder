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
	 * Function GA_Knife.GA_Knife_C.Stab_Visual
	 */
	struct UGA_Knife_C_Stab_Visual_Params
	{	};

	/**
	 * Function GA_Knife.GA_Knife_C.GetRange
	 */
	struct UGA_Knife_C_GetRange_Params
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JRYB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_Knife.GA_Knife_C.GetFPSAnimInfo
	 */
	struct UGA_Knife_C_GetFPSAnimInfo_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.Get TPSAnim Info
	 */
	struct UGA_Knife_C_Get_TPSAnim_Info_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AMRY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Anim;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.Stab
	 */
	struct UGA_Knife_C_Stab_Params
	{	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7
	 */
	struct UGA_Knife_C_OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7
	 */
	struct UGA_Knife_C_OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7
	 */
	struct UGA_Knife_C_OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7
	 */
	struct UGA_Knife_C_OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7
	 */
	struct UGA_Knife_C_OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 */
	struct UGA_Knife_C_OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 */
	struct UGA_Knife_C_OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 */
	struct UGA_Knife_C_OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 */
	struct UGA_Knife_C_OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 */
	struct UGA_Knife_C_OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.K2_ActivateAbility
	 */
	struct UGA_Knife_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Knife.GA_Knife_C.K2_OnEndAbility
	 */
	struct UGA_Knife_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Knife.GA_Knife_C.RPC_Visuals
	 */
	struct UGA_Knife_C_RPC_Visuals_Params
	{	};

	/**
	 * Function GA_Knife.GA_Knife_C.ExecuteUbergraph_GA_Knife
	 */
	struct UGA_Knife_C_ExecuteUbergraph_GA_Knife_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

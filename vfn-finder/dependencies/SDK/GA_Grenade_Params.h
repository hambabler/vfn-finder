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
	 * Function GA_Grenade.GA_Grenade_C.FindPath
	 */
	struct UGA_Grenade_C_FindPath_Params
	{
	public:
		struct FVector                                             StartLoc;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TossVelocity;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47
	 */
	struct UGA_Grenade_C_DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.Success_4263FC1243BA80414B92BAB4CA223B47
	 */
	struct UGA_Grenade_C_Success_4263FC1243BA80414B92BAB4CA223B47_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.OnEvent_C0A4480C442972797A9AF7B0BAE97B2E
	 */
	struct UGA_Grenade_C_OnEvent_C0A4480C442972797A9AF7B0BAE97B2E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E
	 */
	struct UGA_Grenade_C_OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E
	 */
	struct UGA_Grenade_C_OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E
	 */
	struct UGA_Grenade_C_OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E
	 */
	struct UGA_Grenade_C_OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9
	 */
	struct UGA_Grenade_C_OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9_Params
	{
	public:
		float                                                      TimeWaited;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.K2_ActivateAbility
	 */
	struct UGA_Grenade_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.On destroyed
	 */
	struct UGA_Grenade_C_On_destroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Grenade.GA_Grenade_C.ExecuteUbergraph_GA_Grenade
	 */
	struct UGA_Grenade_C_ExecuteUbergraph_GA_Grenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

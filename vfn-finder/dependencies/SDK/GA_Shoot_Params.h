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
	 * Function GA_Shoot.GA_Shoot_C.Get Current Weapon
	 */
	struct UGA_Shoot_C_Get_Current_Weapon_Params
	{
	public:
		class AUpGunWeapon*                                        Weapon;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.IsReloading
	 */
	struct UGA_Shoot_C_IsReloading_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UATY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.Reload
	 */
	struct UGA_Shoot_C_Reload_Params
	{	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53
	 */
	struct UGA_Shoot_C_OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53_Params
	{	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnRelease_08748EC849AA0C4DCE7A438AC21E9E51
	 */
	struct UGA_Shoot_C_OnRelease_08748EC849AA0C4DCE7A438AC21E9E51_Params
	{
	public:
		float                                                      TimeHeld;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnEvent_D00B370244AA4923B98259ADD756359C
	 */
	struct UGA_Shoot_C_OnEvent_D00B370244AA4923B98259ADD756359C_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnInterrupted_D00B370244AA4923B98259ADD756359C
	 */
	struct UGA_Shoot_C_OnInterrupted_D00B370244AA4923B98259ADD756359C_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnBlendOut_D00B370244AA4923B98259ADD756359C
	 */
	struct UGA_Shoot_C_OnBlendOut_D00B370244AA4923B98259ADD756359C_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnCancelled_D00B370244AA4923B98259ADD756359C
	 */
	struct UGA_Shoot_C_OnCancelled_D00B370244AA4923B98259ADD756359C_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.OnCompleted_D00B370244AA4923B98259ADD756359C
	 */
	struct UGA_Shoot_C_OnCompleted_D00B370244AA4923B98259ADD756359C_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.K2_ActivateAbility
	 */
	struct UGA_Shoot_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Shoot.GA_Shoot_C.ExecuteUbergraph_GA_Shoot
	 */
	struct UGA_Shoot_C_ExecuteUbergraph_GA_Shoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

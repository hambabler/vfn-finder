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
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.IsMagazineEmpty
	 */
	struct UGA_Skill_ChargedSpray_C_IsMagazineEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_31EN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8
	 */
	struct UGA_Skill_ChargedSpray_C_OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8_Params
	{	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637
	 */
	struct UGA_Skill_ChargedSpray_C_OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637
	 */
	struct UGA_Skill_ChargedSpray_C_OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637
	 */
	struct UGA_Skill_ChargedSpray_C_OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637
	 */
	struct UGA_Skill_ChargedSpray_C_OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637
	 */
	struct UGA_Skill_ChargedSpray_C_OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnEvent_06C633F54425A7DAE97A3D96B03E18DA
	 */
	struct UGA_Skill_ChargedSpray_C_OnEvent_06C633F54425A7DAE97A3D96B03E18DA_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA
	 */
	struct UGA_Skill_ChargedSpray_C_OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA
	 */
	struct UGA_Skill_ChargedSpray_C_OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCancelled_06C633F54425A7DAE97A3D96B03E18DA
	 */
	struct UGA_Skill_ChargedSpray_C_OnCancelled_06C633F54425A7DAE97A3D96B03E18DA_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCompleted_06C633F54425A7DAE97A3D96B03E18DA
	 */
	struct UGA_Skill_ChargedSpray_C_OnCompleted_06C633F54425A7DAE97A3D96B03E18DA_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.K2_ActivateAbility
	 */
	struct UGA_Skill_ChargedSpray_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.ExecuteUbergraph_GA_Skill_ChargedSpray
	 */
	struct UGA_Skill_ChargedSpray_C_ExecuteUbergraph_GA_Skill_ChargedSpray_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5PL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

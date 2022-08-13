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
	 * Function SkillToAdd.SkillToAdd_C.SpareLevelsToAdd
	 */
	struct USkillToAdd_C_SpareLevelsToAdd_Params
	{
	public:
		int32_t                                                    SpareLevels;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.CanAddCapacity
	 */
	struct USkillToAdd_C_CanAddCapacity_Params
	{
	public:
		bool                                                       CanAdd;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CUCH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.Can Add Secondary Weapons
	 */
	struct USkillToAdd_C_Can_Add_Secondary_Weapons_Params
	{
	public:
		bool                                                       CanAddExtention;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TG0P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.IsSkillCompatible
	 */
	struct USkillToAdd_C_IsSkillCompatible_Params
	{
	public:
		bool                                                       Available;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Q1S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.Add Skill to Array
	 */
	struct USkillToAdd_C_Add_Skill_to_Array_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.RemoveAbilityFromArray
	 */
	struct USkillToAdd_C_RemoveAbilityFromArray_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.Is Available
	 */
	struct USkillToAdd_C_Is_Available_Params
	{
	public:
		bool                                                       CanBeEdited;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAvailableToAdd;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.CountSkillsLevelsToAdd
	 */
	struct USkillToAdd_C_CountSkillsLevelsToAdd_Params
	{
	public:
		int32_t                                                    Levels;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.UpdateColor
	 */
	struct USkillToAdd_C_UpdateColor_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.InitVisuals
	 */
	struct USkillToAdd_C_InitVisuals_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.GetPercent_1
	 */
	struct USkillToAdd_C_GetPercent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.Construct
	 */
	struct USkillToAdd_C_Construct_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct USkillToAdd_C_BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.OnMouseEnter
	 */
	struct USkillToAdd_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.OnMouseLeave
	 */
	struct USkillToAdd_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct USkillToAdd_C_BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct USkillToAdd_C_BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.Update Availability
	 */
	struct USkillToAdd_C_Update_Availability_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct USkillToAdd_C_BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.Tick
	 */
	struct USkillToAdd_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.ExecuteUbergraph_SkillToAdd
	 */
	struct USkillToAdd_C_ExecuteUbergraph_SkillToAdd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3KZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillToAdd.SkillToAdd_C.UpdatedSkill__DelegateSignature
	 */
	struct USkillToAdd_C_UpdatedSkill__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

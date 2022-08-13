/**
 * Name: UpGun
 * Version: 0.5
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.SpareLevelsToAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SpareLevels                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillToAdd_C::SpareLevelsToAdd(int32_t* SpareLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.SpareLevelsToAdd");
		
		USkillToAdd_C_SpareLevelsToAdd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpareLevels != nullptr)
			*SpareLevels = params.SpareLevels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.CanAddCapacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanAdd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillToAdd_C::CanAddCapacity(bool* CanAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.CanAddCapacity");
		
		USkillToAdd_C_CanAddCapacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAdd != nullptr)
			*CanAdd = params.CanAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.Can Add Secondary Weapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanAddExtention                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillToAdd_C::Can_Add_Secondary_Weapons(bool* CanAddExtention)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.Can Add Secondary Weapons");
		
		USkillToAdd_C_Can_Add_Secondary_Weapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAddExtention != nullptr)
			*CanAddExtention = params.CanAddExtention;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.IsSkillCompatible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillToAdd_C::IsSkillCompatible(bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.IsSkillCompatible");
		
		USkillToAdd_C_IsSkillCompatible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.Add Skill to Array
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::Add_Skill_to_Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.Add Skill to Array");
		
		USkillToAdd_C_Add_Skill_to_Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.RemoveAbilityFromArray
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::RemoveAbilityFromArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.RemoveAbilityFromArray");
		
		USkillToAdd_C_RemoveAbilityFromArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.Is Available
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBeEdited                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAvailableToAdd                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillToAdd_C::Is_Available(bool* CanBeEdited, bool* IsAvailableToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.Is Available");
		
		USkillToAdd_C_Is_Available_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBeEdited != nullptr)
			*CanBeEdited = params.CanBeEdited;
		if (IsAvailableToAdd != nullptr)
			*IsAvailableToAdd = params.IsAvailableToAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.CountSkillsLevelsToAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Levels                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillToAdd_C::CountSkillsLevelsToAdd(int32_t* Levels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.CountSkillsLevelsToAdd");
		
		USkillToAdd_C_CountSkillsLevelsToAdd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Levels != nullptr)
			*Levels = params.Levels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.UpdateColor");
		
		USkillToAdd_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.InitVisuals
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::InitVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.InitVisuals");
		
		USkillToAdd_C_InitVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.GetPercent_1
	 * 		Flags  -> ()
	 */
	float USkillToAdd_C::GetPercent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.GetPercent_1");
		
		USkillToAdd_C_GetPercent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.Construct");
		
		USkillToAdd_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillToAdd_C::BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		USkillToAdd_C_BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USkillToAdd_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.OnMouseEnter");
		
		USkillToAdd_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USkillToAdd_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.OnMouseLeave");
		
		USkillToAdd_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");
		
		USkillToAdd_C_BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature");
		
		USkillToAdd_C_BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.Update Availability
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::Update_Availability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.Update Availability");
		
		USkillToAdd_C_Update_Availability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		USkillToAdd_C_BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillToAdd_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.Tick");
		
		USkillToAdd_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.ExecuteUbergraph_SkillToAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillToAdd_C::ExecuteUbergraph_SkillToAdd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.ExecuteUbergraph_SkillToAdd");
		
		USkillToAdd_C_ExecuteUbergraph_SkillToAdd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToAdd.SkillToAdd_C.UpdatedSkill__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToAdd_C::UpdatedSkill__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToAdd.SkillToAdd_C.UpdatedSkill__DelegateSignature");
		
		USkillToAdd_C_UpdatedSkill__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillToAdd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillToAdd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillToAdd.SkillToAdd_C");
		return ptr;
	}

}



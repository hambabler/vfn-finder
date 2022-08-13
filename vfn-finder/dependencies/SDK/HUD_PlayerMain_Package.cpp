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
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.UpdateCrossHair
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerMain_C::UpdateCrossHair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.UpdateCrossHair");
		
		UHUD_PlayerMain_C_UpdateCrossHair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.UpdateHealth
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerMain_C::UpdateHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.UpdateHealth");
		
		UHUD_PlayerMain_C_UpdateHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.Homing Bullets Trace
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerMain_C::Homing_Bullets_Trace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.Homing Bullets Trace");
		
		UHUD_PlayerMain_C_Homing_Bullets_Trace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.Place Widget on Screen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AutoAimLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::Place_Widget_on_Screen(const struct FVector& AutoAimLocation, bool Condition, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.Place Widget on Screen");
		
		UHUD_PlayerMain_C_Place_Widget_on_Screen_Params params {};
		params.AutoAimLocation = AutoAimLocation;
		params.Condition = Condition;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.HUD_Anim_Run
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::HUD_Anim_Run(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.HUD_Anim_Run");
		
		UHUD_PlayerMain_C_HUD_Anim_Run_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.HUD_Anim_Fall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::HUD_Anim_Fall(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.HUD_Anim_Fall");
		
		UHUD_PlayerMain_C_HUD_Anim_Fall_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.HideRespawnText
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerMain_C::HideRespawnText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.HideRespawnText");
		
		UHUD_PlayerMain_C_HideRespawnText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.OnPlayerKilled
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerMain_C::OnPlayerKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.OnPlayerKilled");
		
		UHUD_PlayerMain_C_OnPlayerKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.GetRespawnText
	 * 		Flags  -> ()
	 */
	class FText UHUD_PlayerMain_C::GetRespawnText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.GetRespawnText");
		
		UHUD_PlayerMain_C_GetRespawnText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.OnHealthOrOverHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttribute                          Attribute                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::OnHealthOrOverHealthChanged(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.OnHealthOrOverHealthChanged");
		
		UHUD_PlayerMain_C_OnHealthOrOverHealthChanged_Params params {};
		params.Attribute = Attribute;
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.OnAcknowledgedPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::OnAcknowledgedPossession(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.OnAcknowledgedPossession");
		
		UHUD_PlayerMain_C_OnAcknowledgedPossession_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerMain_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.Construct");
		
		UHUD_PlayerMain_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.Tick");
		
		UHUD_PlayerMain_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.ExecuteUbergraph_HUD_PlayerMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::ExecuteUbergraph_HUD_PlayerMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.ExecuteUbergraph_HUD_PlayerMain");
		
		UHUD_PlayerMain_C_ExecuteUbergraph_HUD_PlayerMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerMain.HUD_PlayerMain_C.OnCharacterUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBaseCharacter*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerMain_C::OnCharacterUpdated__DelegateSignature(class AUpGunBaseCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerMain.HUD_PlayerMain_C.OnCharacterUpdated__DelegateSignature");
		
		UHUD_PlayerMain_C_OnCharacterUpdated__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerMain.HUD_PlayerMain_C");
		return ptr;
	}

}



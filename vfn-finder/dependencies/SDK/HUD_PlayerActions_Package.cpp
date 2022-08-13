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
	 * 		Name   -> Function HUD_PlayerActions.HUD_PlayerActions_C.GetScoreText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UHUD_PlayerActions_C::GetScoreText(const struct FGameplayTag& Tag, class AActor* Target, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActions.HUD_PlayerActions_C.GetScoreText");
		
		UHUD_PlayerActions_C_GetScoreText_Params params {};
		params.Tag = Tag;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActions.HUD_PlayerActions_C.OnGivedScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ScoreTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerActions_C::OnGivedScore(const struct FGameplayTag& ScoreTag, float Score, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActions.HUD_PlayerActions_C.OnGivedScore");
		
		UHUD_PlayerActions_C_OnGivedScore_Params params {};
		params.ScoreTag = ScoreTag;
		params.Score = Score;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActions.HUD_PlayerActions_C.AddAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_PlayerActions_C::AddAction(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActions.HUD_PlayerActions_C.AddAction");
		
		UHUD_PlayerActions_C_AddAction_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActions.HUD_PlayerActions_C.OnScoreUpdated
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerActions_C::OnScoreUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActions.HUD_PlayerActions_C.OnScoreUpdated");
		
		UHUD_PlayerActions_C_OnScoreUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActions.HUD_PlayerActions_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerActions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActions.HUD_PlayerActions_C.Construct");
		
		UHUD_PlayerActions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActions.HUD_PlayerActions_C.ExecuteUbergraph_HUD_PlayerActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerActions_C::ExecuteUbergraph_HUD_PlayerActions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActions.HUD_PlayerActions_C.ExecuteUbergraph_HUD_PlayerActions");
		
		UHUD_PlayerActions_C_ExecuteUbergraph_HUD_PlayerActions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerActions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerActions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerActions.HUD_PlayerActions_C");
		return ptr;
	}

}



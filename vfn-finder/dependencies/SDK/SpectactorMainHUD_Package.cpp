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
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.Text_Map
	 * 		Flags  -> ()
	 */
	class FText USpectactorMainHUD_C::Text_Map()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.Text_Map");
		
		USpectactorMainHUD_C_Text_Map_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.Get_TextBlock_MapName_1_Text_1
	 * 		Flags  -> ()
	 */
	class FText USpectactorMainHUD_C::Get_TextBlock_MapName_1_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.Get_TextBlock_MapName_1_Text_1");
		
		USpectactorMainHUD_C_Get_TextBlock_MapName_1_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.PlayerNumbers
	 * 		Flags  -> ()
	 */
	class FText USpectactorMainHUD_C::PlayerNumbers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.PlayerNumbers");
		
		USpectactorMainHUD_C_PlayerNumbers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.DateText
	 * 		Flags  -> ()
	 */
	class FText USpectactorMainHUD_C::DateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.DateText");
		
		USpectactorMainHUD_C_DateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.RecordColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor USpectactorMainHUD_C::RecordColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.RecordColor");
		
		USpectactorMainHUD_C_RecordColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.TimerText
	 * 		Flags  -> ()
	 */
	class FText USpectactorMainHUD_C::TimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.TimerText");
		
		USpectactorMainHUD_C_TimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void USpectactorMainHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.Construct");
		
		USpectactorMainHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectactorMainHUD.SpectactorMainHUD_C.ExecuteUbergraph_SpectactorMainHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectactorMainHUD_C::ExecuteUbergraph_SpectactorMainHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectactorMainHUD.SpectactorMainHUD_C.ExecuteUbergraph_SpectactorMainHUD");
		
		USpectactorMainHUD_C_ExecuteUbergraph_SpectactorMainHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectactorMainHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectactorMainHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectactorMainHUD.SpectactorMainHUD_C");
		return ptr;
	}

}



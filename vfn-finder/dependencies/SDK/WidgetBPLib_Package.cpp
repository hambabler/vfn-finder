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
	 * 		Name   -> Function WidgetBPLib.WidgetBPLib_C.FormatTimeNoMinutes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MinDigits                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWidgetBPLib_C::FormatTimeNoMinutes(float Seconds, int32_t MinDigits, class UObject* WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WidgetBPLib.WidgetBPLib_C.FormatTimeNoMinutes");
		
		UWidgetBPLib_C_FormatTimeNoMinutes_Params params {};
		params.Seconds = Seconds;
		params.MinDigits = MinDigits;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WidgetBPLib.WidgetBPLib_C.FormatTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWidgetBPLib_C::FormatTime(float Seconds, class UObject* WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WidgetBPLib.WidgetBPLib_C.FormatTime");
		
		UWidgetBPLib_C_FormatTime_Params params {};
		params.Seconds = Seconds;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetBPLib_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetBPLib_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WidgetBPLib.WidgetBPLib_C");
		return ptr;
	}

}



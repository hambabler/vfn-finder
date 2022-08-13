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
	 * 		Name   -> Function Sub_Pseudo.Sub_Pseudo_C.OverrideName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USub_Pseudo_C::OverrideName(const class FText& Text, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_Pseudo.Sub_Pseudo_C.OverrideName");
		
		USub_Pseudo_C_OverrideName_Params params {};
		params.Text = Text;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sub_Pseudo.Sub_Pseudo_C.GenerateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USub_Pseudo_C::GenerateWidget(class AUpGunBasePlayerState** PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_Pseudo.Sub_Pseudo_C.GenerateWidget");
		
		USub_Pseudo_C_GenerateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PS != nullptr)
			*PS = params.PS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sub_Pseudo.Sub_Pseudo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USub_Pseudo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_Pseudo.Sub_Pseudo_C.PreConstruct");
		
		USub_Pseudo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sub_Pseudo.Sub_Pseudo_C.Construct
	 * 		Flags  -> ()
	 */
	void USub_Pseudo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_Pseudo.Sub_Pseudo_C.Construct");
		
		USub_Pseudo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sub_Pseudo.Sub_Pseudo_C.ExecuteUbergraph_Sub_Pseudo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USub_Pseudo_C::ExecuteUbergraph_Sub_Pseudo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_Pseudo.Sub_Pseudo_C.ExecuteUbergraph_Sub_Pseudo");
		
		USub_Pseudo_C_ExecuteUbergraph_Sub_Pseudo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USub_Pseudo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USub_Pseudo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Sub_Pseudo.Sub_Pseudo_C");
		return ptr;
	}

}



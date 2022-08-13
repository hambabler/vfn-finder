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
	 * 		Name   -> Function W_InputKey.W_InputKey_C.Texture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UW_InputKey_C::Texture(class UTexture2D** Texture, bool HasImage, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.Texture");
		
		UW_InputKey_C_Texture_Params params {};
		params.HasImage = HasImage;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_InputKey_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.Construct");
		
		UW_InputKey_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.DisplayKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_InputKey_C::DisplayKey(const class FName& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.DisplayKey");
		
		UW_InputKey_C_DisplayKey_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_InputKey_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.PreConstruct");
		
		UW_InputKey_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.RefreshDisplay
	 * 		Flags  -> ()
	 */
	void UW_InputKey_C::RefreshDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.RefreshDisplay");
		
		UW_InputKey_C_RefreshDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.InputsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_InputKey_C::InputsChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.InputsChanged");
		
		UW_InputKey_C_InputsChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.KeyMapChanged
	 * 		Flags  -> ()
	 */
	void UW_InputKey_C::KeyMapChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.KeyMapChanged");
		
		UW_InputKey_C_KeyMapChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_InputKey.W_InputKey_C.ExecuteUbergraph_W_InputKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_InputKey_C::ExecuteUbergraph_W_InputKey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_InputKey.W_InputKey_C.ExecuteUbergraph_W_InputKey");
		
		UW_InputKey_C_ExecuteUbergraph_W_InputKey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_InputKey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_InputKey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InputKey.W_InputKey_C");
		return ptr;
	}

}



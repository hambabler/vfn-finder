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
	 * 		Name   -> Function BP_SAVE.BP_SAVE_C.AddMapToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               HasAllMaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SAVE_C::AddMapToList(const class FString& MapName, bool* HasAllMaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SAVE.BP_SAVE_C.AddMapToList");
		
		UBP_SAVE_C_AddMapToList_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAllMaps != nullptr)
			*HasAllMaps = params.HasAllMaps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SAVE.BP_SAVE_C.CountDroppableSkills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Available_Skills                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SAVE_C::CountDroppableSkills(int32_t* Available_Skills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SAVE.BP_SAVE_C.CountDroppableSkills");
		
		UBP_SAVE_C_CountDroppableSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available_Skills != nullptr)
			*Available_Skills = params.Available_Skills;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SAVE.BP_SAVE_C.CheckAchievementSkills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAllSkills                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SAVE_C::CheckAchievementSkills(bool* HasAllSkills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SAVE.BP_SAVE_C.CheckAchievementSkills");
		
		UBP_SAVE_C_CheckAchievementSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAllSkills != nullptr)
			*HasAllSkills = params.HasAllSkills;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SAVE.BP_SAVE_C.CheckAchievementMaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAllMaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SAVE_C::CheckAchievementMaps(bool* HasAllMaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SAVE.BP_SAVE_C.CheckAchievementMaps");
		
		UBP_SAVE_C_CheckAchievementMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAllMaps != nullptr)
			*HasAllMaps = params.HasAllMaps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SAVE.BP_SAVE_C.Check
	 * 		Flags  -> ()
	 */
	void UBP_SAVE_C::Check()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SAVE.BP_SAVE_C.Check");
		
		UBP_SAVE_C_Check_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SAVE.BP_SAVE_C.ExecuteUbergraph_BP_SAVE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SAVE_C::ExecuteUbergraph_BP_SAVE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SAVE.BP_SAVE_C.ExecuteUbergraph_BP_SAVE");
		
		UBP_SAVE_C_ExecuteUbergraph_BP_SAVE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SAVE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SAVE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SAVE.BP_SAVE_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_Skill_TP_Disk.BP_Skill_TP_Disk_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Skill_TP_Disk_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_TP_Disk.BP_Skill_TP_Disk_C.ReceiveBeginPlay");
		
		ABP_Skill_TP_Disk_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skill_TP_Disk.BP_Skill_TP_Disk_C.BP_Destroyed
	 * 		Flags  -> ()
	 */
	void ABP_Skill_TP_Disk_C::BP_Destroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_TP_Disk.BP_Skill_TP_Disk_C.BP_Destroyed");
		
		ABP_Skill_TP_Disk_C_BP_Destroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skill_TP_Disk.BP_Skill_TP_Disk_C.ExecuteUbergraph_BP_Skill_TP_Disk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Skill_TP_Disk_C::ExecuteUbergraph_BP_Skill_TP_Disk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_TP_Disk.BP_Skill_TP_Disk_C.ExecuteUbergraph_BP_Skill_TP_Disk");
		
		ABP_Skill_TP_Disk_C_ExecuteUbergraph_BP_Skill_TP_Disk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Skill_TP_Disk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Skill_TP_Disk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skill_TP_Disk.BP_Skill_TP_Disk_C");
		return ptr;
	}

}



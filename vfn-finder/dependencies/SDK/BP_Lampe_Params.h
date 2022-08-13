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
	 * Function BP_Lampe.BP_Lampe_C.OnRep_DamageTaken
	 */
	struct ABP_Lampe_C_OnRep_DamageTaken_Params
	{	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.UserConstructionScript
	 */
	struct ABP_Lampe_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Lampe_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Lampe_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.ReactToDamageRPC
	 */
	struct ABP_Lampe_C_ReactToDamageRPC_Params
	{	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.ReceiveHit
	 */
	struct ABP_Lampe_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRQ1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.ReceiveBeginPlay
	 */
	struct ABP_Lampe_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lampe.BP_Lampe_C.ExecuteUbergraph_BP_Lampe
	 */
	struct ABP_Lampe_C_ExecuteUbergraph_BP_Lampe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

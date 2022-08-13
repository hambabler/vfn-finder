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
	 * Function LampeSuspendue.LampeSuspendue_C.UserConstructionScript
	 */
	struct ALampeSuspendue_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LampeSuspendue.LampeSuspendue_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ALampeSuspendue_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JUNG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function LampeSuspendue.LampeSuspendue_C.Simulate physics
	 */
	struct ALampeSuspendue_C_Simulate_physics_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LampeSuspendue.LampeSuspendue_C.ReceiveBeginPlay
	 */
	struct ALampeSuspendue_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LampeSuspendue.LampeSuspendue_C.ExecuteUbergraph_LampeSuspendue
	 */
	struct ALampeSuspendue_C_ExecuteUbergraph_LampeSuspendue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OQGM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

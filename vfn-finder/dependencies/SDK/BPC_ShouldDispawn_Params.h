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
	 * Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.ReceiveBeginPlay
	 */
	struct UBPC_ShouldDispawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRound_Delegate
	 */
	struct UBPC_ShouldDispawn_C_OnNewRound_Delegate_Params
	{
	public:
		unsigned char                                              OldRound;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewRound;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.ExecuteUbergraph_BPC_ShouldDispawn
	 */
	struct UBPC_ShouldDispawn_C_ExecuteUbergraph_BPC_ShouldDispawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRoundWithChance__DelegateSignature
	 */
	struct UBPC_ShouldDispawn_C_OnNewRoundWithChance__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRound__DelegateSignature
	 */
	struct UBPC_ShouldDispawn_C_OnNewRound__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

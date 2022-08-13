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
	 * Function W_InputKey.W_InputKey_C.Texture
	 */
	struct UW_InputKey_C_Texture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasImage;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WTZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function W_InputKey.W_InputKey_C.Construct
	 */
	struct UW_InputKey_C_Construct_Params
	{	};

	/**
	 * Function W_InputKey.W_InputKey_C.DisplayKey
	 */
	struct UW_InputKey_C_DisplayKey_Params
	{
	public:
		class FName                                                InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_InputKey.W_InputKey_C.PreConstruct
	 */
	struct UW_InputKey_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_InputKey.W_InputKey_C.RefreshDisplay
	 */
	struct UW_InputKey_C_RefreshDisplay_Params
	{	};

	/**
	 * Function W_InputKey.W_InputKey_C.InputsChanged
	 */
	struct UW_InputKey_C_InputsChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_InputKey.W_InputKey_C.KeyMapChanged
	 */
	struct UW_InputKey_C_KeyMapChanged_Params
	{	};

	/**
	 * Function W_InputKey.W_InputKey_C.ExecuteUbergraph_W_InputKey
	 */
	struct UW_InputKey_C_ExecuteUbergraph_W_InputKey_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

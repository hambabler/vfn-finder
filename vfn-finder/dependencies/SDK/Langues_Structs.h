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
	 * UserDefinedStruct Langues.Langues
	 * Size -> 0x0022
	 */
	struct FLangues
	{
	public:
		class FString                                              CodeISO_2_33ABF03A4402C7858DF8A09DEC26CE73;              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Langue_9_0AFBA38E4A2196EC3D7121B4809FC34C;               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       IsAZERTY_11_814E265C4A3F2DEFDF627395C7653BF0;            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsTranslated_13_1DAD77E3472880762E5538853050C912;        // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

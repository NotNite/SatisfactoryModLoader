// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_GasPillar_03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GasPillar_03.BP_GasPillar_03_C.UserConstructionScript
// ()

void ABP_GasPillar_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasPillar_03.BP_GasPillar_03_C.UserConstructionScript");

	ABP_GasPillar_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
// This file has been automatically generated by the Unreal Header Implementation tool

#include "Networking/FGClientQuerySocket.h"

FClientQuerySocket::FClientQuerySocket(TSharedRef< FInternetAddr > BindAddr): mBindAddress(BindAddr){ }
bool FClientQuerySocket::Init(){ return bool(); }
uint32 FClientQuerySocket::Run(){ return uint32(); }
void FClientQuerySocket::Stop(){ }
void FClientQuerySocket::ProcessServerQueryPing(FBitWriter& BitWriter){ }
void FClientQuerySocket::ProcessServerQueryResponse(FBitReader& BitReader, const TSharedRef<FInternetAddr>& ResponseAddress){ }

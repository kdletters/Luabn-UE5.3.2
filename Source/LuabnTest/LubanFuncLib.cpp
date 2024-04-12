// Fill out your copyright notice in the Description page of Project Settings.


#include "LubanFuncLib.h"

#include "Gen/schema.h"

void ULubanFuncLib::Init()
{
	auto ProjectRootPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir());

	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString::Printf(TEXT("%s"), *ProjectRootPath));
	cfg::Tables tables;
	if (tables.load([&ProjectRootPath](::luban::ByteBuf& buf, const std::string& s)
	{
		TArray<uint8> bytes;
		auto addr = FString::Printf(TEXT("%ls/Bytes/%hs.bytes"), *ProjectRootPath, s.c_str());
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString::Printf(TEXT("== luban load addr == %s"), *addr));
		if (FFileHelper::LoadFileToArray(bytes, *addr))
		{
			buf.appendBuffer(reinterpret_cast<const char*>(bytes.GetData()), bytes.Num());
			return true;
		};
		return false;
	}))		
	{
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString::Printf(TEXT("== luban load succ == %llu"), tables.TbCharacterData.getDataList().size()));
		UE_LOG(LogTemp, Log, TEXT("== luban load succ == %llu"), tables.TbCharacterData.getDataList().size());
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, TEXT("== luban load fail =="));
		UE_LOG(LogTemp, Log, TEXT("== luban load fail == "));
	}
}
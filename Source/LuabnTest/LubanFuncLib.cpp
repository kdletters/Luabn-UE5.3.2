// Fill out your copyright notice in the Description page of Project Settings.


#include "LubanFuncLib.h"

#include "Gen/schema.h"

void ULubanFuncLib::Init()
{
	auto ProjectRootPath = std::string(TCHAR_TO_UTF8(*FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir())));

	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString::Printf(TEXT("%hs"), ProjectRootPath.c_str()));
	cfg::Tables tables;	
	if (tables.load([&ProjectRootPath](::luban::ByteBuf& buf, const std::string& s)
	{
		TArray<uint8> bytes;
		auto addr = FString(UTF8_TO_TCHAR((ProjectRootPath + "/Bytes/" + s + ".bytes").c_str()));
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString::Printf(TEXT("== luban load addr == %s"), *addr));
		if (FFileHelper::LoadFileToArray(bytes, *addr))
		{
			buf.appendBuffer(reinterpret_cast<const char*>(bytes.GetData()), bytes.Num());
			return true;
		};
		return false;
		// return buf.loadFromFile(ProjectRootPath + "/Bytes/" + s + ".bytes");
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
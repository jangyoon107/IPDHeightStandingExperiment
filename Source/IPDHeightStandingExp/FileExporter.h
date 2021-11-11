// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include <fstream>
#include "FileExporter.generated.h"

UCLASS()
class IPDHEIGHTSTANDINGEXP_API AFileExporter : public AActor
{
	GENERATED_BODY()
	
public:	
	UFUNCTION(BlueprintCallable, Category = "SaveFile")
		static bool CreateFile(FString name);

	UFUNCTION(BlueprintCallable, Category = "SaveFile")
		static bool WriteLine(FString text);

	UFUNCTION(BlueprintCallable, Category = "SaveFile")
		static bool WriteVector(FString prefix, FVector vec);

	AFileExporter(const class FObjectInitializer& ObjectInitializer);

private:
	static FString filePath;
	static FString GetTimestamp();
};

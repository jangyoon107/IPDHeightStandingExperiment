// Fill out your copyright notice in the Description page of Project Settings.

#include "IPDHeightStandingExp.h"
#include "FileExporter.h"

#include <string>
#include <fstream>
#include <ctime>
#include <iostream>

using namespace std;

FString AFileExporter::filePath;


AFileExporter::AFileExporter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer){

}

bool AFileExporter::CreateFile(FString name){
	// Use the root directory of the project for experiment data by default
	FString root = FPaths::GameDir();
	std::string MyStdString(TCHAR_TO_UTF8(*root));

	//Dir Exists?
	if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*root))
	{
		//create directory if it not exist
		FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*root);

		//still could not make directory?
		if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*root))
		{
			//Could not make the specified directory
			return false;
		}
	}

	//get complete file path
	time_t now = time(NULL);
	tm ltm; localtime_s(&ltm, &now);

	int month = ltm.tm_mon + 1;
	int day = ltm.tm_mday;
	int hour = ltm.tm_hour;
	int min = ltm.tm_min;

	filePath = FString::Printf(TEXT("%s\\%s_%02d_%02d_%02d_%02d.txt"), *root, *name, month, day, hour, min);

	//No over-writing?
	bool AllowOverWriting = false;
	if (!AllowOverWriting)
	{
		//Check if file exists already
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*filePath))
		{
			//no overwriting
			return false;
		}
	}

	FString txt = FString::Printf(
		TEXT("Experiment: %s Date (MM/DD): %02d/%02d Time: %02d:%02d\r\n"),
		*name, month, day, hour, min);
	return FFileHelper::SaveStringToFile(txt, *filePath);
}

bool AFileExporter::WriteLine(FString text){
	FString fileTxt;
	FFileHelper::LoadFileToString(fileTxt, *filePath);
	fileTxt += text + "\r\n"; // windows style line endings
	return FFileHelper::SaveStringToFile(fileTxt, *filePath);
}

bool AFileExporter::WriteVector(FString prefix, FVector vec){
	FString txt = FString::Printf(
		TEXT("%s X: %f Y: %f Z: %f"),
		*prefix, vec.X, vec.Y, vec.Z);
	return WriteLine(txt);
}

FString AFileExporter::GetTimestamp(){
	time_t now = time(NULL);
	tm ltm; localtime_s(&ltm, &now);
	// returns HH:MM:SS
	return FString::Printf(TEXT("%02d:%02d:%02d"),
		ltm.tm_hour, ltm.tm_min, ltm.tm_sec);
}
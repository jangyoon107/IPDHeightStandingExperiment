// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/ViconTrackingPrivatePCH.h"
#include "ViconTracking.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ViconTracking() {}
	void AViconTrackingRigidObj::StaticRegisterNativesAViconTrackingRigidObj()
	{
		FNativeFunctionRegistrar::RegisterFunction(AViconTrackingRigidObj::StaticClass(), "Connect",(Native)&AViconTrackingRigidObj::execConnect);
		FNativeFunctionRegistrar::RegisterFunction(AViconTrackingRigidObj::StaticClass(), "Disconnect",(Native)&AViconTrackingRigidObj::execDisconnect);
		FNativeFunctionRegistrar::RegisterFunction(AViconTrackingRigidObj::StaticClass(), "GetSubjectOrientation",(Native)&AViconTrackingRigidObj::execGetSubjectOrientation);
		FNativeFunctionRegistrar::RegisterFunction(AViconTrackingRigidObj::StaticClass(), "GetSubjectPosition",(Native)&AViconTrackingRigidObj::execGetSubjectPosition);
	}
	IMPLEMENT_CLASS(AViconTrackingRigidObj, 3889685248);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();

	VICONTRACKING_API class UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_Connect();
	VICONTRACKING_API class UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_Disconnect();
	VICONTRACKING_API class UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectOrientation();
	VICONTRACKING_API class UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectPosition();
	VICONTRACKING_API class UClass* Z_Construct_UClass_AViconTrackingRigidObj_NoRegister();
	VICONTRACKING_API class UClass* Z_Construct_UClass_AViconTrackingRigidObj();
	VICONTRACKING_API class UPackage* Z_Construct_UPackage__Script_ViconTracking();
	UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_Connect()
	{
		struct ViconTrackingRigidObj_eventConnect_Parms
		{
			FString ServerName;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AViconTrackingRigidObj();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Connect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(ViconTrackingRigidObj_eventConnect_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ViconTrackingRigidObj_eventConnect_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ViconTrackingRigidObj_eventConnect_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ViconTrackingRigidObj_eventConnect_Parms), sizeof(bool), true);
			UProperty* NewProp_ServerName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ServerName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ServerName, ViconTrackingRigidObj_eventConnect_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Tracker"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_Disconnect()
	{
		UObject* Outer=Z_Construct_UClass_AViconTrackingRigidObj();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Disconnect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Tracker"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectOrientation()
	{
		struct ViconTrackingRigidObj_eventGetSubjectOrientation_Parms
		{
			FQuat ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AViconTrackingRigidObj();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSubjectOrientation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(ViconTrackingRigidObj_eventGetSubjectOrientation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ViconTrackingRigidObj_eventGetSubjectOrientation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FQuat());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Tracker"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectPosition()
	{
		struct ViconTrackingRigidObj_eventGetSubjectPosition_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AViconTrackingRigidObj();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSubjectPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(ViconTrackingRigidObj_eventGetSubjectPosition_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ViconTrackingRigidObj_eventGetSubjectPosition_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Tracker"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AViconTrackingRigidObj_NoRegister()
	{
		return AViconTrackingRigidObj::StaticClass();
	}
	UClass* Z_Construct_UClass_AViconTrackingRigidObj()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ViconTracking();
			OuterClass = AViconTrackingRigidObj::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AViconTrackingRigidObj_Connect());
				OuterClass->LinkChild(Z_Construct_UFunction_AViconTrackingRigidObj_Disconnect());
				OuterClass->LinkChild(Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectOrientation());
				OuterClass->LinkChild(Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectPosition());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SubjectOri = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubjectOri"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SubjectOri, AViconTrackingRigidObj), 0x0010000000020015, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_SubjectPos = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubjectPos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SubjectPos, AViconTrackingRigidObj), 0x0010000000020015, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_SubjectName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubjectName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SubjectName, AViconTrackingRigidObj), 0x0010000000000005);
				UProperty* NewProp_SegmentName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SegmentName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SegmentName, AViconTrackingRigidObj), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AViconTrackingRigidObj_Connect(), "Connect"); // 7927795
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AViconTrackingRigidObj_Disconnect(), "Disconnect"); // 1138702670
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectOrientation(), "GetSubjectOrientation"); // 2815039245
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AViconTrackingRigidObj_GetSubjectPosition(), "GetSubjectPosition"); // 1875373003
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ViconTrackingRigidObj.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
				MetaData->SetValue(NewProp_SubjectOri, TEXT("Category"), TEXT("Tracker"));
				MetaData->SetValue(NewProp_SubjectOri, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
				MetaData->SetValue(NewProp_SubjectPos, TEXT("Category"), TEXT("Tracker"));
				MetaData->SetValue(NewProp_SubjectPos, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
				MetaData->SetValue(NewProp_SubjectName, TEXT("Category"), TEXT("Tracker"));
				MetaData->SetValue(NewProp_SubjectName, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
				MetaData->SetValue(NewProp_SegmentName, TEXT("Category"), TEXT("Tracker"));
				MetaData->SetValue(NewProp_SegmentName, TEXT("ModuleRelativePath"), TEXT("Public/ViconTrackingRigidObj.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AViconTrackingRigidObj(Z_Construct_UClass_AViconTrackingRigidObj, &AViconTrackingRigidObj::StaticClass, TEXT("AViconTrackingRigidObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AViconTrackingRigidObj);
	UPackage* Z_Construct_UPackage__Script_ViconTracking()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/ViconTracking")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x6ACC054A;
			Guid.B = 0x82343AB5;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuat;
struct FVector;
#ifdef VICONTRACKING_ViconTrackingRigidObj_generated_h
#error "ViconTrackingRigidObj.generated.h already included, missing '#pragma once' in ViconTrackingRigidObj.h"
#endif
#define VICONTRACKING_ViconTrackingRigidObj_generated_h

#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AViconTrackingRigidObj::Disconnect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AViconTrackingRigidObj::Connect(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubjectOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=this->GetSubjectOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubjectPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSubjectPosition(); \
		P_NATIVE_END; \
	}


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AViconTrackingRigidObj::Disconnect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AViconTrackingRigidObj::Connect(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubjectOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=this->GetSubjectOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubjectPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSubjectPosition(); \
		P_NATIVE_END; \
	}


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAViconTrackingRigidObj(); \
	friend VICONTRACKING_API class UClass* Z_Construct_UClass_AViconTrackingRigidObj(); \
	public: \
	DECLARE_CLASS(AViconTrackingRigidObj, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ViconTracking"), NO_API) \
	DECLARE_SERIALIZER(AViconTrackingRigidObj) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAViconTrackingRigidObj(); \
	friend VICONTRACKING_API class UClass* Z_Construct_UClass_AViconTrackingRigidObj(); \
	public: \
	DECLARE_CLASS(AViconTrackingRigidObj, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ViconTracking"), NO_API) \
	DECLARE_SERIALIZER(AViconTrackingRigidObj) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AViconTrackingRigidObj(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AViconTrackingRigidObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AViconTrackingRigidObj); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AViconTrackingRigidObj); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AViconTrackingRigidObj(AViconTrackingRigidObj&&); \
	NO_API AViconTrackingRigidObj(const AViconTrackingRigidObj&); \
public:


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AViconTrackingRigidObj(AViconTrackingRigidObj&&); \
	NO_API AViconTrackingRigidObj(const AViconTrackingRigidObj&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AViconTrackingRigidObj); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AViconTrackingRigidObj); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AViconTrackingRigidObj)


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_11_PROLOG
#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_RPC_WRAPPERS \
	IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_INCLASS \
	IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_INCLASS_NO_PURE_DECLS \
	IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IPDHeightStandingExp_Plugins_ViconTracking_Source_ViconTracking_Public_ViconTrackingRigidObj_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

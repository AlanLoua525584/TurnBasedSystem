// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HighlightSystem/Highlightable.h"

#ifdef PROJECTGATE_Highlightable_generated_h
#error "Highlightable.generated.h already included, missing '#pragma once' in Highlightable.h"
#endif
#define PROJECTGATE_Highlightable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPrimitiveComponent;
enum class EHighlightType : uint8;

// ********** Begin Interface UHighlightable *******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanBeHighlighted_Implementation() const { return false; }; \
	virtual TArray<UPrimitiveComponent*> GetHighlightableComponents_Implementation() { return TArray<UPrimitiveComponent*>(); }; \
	virtual void OnHighlightRemoved_Implementation(EHighlightType Type) {}; \
	virtual void OnHighlightApplied_Implementation(EHighlightType Type) {}; \
	DECLARE_FUNCTION(execCanBeHighlighted); \
	DECLARE_FUNCTION(execGetHighlightableComponents); \
	DECLARE_FUNCTION(execOnHighlightRemoved); \
	DECLARE_FUNCTION(execOnHighlightApplied);


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_CALLBACK_WRAPPERS
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightable_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHighlightable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHighlightable(UHighlightable&&) = delete; \
	UHighlightable(const UHighlightable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHighlightable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHighlightable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHighlightable) \
	virtual ~UHighlightable() = default;


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHighlightable(); \
	friend struct Z_Construct_UClass_UHighlightable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightable_NoRegister(); \
public: \
	DECLARE_CLASS2(UHighlightable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UHighlightable_NoRegister) \
	DECLARE_SERIALIZER(UHighlightable)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHighlightable() {} \
public: \
	typedef UHighlightable UClassType; \
	typedef IHighlightable ThisClass; \
	static bool Execute_CanBeHighlighted(const UObject* O); \
	static TArray<UPrimitiveComponent*> Execute_GetHighlightableComponents(UObject* O); \
	static void Execute_OnHighlightApplied(UObject* O, EHighlightType Type); \
	static void Execute_OnHighlightRemoved(UObject* O, EHighlightType Type); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_11_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_CALLBACK_WRAPPERS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHighlightable;

// ********** End Interface UHighlightable *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

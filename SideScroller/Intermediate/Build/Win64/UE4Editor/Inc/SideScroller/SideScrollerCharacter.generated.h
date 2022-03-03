// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_SideScrollerCharacter_generated_h
#error "SideScrollerCharacter.generated.h already included, missing '#pragma once' in SideScrollerCharacter.h"
#endif
#define SIDESCROLLER_SideScrollerCharacter_generated_h

#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_SPARSE_DATA
#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideScrollerCharacter(); \
	friend struct Z_Construct_UClass_ASideScrollerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASideScrollerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ASideScrollerCharacter)


#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASideScrollerCharacter(); \
	friend struct Z_Construct_UClass_ASideScrollerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASideScrollerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ASideScrollerCharacter)


#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASideScrollerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASideScrollerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideScrollerCharacter(ASideScrollerCharacter&&); \
	NO_API ASideScrollerCharacter(const ASideScrollerCharacter&); \
public:


#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideScrollerCharacter(ASideScrollerCharacter&&); \
	NO_API ASideScrollerCharacter(const ASideScrollerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASideScrollerCharacter)


#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ASideScrollerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASideScrollerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ASideScrollerCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ASideScrollerCharacter, IdleAnimation); }


#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_19_PROLOG
#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_SPARSE_DATA \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_INCLASS \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_SPARSE_DATA \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SideScrollerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ASideScrollerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_SideScrollerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

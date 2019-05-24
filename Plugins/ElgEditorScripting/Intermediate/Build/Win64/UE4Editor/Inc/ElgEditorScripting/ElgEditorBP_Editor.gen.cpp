// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_Editor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_Editor() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Editor_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Editor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress();
// End Cross Module References
	void UElgEditorBP_Editor::StaticRegisterNativesUElgEditorBP_Editor()
	{
		UClass* Class = UElgEditorBP_Editor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSlowTask", &UElgEditorBP_Editor::execBeginSlowTask },
			{ "EndSlowTask", &UElgEditorBP_Editor::execEndSlowTask },
			{ "IsProcessRunning", &UElgEditorBP_Editor::execIsProcessRunning },
			{ "IsProcessRunningBranch", &UElgEditorBP_Editor::execIsProcessRunningBranch },
			{ "ReceivedUserCancel", &UElgEditorBP_Editor::execReceivedUserCancel },
			{ "ReceivedUserCancelBranch", &UElgEditorBP_Editor::execReceivedUserCancelBranch },
			{ "RestartEditor", &UElgEditorBP_Editor::execRestartEditor },
			{ "StatusUpdate", &UElgEditorBP_Editor::execStatusUpdate },
			{ "SwitchProject", &UElgEditorBP_Editor::execSwitchProject },
			{ "UpdateProgress", &UElgEditorBP_Editor::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics
	{
		struct ElgEditorBP_Editor_eventBeginSlowTask_Parms
		{
			FText Task;
			bool ShowProgressDialog;
			bool bShowCancelButton;
		};
		static void NewProp_bShowCancelButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCancelButton;
		static void NewProp_ShowProgressDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowProgressDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventBeginSlowTask_Parms*)Obj)->bShowCancelButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton = { "bShowCancelButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventBeginSlowTask_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventBeginSlowTask_Parms*)Obj)->ShowProgressDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog = { "ShowProgressDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventBeginSlowTask_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventBeginSlowTask_Parms, Task), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "CPP_Default_bShowCancelButton", "false" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Begin a SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "BeginSlowTask", sizeof(ElgEditorBP_Editor_eventBeginSlowTask_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "End a SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "EndSlowTask", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics
	{
		struct ElgEditorBP_Editor_eventIsProcessRunning_Parms
		{
			int32 ProcessId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventIsProcessRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventIsProcessRunning_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventIsProcessRunning_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ProcessId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the the Process is running or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "IsProcessRunning", sizeof(ElgEditorBP_Editor_eventIsProcessRunning_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics
	{
		struct ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms
		{
			int32 ProcessId;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_ProcessId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the the Process is running or not branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "IsProcessRunningBranch", sizeof(ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics
	{
		struct ElgEditorBP_Editor_eventReceivedUserCancel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventReceivedUserCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventReceivedUserCancel_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the SlowTask has been cancel by the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "ReceivedUserCancel", sizeof(ElgEditorBP_Editor_eventReceivedUserCancel_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics
	{
		struct ElgEditorBP_Editor_eventReceivedUserCancelBranch_Parms
		{
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventReceivedUserCancelBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the SlowTask has been cancel by the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "ReceivedUserCancelBranch", sizeof(ElgEditorBP_Editor_eventReceivedUserCancelBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics
	{
		struct ElgEditorBP_Editor_eventRestartEditor_Parms
		{
			bool bShowWarning;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWarning_MetaData[];
#endif
		static void NewProp_bShowWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventRestartEditor_Parms*)Obj)->bShowWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning = { "bShowWarning", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventRestartEditor_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Restart the current project and the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "RestartEditor", sizeof(ElgEditorBP_Editor_eventRestartEditor_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics
	{
		struct ElgEditorBP_Editor_eventStatusUpdate_Parms
		{
			int32 Numerator;
			int32 Denominator;
			FText StatusText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_StatusText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Denominator;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Numerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventStatusUpdate_Parms, StatusText), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Denominator = { "Denominator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventStatusUpdate_Parms, Denominator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventStatusUpdate_Parms, Numerator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Denominator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Numerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Update the status of the SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "StatusUpdate", sizeof(ElgEditorBP_Editor_eventStatusUpdate_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics
	{
		struct ElgEditorBP_Editor_eventSwitchProject_Parms
		{
			FString GameOrProjectFileName;
			bool bShowWarning;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWarning_MetaData[];
#endif
		static void NewProp_bShowWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWarning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOrProjectFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameOrProjectFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventSwitchProject_Parms*)Obj)->bShowWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning = { "bShowWarning", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventSwitchProject_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName = { "GameOrProjectFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventSwitchProject_Parms, GameOrProjectFileName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Switch project to GameOrProjectFileName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "SwitchProject", sizeof(ElgEditorBP_Editor_eventSwitchProject_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics
	{
		struct ElgEditorBP_Editor_eventUpdateProgress_Parms
		{
			int32 Numerator;
			int32 Denominator;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Denominator;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Numerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Denominator = { "Denominator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventUpdateProgress_Parms, Denominator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventUpdateProgress_Parms, Numerator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Denominator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Numerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Update the status of the SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "UpdateProgress", sizeof(ElgEditorBP_Editor_eventUpdateProgress_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_Editor_NoRegister()
	{
		return UElgEditorBP_Editor::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_Editor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_Editor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_Editor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask, "BeginSlowTask" }, // 490736945
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask, "EndSlowTask" }, // 3471258511
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning, "IsProcessRunning" }, // 2871010210
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch, "IsProcessRunningBranch" }, // 2957765338
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel, "ReceivedUserCancel" }, // 2345210772
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch, "ReceivedUserCancelBranch" }, // 2547260517
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor, "RestartEditor" }, // 3727720496
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate, "StatusUpdate" }, // 760230378
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject, "SwitchProject" }, // 4048771571
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress, "UpdateProgress" }, // 3565290713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_Editor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/ElgEditorBP_Editor.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_Editor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_Editor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_Editor_Statics::ClassParams = {
		&UElgEditorBP_Editor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_Editor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_Editor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_Editor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_Editor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_Editor, 1188314433);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_Editor>()
	{
		return UElgEditorBP_Editor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_Editor(Z_Construct_UClass_UElgEditorBP_Editor, &UElgEditorBP_Editor::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_Editor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_Editor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
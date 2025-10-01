// Copyright Epic Games, Inc. All Rights Reserved.

#include "global_time.h"

#define LOCTEXT_NAMESPACE "Fglobal_timeModule"

void Fglobal_timeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Fglobal_timeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fglobal_timeModule, global_time)
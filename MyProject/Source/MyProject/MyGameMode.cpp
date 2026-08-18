// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGameMode.h"
#include "MyPawn.h"

AMyGameMode::AMyGameMode()
{
	DefaultPawnClass = AMyPawn::StaticClass();
}

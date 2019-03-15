// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RJ2019GameMode.h"
#include "RJ2019HUD.h"
#include "RJ2019Character.h"
#include "UObject/ConstructorHelpers.h"

ARJ2019GameMode::ARJ2019GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARJ2019HUD::StaticClass();
}

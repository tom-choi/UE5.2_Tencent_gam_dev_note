// Copyright Epic Games, Inc. All Rights Reserved.

#include "David_Nixon_LearnGameMode.h"
#include "David_Nixon_LearnCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADavid_Nixon_LearnGameMode::ADavid_Nixon_LearnGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

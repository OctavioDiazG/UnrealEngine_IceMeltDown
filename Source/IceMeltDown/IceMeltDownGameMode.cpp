// Copyright Epic Games, Inc. All Rights Reserved.

#include "IceMeltDownGameMode.h"
#include "IceMeltDownCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIceMeltDownGameMode::AIceMeltDownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

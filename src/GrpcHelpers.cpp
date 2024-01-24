/**
 * Copyright 2023-2024 Theai, Inc. dba Inworld AI
 *
 * Use of this source code is governed by the Inworld.ai Software Development Kit License Agreement
 * that can be found in the LICENSE.md file or at https://www.inworld.ai/sdk-license
 */

#include "GrpcHelpers.h"

Inworld::GrpcHelper::CharacterInfo Inworld::GrpcHelper::CreateCharacterInfo(const InworldV1alpha::Character& GrpcCharacter)
{
	Inworld::GrpcHelper::CharacterInfo Info(GrpcCharacter);
	return Info;
}

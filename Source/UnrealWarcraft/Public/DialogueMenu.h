// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DialogueItem.h"
#include "DialogueMenu.generated.h"

/**
 * 
 */
UCLASS()
class UNREALWARCRAFT_API UDialogueMenu : public UObject
{
	GENERATED_BODY()
public:
	//accessor functions
	//get specific item, set items and audio

protected:
	//an array of the available Dialogue Items
	TArray<UDialogueItem*> DialogueItems;

	//Sound Cue that the NPC speaks when entering the menu
	USoundCue* NPCAudio;
};

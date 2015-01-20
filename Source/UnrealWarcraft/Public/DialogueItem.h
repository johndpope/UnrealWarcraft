// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DialogueItem.generated.h"

/**
 * 
 */
UCLASS()
class UNREALWARCRAFT_API UDialogueItem : public UObject
{
	GENERATED_BODY()
public:
	//accessor functions

protected:
	//name of the dialogue item
	FString* ItemName;
	//Text that the user sees (the response of the player)
	FText* ItemText;
	//optional audio that the player speaks
	USoundCue* PlayerAudio;

	//Zero-based position in the UI.
	int32 UIPosition;
	//The menu this item points to and where it will take the user if selected.
	int32 TargetMenu;
};

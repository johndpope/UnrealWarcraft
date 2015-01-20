// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DialogueMenu.h"
#include "DialogueTree.generated.h"

/**
 * 
 */
UCLASS()
class UNREALWARCRAFT_API UDialogueTree : public UObject
{
	GENERATED_BODY()
public:
	//accessor functions
	//get specific menu, set menus

protected:
	//An array of the available dialogue menus (or 'pages')
	TArray<UDialogueMenu*> DialogueMenus;
};

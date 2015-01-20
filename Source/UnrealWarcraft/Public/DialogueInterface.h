// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/Actor.h"
#include "DialogueDataTable.h"
#include "DialogueTree.h"
#include "DialogueMenu.h"
#include "DialogueItem.h"
#include "DialogueInterface.generated.h"

/**
 * 
 */



UINTERFACE()
class UNREALWARCRAFT_API UDialogueInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IDialogueInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	//accessor functions for DialogueTree + content
	UFUNCTION(Category = "Dialogue")
		virtual void BeginConversation(AActor* TargetActor);

	//These events can and are intended(for the moment) to be implemented in C++. To implement them in Blueprint, create a C++ BlueprintImplementableEvent
	//in the inheriting class and call this event via interface casting. If functionality is overridden, ::super should be called (UMG stuff and changing 
	//pages, stuff like that)

	//event raised when a conversation is started. Passes the actor that initiated the conversation and the associated asset.	
	UFUNCTION(Category = "Dialogue Events")
		virtual void OnConversationStarted(AActor* TargetActor, UDialogueTree* ConversationTree);

	//event raised when a dialogue item in the tree is clicked. Passes the item which was clicked.
	UFUNCTION(Category = "Dialogue Events")
		virtual void OnDialogueItemClicked(UDialogueItem* Item);

	//event raised when a conversation ends.
	UFUNCTION(Category = "Dialogue Events")
		virtual void OnConversationEnded();


protected:
	//internal variables
	//the tree that contains the rest of the data
	UDialogueTree* ConversationTree;

	//the data table associated with this interface. This is where we'll get dynamic data and fill the Tree.
	FDialogueData* DataTable;

};
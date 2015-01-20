

#pragma once
#include "Engine/DataTable.h"
#include "DialogueDataTable.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FDialogueData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FDialogueData()
		: ParentID(0)
		, DialogueText("NONE")
		, DialogueAudio(0)
		, Responses("NONE")
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DialogueData)
		int32 ParentID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DialogueData)
		FString DialogueText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AssetRegistrySearchable, Category = DialogueData)
		TAssetPtr<USoundCue> DialogueAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DialogueData)
		FString Responses;

};

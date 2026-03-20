#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerMovements.generated.h"

UCLASS()
class MYPROJECT2_2_API APlayerMovements : public AActor
{
	GENERATED_BODY()
	
public:	
	APlayerMovements();
	

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement", meta=(AllowPrivateAccess="true"))
	float speed{5.0f};
};

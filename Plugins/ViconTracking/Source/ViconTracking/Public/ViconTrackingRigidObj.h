
#pragma once

#include "GameFramework/Actor.h"
#include "IObjectTracking.h"
#include "ViconTrackingRigidObj.generated.h"

/**
 * 
 */
UCLASS()
class AViconTrackingRigidObj : public AActor
{
	GENERATED_BODY()
public:
    AViconTrackingRigidObj();
    ~AViconTrackingRigidObj();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tracker)
		FString SegmentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tracker)
		FString SubjectName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Tracker)
		FVector SubjectPos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Tracker)
		FRotator SubjectOri;

	UFUNCTION(BlueprintCallable, Category = Tracker)
		FVector GetSubjectPosition();

	UFUNCTION(BlueprintCallable, Category = Tracker)
		FQuat GetSubjectOrientation();

	UFUNCTION(BlueprintCallable, Category = Tracker)
		static bool Connect(FString ServerName);

	UFUNCTION(BlueprintCallable, Category = Tracker)
		static void Disconnect();

	virtual void Tick(float DeltaSeconds) override;

private:
    static Tracking::IObjectTracking* m_pViconTracker;
    Tracking::Pos m_ObjPos;
    Tracking::Ori m_ObjOri;
};

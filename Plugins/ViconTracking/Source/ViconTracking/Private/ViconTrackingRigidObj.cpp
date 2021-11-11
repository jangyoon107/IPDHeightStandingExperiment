
#include "ViconTrackingPrivatePCH.h"
#include "ViconTrackingRigidObj.h"

Tracking::IObjectTracking* AViconTrackingRigidObj::m_pViconTracker = nullptr;

AViconTrackingRigidObj::AViconTrackingRigidObj()
{
	PrimaryActorTick.bCanEverTick = true;
    if( !m_pViconTracker )
        m_pViconTracker = Tracking::ObjectTrackingFactory::create();
}

AViconTrackingRigidObj::~AViconTrackingRigidObj()
{

}

bool AViconTrackingRigidObj::Connect( FString ServerName )
{
    if ( m_pViconTracker )
    {
        m_pViconTracker->Initialize( TCHAR_TO_ANSI( *ServerName ) );
        return m_pViconTracker->ConnectServer();
    }
    return false;
}

void AViconTrackingRigidObj::Disconnect()
{
    if ( m_pViconTracker )
    {
        m_pViconTracker->Disconnect();
    }
}

FVector AViconTrackingRigidObj::GetSubjectPosition()
{
    if ( m_pViconTracker ) m_pViconTracker->GetPosition( TCHAR_TO_ANSI( *SubjectName ),
                                                         TCHAR_TO_ANSI( *SegmentName ),
                                                         m_ObjPos );

    //Since Vicon uses Right-Handed system, and Unreal uses Left-Handed system
    //Here we convert RHS to LHS by doing the following
    // also convert from meters (vicon) to centimeters (unreal)
    return FVector( m_ObjPos.X * 100, -m_ObjPos.Y * 100, m_ObjPos.Z * 100 );
}

FQuat AViconTrackingRigidObj::GetSubjectOrientation()
{
    if ( m_pViconTracker ) m_pViconTracker->GetOrientation( TCHAR_TO_ANSI( *SubjectName ),
                                                            TCHAR_TO_ANSI( *SegmentName ),
                                                            m_ObjOri );
    //Since Vicon uses Right-Handed system, and Unreal uses Left-Handed system
    //Here we convert RHS to LHS by doing the following
    return FQuat( -m_ObjOri.X, m_ObjOri.Y, -m_ObjOri.Z, m_ObjOri.W );
}

void AViconTrackingRigidObj::Tick( float DeltaSeconds )
{
    Super::Tick( DeltaSeconds );
    if ( m_pViconTracker )
    {
        m_pViconTracker->Update();
        SubjectPos = GetSubjectPosition();
        SubjectOri = GetSubjectOrientation().Rotator();
    }
    return;
}



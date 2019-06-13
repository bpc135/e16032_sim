/*
attempt to add track information - snl
*/

#include "e16032_simTrackInformation.hh"
#include "G4ios.hh"

G4Allocator<e16032_simTrackInformation> aTrackInformationAllocator;

e16032_simTrackInformation::e16032_simTrackInformation()
{
  //  G4cout<<"e16032_simTrackInformation"<<G4endl;
    originalTrackID = 0;
    particleDefinition = 0;
    originalPosition = G4ThreeVector(0.,0.,0.);
    originalMomentum = G4ThreeVector(0.,0.,0.);
    originalEnergy = 0.;
    originalTime = 0.;
}

e16032_simTrackInformation::e16032_simTrackInformation(const G4Track* aTrack)
{
  // G4cout<<"e16032_simTrackInformation2"<<G4endl;
    originalTrackID = aTrack->GetTrackID();
    particleDefinition = aTrack->GetDefinition();
    originalPosition = aTrack->GetPosition();
    originalMomentum = aTrack->GetMomentum();
    originalEnergy = aTrack->GetTotalEnergy();
    originalTime = aTrack->GetGlobalTime();
}

e16032_simTrackInformation::e16032_simTrackInformation(const e16032_simTrackInformation* aTrackInfo)
{
  //G4cout<<"e16032_simTrackInformation3"<<G4endl;
    originalTrackID = aTrackInfo->originalTrackID;
    particleDefinition = aTrackInfo->particleDefinition;
    originalPosition = aTrackInfo->originalPosition;
    originalMomentum = aTrackInfo->originalMomentum;
    originalEnergy = aTrackInfo->originalEnergy;
    originalTime = aTrackInfo->originalTime;
}

e16032_simTrackInformation::~e16032_simTrackInformation(){;
  // G4cout<<"~e16032_simTrackInformation"<<G4endl;
}

void e16032_simTrackInformation::Print() const
{
    G4cout 
     << "Original track ID " << originalTrackID 
     << " at " << originalPosition << G4endl;
}

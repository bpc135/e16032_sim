#include "e16032_simTrackingAction.hh"
#include "G4TrackingManager.hh"
#include "G4Track.hh"
#include "G4TrackVector.hh"
#include "e16032_simTrackInformation.hh"

// e16032_simTrackingAction::e16032_simTrackingAction()
// {;}

// e16032_simTrackingAction::~e16032_simTrackingAction()
// {;}

void e16032_simTrackingAction::PreUserTrackingAction(const G4Track* aTrack)
{
  //  G4cout << "inside pre tracking action " << G4endl;

  if(aTrack->GetParentID()==1 && aTrack->GetUserInformation()==0)
  {
    //identify the products of the beta decay: recoil, electron, and neutrino
    //and assign them track information objects
    e16032_simTrackInformation* anInfo = new e16032_simTrackInformation(aTrack);
    G4Track* theTrack = (G4Track*)aTrack;
    theTrack->SetUserInformation(anInfo);
  }
  else{
    //assign new track information objects to gamma rays emitted from recoil in excited
    //state to separately track there energy deposition


  }
}

void e16032_simTrackingAction::PostUserTrackingAction(const G4Track* aTrack)
{
  //  G4cout << "inside post tracking action " << G4endl;
  G4TrackVector* secondaries = fpTrackingManager->GimmeSecondaries();
  //G4cout << "number of secondaries " << secondaries << G4endl;
  if(secondaries)
  {
    // G4cout << "post tracking action 2" << G4endl;

    e16032_simTrackInformation* info = (e16032_simTrackInformation*)(aTrack->GetUserInformation());
    size_t nSeco = secondaries->size();
    //  G4cout << "post tracking action 3 " << nSeco << G4endl;
    if(nSeco>0 && aTrack->GetParentID()!=0)
    {
      for(size_t i=0;i<nSeco;i++)
      { 
	//	G4cout << "post tracking action 4" << i << G4endl;

	// e16032_simTrackInformation* infoNew = new e16032_simTrackInformation(info);
	// (*secondaries)[i]->SetUserInformation(infoNew);
      }
    }
  }
  // G4cout << "leaving post tracking action " << G4endl;

}

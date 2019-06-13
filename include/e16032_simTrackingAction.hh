#ifndef e16032_simTrackingAction_h
#define e16032_simTrackingAction_h 1

#include "G4UserTrackingAction.hh"


class e16032_simTrackingAction : public G4UserTrackingAction {

  public:
    e16032_simTrackingAction(){};
    virtual ~e16032_simTrackingAction(){};
   
    virtual void PreUserTrackingAction(const G4Track*);
    virtual void PostUserTrackingAction(const G4Track*);

};

#endif

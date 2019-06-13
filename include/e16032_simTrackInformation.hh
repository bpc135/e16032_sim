/*
attemp to add trakcing information to individual tracks - snl

*/


#ifndef e16032_simTrackInformation_h
#define e16032_simTrackInformation_h 1

#include "globals.hh"
#include "G4ThreeVector.hh"
#include "G4ParticleDefinition.hh"
#include "G4Track.hh"
#include "G4Allocator.hh"
#include "G4VUserTrackInformation.hh"

class e16032_simTrackInformation : public G4VUserTrackInformation 
{
  public:
    e16032_simTrackInformation();
    e16032_simTrackInformation(const G4Track* aTrack);
    e16032_simTrackInformation(const e16032_simTrackInformation* aTrackInfo);
    virtual ~e16032_simTrackInformation();
   
    inline void *operator new(size_t);
    inline void operator delete(void *aTrackInfo);
    inline int operator ==(const e16032_simTrackInformation& right) const
    {return (this==&right);}

    void Print() const;

  private:
    G4int                 originalTrackID;
    G4ParticleDefinition* particleDefinition;
    G4ThreeVector         originalPosition;
    G4ThreeVector         originalMomentum;
    G4double              originalEnergy;
    G4double              originalTime;

  public:
    inline G4int GetOriginalTrackID() const {return originalTrackID;}
    inline G4ParticleDefinition* GetOriginalParticle() const {return particleDefinition;}
    inline G4ThreeVector GetOriginalPosition() const {return originalPosition;}
    inline G4ThreeVector GetOriginalMomentum() const {return originalMomentum;}
    inline G4double GetOriginalEnergy() const {return originalEnergy;}
    inline G4double GetOriginalTime() const {return originalTime;}
};

extern G4Allocator<e16032_simTrackInformation> aTrackInformationAllocator;

inline void* e16032_simTrackInformation::operator new(size_t)
{ void* aTrackInfo;
  aTrackInfo = (void*)aTrackInformationAllocator.MallocSingle();
  return aTrackInfo;
}

inline void e16032_simTrackInformation::operator delete(void *aTrackInfo)
{ aTrackInformationAllocator.FreeSingle((e16032_simTrackInformation*)aTrackInfo);}

#endif

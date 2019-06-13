//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
#ifndef e16032_simDetectorROGeometry_h
#define e16032_simDetectorROGeometry_h 1

#include "G4VReadOutGeometry.hh"

class e16032_simDetectorROGeometry : public G4VReadOutGeometry
{
public:
  e16032_simDetectorROGeometry();
  e16032_simDetectorROGeometry(G4String);
  ~e16032_simDetectorROGeometry();

private:
  G4VPhysicalVolume* Build();

  //#include "e16032_simDetectorParameterDef.hh"

};

#endif

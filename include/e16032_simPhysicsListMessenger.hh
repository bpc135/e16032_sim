//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef e16032_simPhysicsListMessenger_h
#define e16032_simPhysicsListMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class e16032_simPhysicsList;
class G4UIdirectory;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithAString;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class e16032_simPhysicsListMessenger: public G4UImessenger
{
public:
  
  e16032_simPhysicsListMessenger(e16032_simPhysicsList* );
  ~e16032_simPhysicsListMessenger();
    
  void SetNewValue(G4UIcommand*, G4String);
    
private:
  
  e16032_simPhysicsList* pPhysicsList;

  G4UIdirectory*             physDir;  
  G4UIcmdWithADoubleAndUnit* gammaCutCmd;
  G4UIcmdWithADoubleAndUnit* electCutCmd;
  G4UIcmdWithADoubleAndUnit* protoCutCmd;    
  G4UIcmdWithADoubleAndUnit* allCutCmd;    
  G4UIcmdWithADoubleAndUnit* mCutCmd;
  G4UIcmdWithADoubleAndUnit* eCutCmd;
  G4UIcmdWithAString*        pListCmd;
    
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif


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
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

#ifndef e16032_simPhysListHadron_h
#define e16032_simPhysListHadron_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"

#include "G4HadronElasticProcess.hh"

#include "G4ProtonInelasticProcess.hh"
#include "G4NeutronInelasticProcess.hh"
#include "G4DeuteronInelasticProcess.hh"
#include "G4TritonInelasticProcess.hh"
#include "G4AlphaInelasticProcess.hh"
#include "G4IonInelasticProcess.hh"
#include "G4HadronFissionProcess.hh"
#include "G4HadronCaptureProcess.hh"


class e16032_simPhysListHadron : public G4VPhysicsConstructor 
{
  public:
    e16032_simPhysListHadron(const G4String& name = "hadron");
    virtual ~e16032_simPhysListHadron();

  public:
  // Construct particle and physics
    void ConstructParticle() {};
  //
    void ConstructProcess(); 

  private:

  G4HadronElasticProcess  theElasticProcess;
  G4ProtonInelasticProcess theProtonInelastic;
  G4NeutronInelasticProcess  theNeutronInelastic;
  G4HadronElasticProcess* theNeutronElasticProcess;
  G4HadronFissionProcess* theFissionProcess;
  G4HadronCaptureProcess* theCaptureProcess;
  G4DeuteronInelasticProcess* theDeuteronInelasticProcess;
  G4TritonInelasticProcess* theTritonInelasticProcess;
  G4AlphaInelasticProcess* theAlphaInelasticProcess;
  G4IonInelasticProcess* theIonInelasticProcess;
};

#endif




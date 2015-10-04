#ifndef BACONANA_DATAFORMATS_TCALOJET_HH
#define BACONANA_DATAFORMATS_TCALOJET_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TCaloJet : public TObject
  {
    public:
      TCaloJet():
      pt(0), eta(0), phi(0), mass(0), ptRaw(0),unc(0),
      area(0), 
      neuEmEBFrac (0),neuEmEEFrac (0), neuEmHFFrac(0),
      neuHadHBFrac(0),neuHadHEFrac(0),neuHadHFFrac(0),
      genpt(0), geneta(0), genphi(0), genm(0),
      partonFlavor(0), hadronFlavor(0),
      nParticles(0),
      hltMatchBits(0)
      {}
      ~TCaloJet(){}
    
      float          pt, eta, phi, mass, ptRaw, unc;                          // kinematics
      float          area;                                                    // jet area (from FastJet)
      float          neuEmEBFrac,  neuEmEEFrac,  neuEmHFFrac;                 // Neutral EM component
      float          neuHadHBFrac, neuHadHEFrac, neuHadHFFrac;                // Neutral Had component
      float          genpt, geneta, genphi, genm;                             // Matched GenJet
      int            partonFlavor, hadronFlavor;                              // Flavor
      unsigned int   nParticles;                                              // constituent multiplicity
      TriggerObjects hltMatchBits;                                            // HLT matching
          
    ClassDef(TCaloJet,1)
  };
}
#endif

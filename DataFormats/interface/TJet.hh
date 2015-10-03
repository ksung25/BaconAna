#ifndef BACONANA_DATAFORMATS_TJET_HH
#define BACONANA_DATAFORMATS_TJET_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TJet : public TObject
  {
    public:
      TJet():
      pt(0), eta(0), phi(0), mass(0), ptRaw(0), unc(0),
      area(0), d0(-999),dz(-999),
      csv(-2), qgid(-2), q(0),
      mva(-2), beta(0), betaStar(0), dR2Mean(0), ptD(0), minW(0),
      pullY(0), pullPhi(0), chPullY(0), chPullPhi(0), neuPullY(0), neuPullPhi(0),
      chEmFrac(0), neuEmFrac(0), chHadFrac(0), neuHadFrac(0),
      genpt(0),geneta(0),genphi(0),genm(0),
      mcFlavor(0), mcFlavorPhys(0),
      nCharged(0), nNeutrals(0), nParticles(0),
      hltMatchBits(0)
      {}
      ~TJet(){}
    
      float          pt, eta, phi, mass, ptRaw, unc;              // kinematics
      float          area;                                        // jet area (from FastJet)
      float          d0, dz;                                      // impact parameter of leading charged constituent
      float          csv;                                         // CSV b-tagger
      float          qgid;                                        // q/g discriminator
      float          q;                                           // jet charge
      float          mva;                                         // Pile-up discriminator MVA
      float          beta, betaStar, dR2Mean, ptD, minW;          // PU Jet Id Variables
      float          pullY, pullPhi;                              // jet pull
      float          chPullY, chPullPhi, neuPullY, neuPullPhi;
      float          chEmFrac, neuEmFrac, chHadFrac, neuHadFrac;  // fractional contribution by type
      float          genpt, geneta, genphi, genm;                 // Matched GenJet
      int            mcFlavor,mcFlavorPhys;                       // Flavor
      unsigned int   nCharged, nNeutrals, nParticles;             // constituent multiplicity
      TriggerObjects hltMatchBits;                                // HLT matching
          
    ClassDef(TJet,3)
  };
}
#endif

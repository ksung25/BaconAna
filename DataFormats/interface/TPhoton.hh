#ifndef BACONANA_DATAFORMATS_TPHOTON_HH
#define BACONANA_DATAFORMATS_TPHOTON_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TPhoton : public TObject
  {
    public:
      TPhoton():
      pt(0), eta(0), phi(0),
      scEt(0), scEta(0), scPhi(0),
      calibPt(0), calibE(0),
      trkIso(-1), ecalIso(-1), hcalIso(-1),
      chHadIso(-1), gammaIso(-1), neuHadIso(-1),
//      chHadIsoSelVtx, chHadIso03WstVtx;
      mva(0),
      hovere(0), sthovere(0), sieie(0), sipip(0), r9(0),
      fiducialBits(0),
      typeBits(0),
      scID(-1),
      hasPixelSeed(false), passElectronVeto(true), isConv(false),
      hltMatchBits(0)
      {}
      ~TPhoton(){}
    
      float          pt, eta, phi;                         // kinematics
      float          scEt, scEta, scPhi;                   // SuperCluster kinematics
      float          calibPt, calibE;                // calibrated kinematics
      float          trkIso, ecalIso, hcalIso;             // detector isolation
      float          chHadIso, gammaIso, neuHadIso;        // PF isolation variables
//      float          chHadIsoSelVtx,chHadIso03WstVtx;      // Isolation from the PV vs worst vertex Iso
      float          mva;                                  // Photon MVA ID
      float          hovere;                               // H/E
      float          sthovere;                             // Single tower H/E (https://twiki.cern.ch/twiki/bin/viewauth/CMS/HoverE2012)
      float          sieie, sipip, r9;                     // shower shape
      unsigned int   fiducialBits;                         // ECAL fiducial region
      unsigned int   typeBits;                             // photon type
      int            scID;                                 // supercluster ID (unique per event)
      bool           hasPixelSeed;                         // has pixel seed?
      bool           passElectronVeto;                     // if false, its not a photon
      bool           isConv;                               
      TriggerObjects hltMatchBits;                         // HLT matches
          
    ClassDef(TPhoton,3)
  };

  enum EPhotonType
  {
    kEGamma   = 1,
    kPFPhoton = 2
  };
}
#endif

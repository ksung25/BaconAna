#ifndef BACONANA_DATAFORMATS_TELECTRON_HH
#define BACONANA_DATAFORMATS_TELECTRON_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TElectron : public TObject
  {
    public:
      TElectron():
      pt(0), eta(0), phi(0),
      scEt(0), scEta(0), scPhi(0), ecalEnergy(0),
      pfPt(0), pfEta(0), pfPhi(0),
      trkIso(-1), ecalIso(-1), hcalIso(-1), hcalDepth1Iso(-1),
      chHadIso(-1), gammaIso(-1), neuHadIso(-1), puIso(-1),
      ecalPFClusIso(-1), hcalPFClusIso(-1),
      puppiChHadIso(-1), puppiGammaIso(-1), puppiNeuHadIso(-1), 
      puppiChHadIsoNoLep(-1), puppiGammaIsoNoLep(-1), puppiNeuHadIsoNoLep(-1), 
      d0(-999.), dz(-999.), sip3d(-999.),
      sieie(0), e1x5(0), e2x5(0), e5x5(0), r9(0),
      eoverp(0), hovere(0), fbrem(0),
      dEtaInSeed(0), dEtaIn(0), dPhiIn(0),
      mva(-999.),
      mvaIso(-999.),
      regscale(0.),regsmear(0.),
      q(0),
      isConv(false), nMissingHits(0),
      typeBits(0), fiducialBits(0), classification(-999.),
      scID(-1), trkID(-1),
      hltMatchBits(0)
      {}
      ~TElectron(){}
    
      float          pt, eta, phi;                             // kinematics
      float          scEt, scEta, scPhi;                       // supercluster kinematics
      float          ecalEnergy;                               // ECAL energy
      float          pfPt, pfEta, pfPhi;                       // matching PF-candidate kinematics
      float          trkIso, ecalIso, hcalIso, hcalDepth1Iso;  // detector isolation
      float          chHadIso, gammaIso, neuHadIso, puIso;     // PF isolation variables
      float          ecalPFClusIso, hcalPFClusIso;             // PF cluster isolation variables
      float          puppiChHadIso,      puppiGammaIso,      puppiNeuHadIso;  // Puppi Isolation R=0.4
      float          puppiChHadIsoNoLep, puppiGammaIsoNoLep, puppiNeuHadIsoNoLep; // Puppi Isolation R=0.4 no lep
      float          d0, dz, sip3d;                            // impact parameter
      float          sieie, e1x5, e2x5, e5x5, r9;              // shower shape
      float          eoverp;                                   // E/p
      float          hovere;                                   // H/E
      float          fbrem;                                    // brem fraction
      float          dEtaInSeed, dEtaIn, dPhiIn;               // track-supercluster matching
      float          mva;                                      // electron ID MVA value
      float          mvaCat;                                   // electron ID MVA category
      float          mvaIso;                                   // electron ID Iso MVA value
      float          mvaIsoCat;                                // electron ID Iso MVA category
      float          regscale,regsmear;                        //Regression scale and smear corrections
      int            q;                                        // charge
      bool           isConv;                                   // identified by track fit based conversion finder?
      unsigned int   nMissingHits;                             // number of missing expected inner hits 
      unsigned int   typeBits;                                 // electron type
      unsigned int   fiducialBits;                             // ECAL fiducial region bits
      unsigned int   mvaBit;                                   // Pass Ele MVA working point
      unsigned int   mvaIsoBit;                                // Pass Ele Iso MVA working point
      int            classification;                           // electron classification
      int            scID;                                     // supercluster ID number (unique per event)
      int            trkID;                                    // track ID number (unique per event)
      TriggerObjects hltMatchBits;                             // HLT matches
      
    ClassDef(TElectron,4)
  };

  enum EEleType
  {
    kEcalDriven    = 1,
    kTrackerDriven = 2
  };

  enum EEleId
  {
    kEleMVAMedBit    = 1,
    kEleMVATightBit = 2
  };
}
#endif

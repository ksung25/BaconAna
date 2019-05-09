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
      pt(0), eta(0), phi(0), calibPt(0), calibE(0), calibEcalE(0),
      calibPtErr(0),
      energyScaleStatUp(0), energyScaleStatDown(0), 
      energyScaleSystUp(0), energyScaleSystDown(0),
      energyScaleGainUp(0), energyScaleGainDown(0),
      energySigmaRhoUp(0), energySigmaRhoDown(0),
      energySigmaPhiUp(0), energySigmaPhiDown(0),
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
      //mva(-999.),
      //mvaIso(-999.),
      //mvaV2Iso(-999.), mvaV2NoIso(-999.),
      //mvaHZZ(-999.),
      mvaSpring16(-999.), mvaFall17V1Iso(-999.), mvaFall17V1NoIso(-999.),
      mvaFall17V2Iso(-999.), mvaFall17V2NoIso(-999.), mvaSpring16HZZ(-999.),
      regscale(0.),regsmear(0.),
      q(0),
      isConv(false), nMissingHits(0),
      typeBits(0), fiducialBits(0), classification(-999.),
      scID(-1), trkID(-1),
      hltMatchBits(0)
      {}
      ~TElectron(){}
    
      float          pt, eta, phi, calibPt, calibE, calibEcalE;// kinematics
      float          calibPtErr;                               // error on pt post scale/smearing
      float          energyScaleStatUp, energyScaleStatDown;   // uncertainties on kinematics with scale/smearing
      float          energyScaleSystUp, energyScaleSystDown;
      float          energyScaleGainUp, energyScaleGainDown;
      float          energySigmaRhoUp, energySigmaRhoDown;
      float          energySigmaPhiUp, energySigmaPhiDown;
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
      //float          mva;                                      // electron ID MVA value
      //float          mvaCat;                                   // electron ID MVA category
      //float          mvaIso;                                   // electron ID Iso MVA value
      //float          mvaIsoCat;                                // electron ID Iso MVA category
      //float          mvaV2Iso, mvaV2NoIso;                     // electron V2 MVA IDs
      //float          mvaV2IsoCat, mvaV2NoIsoCat;               // electron V2 MVA ID category
      //float          mvaHZZ;                                   // electron HZZ MVA ID
      //float          mvaHZZCat;                                // electron HZZ MVA ID category
      float          mvaSpring16;
      float          mvaFall17V1Iso;
      float          mvaFall17V1NoIso;
      float          mvaFall17V2Iso;
      float          mvaFall17V2NoIso;
      float          mvaSpring16HZZ;
      float          mvaSpring16Cat;
      float          mvaFall17V1IsoCat;
      float          mvaFall17V1NoIsoCat;
      float          mvaFall17V2IsoCat;
      float          mvaFall17V2NoIsoCat;
      float          mvaSpring16HZZCat;
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
      
    ClassDef(TElectron,7)
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

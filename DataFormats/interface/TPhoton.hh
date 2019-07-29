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
      calibPt(0), calibE(0), eRes(-1), ecalEnergyErrPostCorr(0),
      energyScaleStatUp(0), energyScaleStatDown(0), 
      energyScaleSystUp(0), energyScaleSystDown(0),
      energyScaleGainUp(0), energyScaleGainDown(0),
      energySigmaRhoUp(0), energySigmaRhoDown(0),
      energySigmaPhiUp(0), energySigmaPhiDown(0),
      trkIso(-1), ecalIso(-1), hcalIso(-1),
      chHadIso(-1), gammaIso(-1), neuHadIso(-1),
//      chHadIsoSelVtx, chHadIso03WstVtx;
      mvaSpring16(-999.), mvaFall17V1(-999.), mvaFall17V2(-999.),
      mvaSpring16Cat(-999.), mvaFall17V1Cat(-999.), mvaFall17V2Cat(-999),
      hovere(0), sthovere(0), sieie(0), sipip(0), r9(0), r9_full5x5(0),
      fiducialBits(0),
      typeBits(0),
      scID(-1),
      hasPixelSeed(false), passElectronVeto(true), isConv(false),
      hltMatchBits(0)
      {}
      ~TPhoton(){}
    
      float          pt, eta, phi;                         // kinematics
      float          scEt, scEta, scPhi;                   // SuperCluster kinematics
      float          calibPt, calibE, eRes;                // calibrated kinematics
      float          ecalEnergyErrPostCorr;
      float          energyScaleStatUp, energyScaleStatDown;   // uncertainties on kinematics with scale/smearing
      float          energyScaleSystUp, energyScaleSystDown;
      float          energyScaleGainUp, energyScaleGainDown;
      float          energySigmaRhoUp, energySigmaRhoDown;
      float          energySigmaPhiUp, energySigmaPhiDown;
      float          trkIso, ecalIso, hcalIso;             // detector isolation
      float          chHadIso, gammaIso, neuHadIso;        // PF isolation variables
//      float          chHadIsoSelVtx,chHadIso03WstVtx;    // Isolation from the PV vs worst vertex Iso
      float          mvaSpring16;                          // Photon MVA ID
      float          mvaFall17V1;                          // Photon MVA ID
      float          mvaFall17V2;                          // Photon MVA V2 ID
      float          mvaSpring16Cat;                       // Photon MVA categories
      float          mvaFall17V1Cat;
      float          mvaFall17V2Cat;                       
      float          hovere;                               // H/E
      float          sthovere;                             // Single tower H/E (https://twiki.cern.ch/twiki/bin/viewauth/CMS/HoverE2012)
      float          sieie, sipip, r9, r9_full5x5;         // shower shape
      unsigned int   fiducialBits;                         // ECAL fiducial region
      unsigned int   typeBits;                             // photon type
      int            scID;                                 // supercluster ID (unique per event)
      bool           hasPixelSeed;                         // has pixel seed?
      bool           passElectronVeto;                     // if false, its not a photon
      bool           isConv;                               
      TriggerObjects hltMatchBits;                         // HLT matches
          
    ClassDef(TPhoton,5)
  };

  enum EPhotonType
  {
    kEGamma   = 1,
    kPFPhoton = 2
  };
}
#endif

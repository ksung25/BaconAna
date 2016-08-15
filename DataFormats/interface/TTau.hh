#ifndef BACONANA_DATAFORMATS_TTAU_HH
#define BACONANA_DATAFORMATS_TTAU_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TTau : public TObject
  {
  public:
    TTau():
      pt(0), eta(0), phi(0), m(0), e(0),
      q(0),
      dzLeadChHad(-999.),
      nSignalChHad(0), nSignalGamma(0),
      antiEleMVA6(0), antiEleMVA6Cat(0),
      rawMuonRejection(0),rawIso3Hits(0), 
      rawIsoMVA3oldDMwoLT(0), rawIsoMVA3oldDMwLT(0),
      rawIsoMVA3newDMwoLT(0), rawIsoMVA3newDMwLT(0),
      puppiChHadIso(-1), puppiGammaIso(-1), puppiNeuHadIso(-1), 
      puppiChHadIsoNoLep(-1), puppiGammaIsoNoLep(-1), puppiNeuHadIsoNoLep(-1), 
      hpsDisc(0),
      hltMatchBits(0)
    {}
    ~TTau(){}
    
    float          pt, eta, phi, m, e;   // kinematics
    int            q;                    // charge
    float          dzLeadChHad;          // longitudinal impact parameter of leading charged hadron
    unsigned int   nSignalChHad;         // number of charged hadrons in tau
    unsigned int   nSignalGamma;         // number of photons in tau     
    float          antiEleMVA6;          // anti-electron MVA6 for Run 2
    float          antiEleMVA6Cat;       // anti-electron MVA6 category for Run 2
    float          rawMuonRejection;     // raw MVA output of BDT based anti-muon discriminator
    float          rawIso3Hits;          // raw Iso 3 hits
    float          rawIsoMVA3oldDMwoLT;  // raw Iso MVA3, trained on prong 1 and 3, without lifetime info
    float          rawIsoMVA3oldDMwLT;   // raw Iso MVA3, trained on prong 1 and 3, with lifetime info
    float          rawIsoMVA3newDMwoLT;  // raw Iso MVA3, trained on prong 1, 2, and 3, without lifetime info
    float          rawIsoMVA3newDMwLT;   // raw Iso MVA3, trained on prong 1, 2, and 3, with lifetime info
    float          puppiChHadIso,      puppiGammaIso,      puppiNeuHadIso;  // Puppi Isolation R=0.4
    float          puppiChHadIsoNoLep, puppiGammaIsoNoLep, puppiNeuHadIsoNoLep; // Puppi Isolation R=0.4 no lep    
    unsigned long  hpsDisc;              // HPS tau discriminators
    TriggerObjects hltMatchBits;         // HLT matches

    ClassDef(TTau,2)
  };
  
  enum EHPSDiscriminator{
    // descriptions from https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuidePFTauID#Tau_ID_2014_preparation_for_Run
    kByLooseElectronRejection                  = 1UL<<0,   // electron pion MVA discriminator < 0.6 
    kByMediumElectronRejection                 = 1UL<<1,   // electron pion MVA discriminator < -0.1 and not 1.4442 < |η| < 1.566
    kByTightElectronRejection                  = 1UL<<2,   // electron pion MVA discriminator < -0.1 and not 1.4442 < |η| < 1.566 and Brem pattern cuts see AN-10-387)
    kByMVA6VLooseElectronRejection             = 1UL<<3,   // anti-electron MVA discriminator with new training
    kByMVA6LooseElectronRejection              = 1UL<<4,
    kByMVA6MediumElectronRejection             = 1UL<<5,
    kByMVA6TightElectronRejection              = 1UL<<6,
    kByMVA6VTightElectronRejection             = 1UL<<7,
    kByLooseMuonRejection                      = 1UL<<8,   // Tau Lead Track not matched to chamber hits
    kByMediumMuonRejection                     = 1UL<<9,   // Tau Lead Track not matched to global/tracker muon
    kByTightMuonRejection                      = 1UL<<10,  // Tau Lead Track not matched to global/tracker muon and energy deposit in ECAL + HCAL exceeding 0.2 times Lead Track momentum
    kByLooseMuonRejection3                     = 1UL<<11,  // Tau Lead Track not matched to more than one segment in muon system, energy deposit in ECAL + HCAL at least 0.2 times Lead Track momentum
    kByTightMuonRejection3                     = 1UL<<12,  // Tau Lead Track not matched to more than one segment or hits in the outermost two stations of the muon system, energy deposit in ECAL + HCAL at least 0.2 times Lead Track momentum
    kByMVALooseMuonRejection                   = 1UL<<13,  // BDT based anti-muon discriminator
    kByMVAMediumMuonRejection                  = 1UL<<14,
    kByMVATightMuonRejection                   = 1UL<<15,
    kByDecayModeFinding                        = 1UL<<16,  // You will always want to use this (see AN-10-82)
    kByVLooseIsolation                         = 1UL<<17,  // isolation cone of 0.3 , no PF Charged Candidates with pT > 1.5 GeV/c and no PF Gamma candidates with ET > 2.0 GeV
    kByVLooseCombinedIsolationDBSumPtCorr      = 1UL<<18,  // isolation cone of 0.3 , Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 3 GeV
    kByLooseCombinedIsolationDBSumPtCorr       = 1UL<<19,  // isolation cone of 0.5 , Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 2 GeV
    kByMediumCombinedIsolationDBSumPtCorr      = 1UL<<20,  // isolation cone of 0.5 , Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 1 GeV
    kByTightCombinedIsolationDBSumPtCorr       = 1UL<<21,  // isolation cone of 0.5 , Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 0.8 GeV
    kByLooseCombinedIsolationDBSumPtCorr3Hits  = 1UL<<22,  // same as ByLooseCombinedIsolationDBSumPtCorr but requiring 3 hits (instead of 8) on track of isolation candidates
    kByMediumCombinedIsolationDBSumPtCorr3Hits = 1UL<<23,  // same as ByMediumCombinedIsolationDBSumPtCorr but requiring 3 hits (instead of 8) on track of isolation candidates
    kByTightCombinedIsolationDBSumPtCorr3Hits  = 1UL<<24,  // same as ByTightCombinedIsolationDBSumPtCorr but requiring 3 hits (instead of 8) on track of isolation candidates
    kByVLooseIsolationMVA3oldDMwoLT            = 1UL<<25,  // BDT based tau ID discriminator based on isolation Pt sums, trained on 1-prong and 3-prong tau candidates
    kByLooseIsolationMVA3oldDMwoLT             = 1UL<<26,
    kByMediumIsolationMVA3oldDMwoLT            = 1UL<<27,
    kByTightIsolationMVA3oldDMwoLT             = 1UL<<28,
    kByVTightIsolationMVA3oldDMwoLT            = 1UL<<29,
    kByVVTightIsolationMVA3oldDMwoLT           = 1UL<<30,
    kByVLooseIsolationMVA3oldDMwLT             = 1UL<<31,  // BDT based tau ID discriminator based on isolation Pt sums plus tau lifetime information, trained on 1-prong and 3-prong tau candidates
    kByLooseIsolationMVA3oldDMwLT              = 1UL<<32,
    kByMediumIsolationMVA3oldDMwLT             = 1UL<<33,
    kByTightIsolationMVA3oldDMwLT              = 1UL<<34,
    kByVTightIsolationMVA3oldDMwLT             = 1UL<<35,
    kByVVTightIsolationMVA3oldDMwLT            = 1UL<<36,
    kByVLooseIsolationMVA3newDMwoLT            = 1UL<<37,  // BDT based tau ID discriminator based on isolation Pt sums, trained on 1-prong, "2-prong" and 3-prong tau candidates
    kByLooseIsolationMVA3newDMwoLT             = 1UL<<38,
    kByMediumIsolationMVA3newDMwoLT            = 1UL<<39,
    kByTightIsolationMVA3newDMwoLT             = 1UL<<40,
    kByVTightIsolationMVA3newDMwoLT            = 1UL<<41,
    kByVVTightIsolationMVA3newDMwoLT           = 1UL<<42,
    kByVLooseIsolationMVA3newDMwLT             = 1UL<<43,  // BDT based tau ID discriminator based on isolation Pt sums plus tau lifetime information, trained on 1-prong, "2-prong" and 3-prong tau candidates
    kByLooseIsolationMVA3newDMwLT              = 1UL<<44,
    kByMediumIsolationMVA3newDMwLT             = 1UL<<45,
    kByTightIsolationMVA3newDMwLT              = 1UL<<46,
    kByVTightIsolationMVA3newDMwLT             = 1UL<<47,
    kByVVTightIsolationMVA3newDMwLT            = 1UL<<48
  };
}
#endif

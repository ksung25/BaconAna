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
      antiEleMVA3(0), antiEleMVA3Cat(0),
      antiEleMVA5(0), antiEleMVA5Cat(0),
      rawMuonRejection(0),rawIso3Hits(0), 
      rawIsoMVA3oldDMwoLT(0), rawIsoMVA3oldDMwLT(0),
      rawIsoMVA3newDMwoLT(0), rawIsoMVA3newDMwLT(0),
      hpsDisc(0),
      hltMatchBits(0)
    {}
    ~TTau(){}
    
    float         pt, eta, phi, m, e;  // kinematics
    int           q;                   // charge
    float         dzLeadChHad;         // longitudinal impact parameter of leading charged hadron
    unsigned int  nSignalChHad;        // number of charged hadrons in tau
    unsigned int  nSignalGamma;        // number of photons in tau     
    float         antiEleMVA3;         // anti-electron MVA
    float         antiEleMVA3Cat;      // anti-electron MVA category
    float         antiEleMVA5;         // anti-electron MVA5 for Run 2
    float         antiEleMVA5Cat;      // anti-electron MVA5 category for Run 2
    float         rawMuonRejection;    // New mva antimuon discriminator for Run 2
    float         rawIso3Hits;         // raw Iso 3 hits
    float         rawIsoMVA3oldDMwoLT; // raw Iso MVA3, trained on prong 1 and 3, without lifetime info
    float         rawIsoMVA3oldDMwLT;  // raw Iso MVA3, trained on prong 1 and 3, with lifetime info
    float         rawIsoMVA3newDMwoLT; // raw Iso MVA3, trained on prong 1, 2, and 3, without lifetime info
    float         rawIsoMVA3newDMwLT;  // raw Iso MVA3, trained on prong 1, 2, and 3, with lifetime info
    unsigned long hpsDisc;             // HPS tau discriminators
    TriggerObjects hltMatchBits;       // HLT matches
    
    ClassDef(TTau,1)
  };
  
  enum EHPSDiscriminator{
    // descriptions from https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuidePFTauID#Discriminators
    kByDecayModeFinding                        = 1UL<<0,   // You will always want to use this (see AN-10-82)
    
    kByVLooseIsolation                         = 1UL<<1,   // isolation cone of 0.3, no PF Charged Candidates with pT > 1.5 GeV/c and no PF Gamma candidates with ET > 2.0 GeV
    kByLooseIsolation                          = 1UL<<2,   // (description N/A)
    kByMediumIsolation                         = 1UL<<3,   // (description N/A)
    kByTightIsolation                          = 1UL<<4,   // (description N/A)
    kByVLooseIsolationDBSumPtCorr              = 1UL<<5,   // (description N/A)
    kByLooseIsolationDBSumPtCorr               = 1UL<<6,   // (description N/A)
    kByMediumIsolationDBSumPtCorr              = 1UL<<7,   // (description N/A)
    kByTightIsolationDBSumPtCorr               = 1UL<<8,   // (description N/A)
    kByVLooseCombinedIsolationDBSumPtCorr      = 1UL<<9,   // isolation cone of 0.3, Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 3 GeV
    kByLooseCombinedIsolationDBSumPtCorr       = 1UL<<10,  // isolation cone of 0.5, Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 2 GeV
    kByMediumCombinedIsolationDBSumPtCorr      = 1UL<<11,  // isolation cone of 0.5, Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 1 GeV
    kByTightCombinedIsolationDBSumPtCorr       = 1UL<<12,  // isolation cone of 0.5, Delta Beta corrected sum pT of PF charged and PF gamma isolation candidates (pT > 0.5 GeV) less than 0.8 GeV
    kByLooseCombinedIsolationDBSumPtCorr3Hits  = 1UL<<13,  // same as ByLooseCombinedIsolationDBSumPtCorr but requiring 3 hits (instead of 8) on track of isolation candidates
    kByMediumCombinedIsolationDBSumPtCorr3Hits = 1UL<<14,  // same as ByMediumCombinedIsolationDBSumPtCorr but requiring 3 hits (instead of 8) on track of isolation candidates
    kByTightCombinedIsolationDBSumPtCorr3Hits  = 1UL<<15,  // same as ByTightCombinedIsolationDBSumPtCorr but requiring 3 hits (instead of 8) on track of isolation candidates
    kByLooseElectronRejection                  = 1UL<<16,  // electron pion MVA discriminator < 0.6
    kByMediumElectronRejection                 = 1UL<<17,  // electron pion MVA discriminator < -0.1 and not 1.4442 < |eta| < 1.566
    kByTightElectronRejection                  = 1UL<<18,  // electron pion MVA discriminator < -0.1 and not 1.4442 < |eta| < 1.566 and Brem pattern cuts (see AN-10-387)
    kByMVA3LooseElectronRejection              = 1UL<<19,  // anti-electron MVA discriminator with improved training
    kByMVA3MediumElectronRejection             = 1UL<<20,  //  "
    kByMVA3TightElectronRejection              = 1UL<<21,  //  "
    kByMVA3VTightElectronRejection             = 1UL<<22,  //  "
    kByLooseMuonRejection                      = 1UL<<23,  // Tau Lead Track not matched to chamber hits
    kByMediumMuonRejection                     = 1UL<<24,  // Tau Lead Track not matched to global/tracker muon
    kByTightMuonRejection                      = 1UL<<25,  // Tau Lead Track not matched to global/tracker muon and large enough energy deposit in ECAL+HCAL exceeding 0.2 times Lead Track momentum
    kByLooseMuonRejection2                     = 1UL<<26,  // Same as LooseMuonRejection
    kByMediumMuonRejection2                    = 1UL<<27,  // LooseMuonRejection2 && no DT, CSC or RPC Hits in last 2 Stations
    kByTightMuonRejection2                     = 1UL<<28,  // MediumMuonRejection2 && large enough energy deposit in ECAL+HCAL in 1 prong + 0 strip decay mode (SUM(ECAL+HCAL)>0.2*pT)
    kByLooseMuonRejection3                     = 1UL<<29,  // Same as LooseMuonRejection
    kByTightMuonRejection3                     = 1UL<<30,  // MediumMuonRejection2 && large enough energy deposit in ECAL+HCAL in 1 prong + 0 strip decay mode (SUM(ECAL+HCAL)>0.2*pT)
    kByMVA5VLooseElectronRejection              = 1UL<<31,  // New anti-electron MVA discriminator for Run 2 
    kByMVA5LooseElectronRejection               = 1UL<<32,  // New anti-electron MVA discriminator for Run 2
    kByMVA5MediumElectronRejection              = 1UL<<33,  // New anti-electron MVA discriminator for Run 2
    kByMVA5TightElectronRejection               = 1UL<<34,  // New anti-electron MVA discriminator for Run 2
    kByMVA5VTightElectronRejection              = 1UL<<35,  // New anti-electron MVA discriminator for Run 2
    kByMVALooseMuonRejection                    = 1UL<<36,  // New MVA anti-muon discriminator for Run 2
    kByMVAMediumMuonRejection                   = 1UL<<37,  // New MVA anti-muon discriminator for Run 2
    kByMVATightMuonRejection                    = 1UL<<38,  // New MVA anti-muon discriminator for Run 2
    kByVLooseIsolationMVA3oldDMwoLT             = 1UL<<39,  // MVA3 Iso wout lifetime and trained on prong 1 and 3
    kByLooseIsolationMVA3oldDMwoLT              = 1UL<<40,  // MVA3 Iso wout lifetime and trained on prong 1 and 3
    kByMediumIsolationMVA3oldDMwoLT             = 1UL<<41,  // MVA3 Iso wout lifetime and trained on prong 1 and 3
    kByTightIsolationMVA3oldDMwoLT              = 1UL<<42,  // MVA3 Iso wout lifetime and trained on prong 1 and 3
    kByVTightIsolationMVA3oldDMwoLT             = 1UL<<43,  // MVA3 Iso wout lifetime and trained on prong 1 and 3
    kByVVTightIsolationMVA3oldDMwoLT            = 1UL<<44,  // MVA3 Iso wout lifetime and trained on prong 1 and 3
    kByVLooseIsolationMVA3oldDMwLT              = 1UL<<45,  // MVA3 Iso with lifetime and trained on prong 1 and 3
    kByLooseIsolationMVA3oldDMwLT               = 1UL<<46,  // MVA3 Iso with lifetime and trained on prong 1 and 3
    kByMediumIsolationMVA3oldDMwLT              = 1UL<<47,  // MVA3 Iso with lifetime and trained on prong 1 and 3
    kByTightIsolationMVA3oldDMwLT               = 1UL<<48,  // MVA3 Iso with lifetime and trained on prong 1 and 3
    kByVTightIsolationMVA3oldDMwLT              = 1UL<<49,  // MVA3 Iso with lifetime and trained on prong 1 and 3
    kByVVTightIsolationMVA3oldDMwLT             = 1UL<<50,  // MVA3 Iso with lifetime and trained on prong 1 and 3
    kByVLooseIsolationMVA3newDMwoLT             = 1UL<<51,  // MVA3 Iso wout lifetime and trained on prong 1,2 and 3
    kByLooseIsolationMVA3newDMwoLT              = 1UL<<52,  // MVA3 Iso wout lifetime and trained on prong 1,2 and 3
    kByMediumIsolationMVA3newDMwoLT             = 1UL<<53,  // MVA3 Iso wout lifetime and trained on prong 1,2 and 3
    kByTightIsolationMVA3newDMwoLT              = 1UL<<54,  // MVA3 Iso wout lifetime and trained on prong 1,2 and 3
    kByVTightIsolationMVA3newDMwoLT             = 1UL<<55,  // MVA3 Iso wout lifetime and trained on prong 1,2 and 3
    kByVVTightIsolationMVA3newDMwoLT            = 1UL<<56,  // MVA3 Iso wout lifetime and trained on prong 1,2 and 3
    kByVLooseIsolationMVA3newDMwLT              = 1UL<<57,  // MVA3 Iso with lifetime and trained on prong 1,2 and 3
    kByLooseIsolationMVA3newDMwLT               = 1UL<<58,  // MVA3 Iso with lifetime and trained on prong 1,2 and 3
    kByMediumIsolationMVA3newDMwLT              = 1UL<<59,  // MVA3 Iso with lifetime and trained on prong 1,2 and 3
    kByTightIsolationMVA3newDMwLT               = 1UL<<60,  // MVA3 Iso with lifetime and trained on prong 1,2 and 3
    kByVTightIsolationMVA3newDMwLT              = 1UL<<61,  // MVA3 Iso with lifetime and trained on prong 1,2 and 3
    kByVVTightIsolationMVA3newDMwLT             = 1UL<<62   // MVA3 Iso with lifetime and trained on prong 1,2 and 3
  };
}
#endif

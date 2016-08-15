#ifndef BACONANA_NTUPLER_BACONANADEFS_HH
#define BACONANA_NTUPLER_BACONANADEFS_HH

#include <bitset>

enum EFiducialFlag
{
  kIsEB        = 1,      // electron, photon
  kIsEE        = 2,      // electron, photon
  kIsGap       = 4,      // electron
  kIsEBEEGap   = 8,      // electron, photon
  kIsEBGap     = 16,     // electron
  kIsEBEtaGap  = 32,     // electron, photon
  kIsEBPhiGap  = 64,     // electron, photon
  kIsEEGap     = 128,    // electron
  kIsEEDeeGap  = 256,    // electron, photon
  kIsEERingGap = 512     // electron, photon
};

enum EMETFilterFailBit
{
  kHBHENoiseFilter                      = 1,
  kCSCTightHaloFilter                   = 2,
  kHCALLaserEventFilter                 = 4,
  kECALDeadCellTriggerPrimitiveFilter   = 8,
  kTrackingFailureFilter                = 16,
  kEEBadScFilter                        = 32,
  kECALLaserCorrFilter                  = 64,
  kTrkPOGFilter_manystripclus53X        = 128,
  kTrkPOGFilter_toomanystripclus53X     = 256,
  kTrkPOGFilter_logErrorTooManyClusters = 512,
  kHBHENoiseIsoFilter                   = 1024,
  kGoodVerticesFilter                   = 2048,
  kChargedHadronTrackResolutionFilter   = 4096,
  kMuonBadTrackFilter                   = 8192,
  kGlobalSuperTightHalo2016Filter       = 16384,
  kGlobalTightHalo2016Filter            = 32768
};

const unsigned int kNTrigBit = 256;
typedef std::bitset<kNTrigBit> TriggerBits;
const unsigned int kNTrigObjectBit = 256;
typedef std::bitset<kNTrigObjectBit> TriggerObjects;

#endif

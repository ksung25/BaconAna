#ifndef BACONANA_DATAFORMATS_TEVENTINFO_HH
#define BACONANA_DATAFORMATS_TEVENTINFO_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep 
{
  class TEventInfo : public TObject
  {
    public:
      TEventInfo():
      runNum(0), evtNum(0), lumiSec(0),
      metFilterFailBits(0),
      nPU(0), nPUm(0), nPUp(0),
      nPUmean(0), nPUmeanm(0), nPUmeanp(0),
      pvx(0), pvy(0), pvz(0),
      bsx(0), bsy(0), bsz(0), 
      caloMET(0), caloMETphi(0),//  caloMETCov00(0),  caloMETCov01(0),  caloMETCov11(0),
      pfMET(0),  pfMETphi(0),  pfMETCov00(0),  pfMETCov01(0),  pfMETCov11(0),
      pfMETC(0), pfMETCphi(0), pfMETCCov00(0), pfMETCCov01(0), pfMETCCov11(0),
      pfMETCjerup(0),pfMETCjerdn(0),pfMETCjenup(0),pfMETCjendn(0),pfMETCuncup(0),pfMETCuncdn(0),pfMETCjrsup(0),pfMETCjrsdn(0),
      pfMETCphijerup(0),pfMETCphijerdn(0),pfMETCphijenup(0),pfMETCphijendn(0),pfMETCphiuncup(0),pfMETCphiuncdn(0),pfMETCphijrsup(0),pfMETCphijrsdn(0),
      //mvaMET(0), mvaMETphi(0), mvaMETCov00(0), mvaMETCov01(0), mvaMETCov11(0),
      puppET (0), puppETphi (0), puppETCov00 (0), puppETCov01 (0), puppETCov11 (0),
      puppETC(0), puppETCphi(0), puppETCCov00(0), puppETCCov01(0), puppETCCov11(0),
      puppETCjerup(0),puppETCjerdn(0),puppETCjenup(0),puppETCjendn(0),puppETCuncup(0),puppETCuncdn(0),puppETCjrsup(0),puppETCjrsdn(0),
      puppETCphijerup(0),puppETCphijerdn(0),puppETCphijenup(0),puppETCphijendn(0),puppETCphiuncup(0),puppETCphiuncdn(0),puppETCphijrsup(0),puppETCphijrsdn(0),
      alpacaMET(0), alpacaMETphi(0), //puppETCCov00(0), puppETCCov01(0), puppETCCov11(0),
      pcpMET   (0), pcpMETphi(0),    //puppETCCov00(0), puppETCCov01(0), puppETCCov11(0),
      //trkMET(0), trkMETphi(0),
      rhoIso(0), rhoJet(0),
      triggerBits(0),
      hasGoodPV(false)
      {}
      ~TEventInfo(){}

      unsigned int  runNum, evtNum, lumiSec;                   // run number, event number, lumi section in data
      unsigned int  metFilterFailBits;                         // MET filter fail bits
      unsigned int  nPU, nPUm, nPUp;                           // number of reconstructed pile-up vertices
      float         nPUmean, nPUmeanm, nPUmeanp;               // expected number of reconstructed pile-up vertices
      float         pvx, pvy, pvz;                             // best primary vertex
      float         bsx, bsy, bsz;                             // beamspot
      float         caloMET, caloMETphi;                       // calo MET
      //float         caloMETCov00, caloMETCov01, caloMETCov11;
      float         pfMET,   pfMETphi;                           // particle flow MET
      float         pfMETCov00, pfMETCov01, pfMETCov11;
      float         pfMETC,   pfMETCphi;                         // corrected particle flow MET
      float         pfMETCCov00, pfMETCCov01, pfMETCCov11;
      float         pfMETCjerup,pfMETCjerdn,pfMETCjenup,pfMETCjendn,pfMETCuncup,pfMETCuncdn,pfMETCjrsup,pfMETCjrsdn;
      float         pfMETCphijerup,pfMETCphijerdn,pfMETCphijenup,pfMETCphijendn,pfMETCphiuncup,pfMETCphiuncdn,pfMETCphijrsup,pfMETCphijrsdn;
      //float         mvaMET,   mvaMETphi;                         // MVA MET
      //float         mvaMETCov00, mvaMETCov01, mvaMETCov11;
      float         puppET,   puppETphi;                         // PUPPI MET
      float         puppETCov00, puppETCov01, puppETCov11;
      float         puppETC,   puppETCphi;                       // Type1 PUPPI MET
      float         puppETCCov00, puppETCCov01, puppETCCov11;
      float         puppETCjerup,puppETCjerdn,puppETCjenup,puppETCjendn,puppETCuncup,puppETCuncdn,puppETCjrsup,puppETCjrsdn;
      float         puppETCphijerup,puppETCphijerdn,puppETCphijenup,puppETCphijendn,puppETCphiuncup,puppETCphiuncdn,puppETCphijrsup,puppETCphijrsdn;
      float         alpacaMET, alpacaMETphi;                     // Alpaca MET
      float         pcpMET, pcpMETphi;                           // Alapaca + PUPPI MET
      //float         trkMET, trkMETphi;                         // track MET
      float         rhoIso, rhoJet;                            // event energy density
      TriggerBits   triggerBits;                               // fired trigger bits
      bool          hasGoodPV;                                 // event has a good PV?

    ClassDef(TEventInfo,7)
  };
}
#endif

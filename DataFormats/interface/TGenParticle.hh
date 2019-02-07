#ifndef BACONANA_DATAFORMATS_TGENPARTICLE_HH
#define BACONANA_DATAFORMATS_TGENPARTICLE_HH

#include <TObject.h>

namespace baconhep 
{
  class TGenParticle : public TObject
  {
    public:
      TGenParticle():
	parent(-1), pdgId(0),status(0),
	pt(0), eta(0), phi(0), mass(0), y(0),
    isPromptFinalState(false),  isDirectPromptTauDecayProductFinalState(false), isHardProcess(false),
    fromHardProcessDecayed(false), fromHardProcessFinalState(false), isPromptDecayed(false)
      {}
      ~TGenParticle(){}

      int   parent;
      int   pdgId;
      int   status;
      float pt, eta, phi, mass, y;
      bool isPromptFinalState, isDirectPromptTauDecayProductFinalState, isHardProcess, fromHardProcessDecayed, fromHardProcessFinalState, isPromptDecayed;

    ClassDef(TGenParticle,2)
  };
}
#endif

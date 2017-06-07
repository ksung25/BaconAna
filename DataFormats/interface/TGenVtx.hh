#ifndef BACONANA_DATAFORMATS_TGENVTX_HH
#define BACONANA_DATAFORMATS_TGENVTX_HH

#include <TObject.h>

namespace baconhep 
{
  class TGenVtx : public TObject
  {
    public:
      TGenVtx():
	pdgId(0),
	pt(0), eta(0), phi(0), mass(0),
	vx(0), vy(0),  vz(0)  
      {}
      ~TGenVtx(){}

      int   pdgId;
      float pt, eta, phi, mass;
      float vx, vy, vz;

    ClassDef(TGenVtx,1)
  };
}
#endif

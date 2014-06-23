#ifndef BACONANA_DATAFORMATS_TRHPART_HH
#define BACONANA_DATAFORMATS_TRHPART_HH

#include <TObject.h>


namespace baconhep
{
  class TRHPart : public TObject
  {
    public:
      TRHPart():
	pt(0), eta(0), phi(0), energy(0),
	rho(0),ieta(0),iphi(0),depth(0),
	time(0),timefalling(0),
	x(0),y(0),z(0)
    {}
    ~TRHPart(){}

    float pt,eta,phi,energy;
    float rho,ieta,iphi,depth;
    float time,timefalling;
    float x,y,z;
    ClassDef(TRHPart,3)
  };
}
#endif

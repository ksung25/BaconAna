#ifndef BACONANA_DATAFORMATS_TGENWEIGHT_HH
#define BACONANA_DATAFORMATS_TGENWEIGHT_HH

#include <TObject.h>

namespace baconhep 
{
  class TGenWeight : public TObject
  {
    public:
      TGenWeight():
	scale11(0),scale12(0),scale10(0),
	scale21(0),scale22(0),scale20(0),
	scale01(0),scale02(0),scale00(0)
      {
	for(int i0 = 0; i0 < 101; i0++) pdf[i0] = 1.;
      }
      ~TGenWeight(){}
    
    float scale11;
    float scale12;
    float scale10;
    float scale21;
    float scale22;
    float scale20;
    float scale01;
    float scale02;
    float scale00;
    float pdf[100];
    ClassDef(TGenWeight,1)
  };
}
#endif

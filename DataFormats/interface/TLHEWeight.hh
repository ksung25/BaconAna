#ifndef BACONANA_DATAFORMATS_TLHEWEIGHT_HH
#define BACONANA_DATAFORMATS_TLHEWEIGHT_HH

#include <TObject.h>
#include <string>

namespace baconhep 
{
  class TLHEWeight : public TObject
  {
    public:
      TLHEWeight():id(0),weight(0){}
      ~TLHEWeight(){}

    int id;       // parton flavor PDG ID
    float       weight;   // generator-level event weight

    ClassDef(TLHEWeight,2)
  };
}
#endif

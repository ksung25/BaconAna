#ifndef BACONANA_DATAFORMATS_TLHEWEIGHT_HH
#define BACONANA_DATAFORMATS_TLHEWEIGHT_HH

#include <TObject.h>
#include <string>

namespace baconhep 
{
  class TLHEWeight : public TObject
  {
    public:
      TLHEWeight():id(""),weight(0){}
      ~TLHEWeight(){}

      std::string id;       // parton flavor PDG ID
      float       weight;   // generator-level event weight

    ClassDef(TLHEWeight,1)
  };
}
#endif

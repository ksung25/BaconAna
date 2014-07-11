#ifndef BACONANA_DATAFORMATS_TSUSYGen_HH
#define BACONANA_DATAFORMATS_TSUSYGen_HH

#include <TObject.h>


namespace baconhep
{
  class TSusyGen : public TObject
  {
    public:
      TSusyGen():
	id(""),m1(0),m2(0)
    {}
    ~TSusyGen(){}
    std::string   id;
    float         m1,m2;//Susy Mass
    ClassDef(TSusyGen,1)
  };
}
#endif

#ifndef BACONANA_DATAFORMATS_TTRIGGER_HH
#define BACONANA_DATAFORMATS_TTRIGGER_HH

#include "BaconAna/Utils/interface/TriggerRecord.hh"       // class to handle user specified trigger info
#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"

namespace baconhep
{
  class TTrigger 
  {
    public:
      TTrigger(const std::string iFileName);
      ~TTrigger(){}

      // Methods
      int  getTriggerBit(const std::string iName) const;
      int  getTriggerObjectBit(const std::string iName, const int iLeg) const;
      int  getTriggerObjectBit(const std::string iName, const std::string iObjName) const;
      bool pass(const std::string iName, const TriggerBits &iTrig) const;
      bool passObj(const std::string iName, const int iLeg,             const TriggerObjects &iTrigObj) const;
      bool passObj(const std::string iName, const std::string iObjName, const TriggerObjects &iTrigObj) const;

      std::vector<baconhep::TriggerRecord> fRecords;
  };
}
#endif

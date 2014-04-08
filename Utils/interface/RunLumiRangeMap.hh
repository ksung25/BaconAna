#ifndef BACONANA_UTILS_RUNLUMIRANGEMAP_HH
#define BACONANA_UTILS_RUNLUMIRANGEMAP_HH

#include <string>
#include <vector>
#include <map>

namespace baconhep
{
  class RunLumiRangeMap
  {
    public:
      typedef std::pair<unsigned int, unsigned int>                RunLumiPairType;
      typedef std::map<unsigned int, std::vector<RunLumiPairType>> MapType;
      
      RunLumiRangeMap(){}
      ~RunLumiRangeMap(){}
      
      void addJSONFile(const std::string &filepath);
      bool hasRunLumi(const RunLumiPairType &runLumi) const;
    
    protected:
      MapType fMap; // mapped run-lumi ranges to accept
  };
}
#endif

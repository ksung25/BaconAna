#ifndef _RUNLUMIRANGEMAP_H
#define _RUNLUMIRANGEMAP_H

#include <string>
#include <vector>
#include <map>
#include <TObject.h>
#include "RunLumiSet.h"

class RunLumiRangeMap : public TObject 
{ 
 public:
  typedef std::pair<UInt_t,UInt_t> RunLumiPairType;
  typedef std::map<UInt_t,std::vector<RunLumiPairType> > MapType;
  
  RunLumiRangeMap() {}
  RunLumiRangeMap(const RunLumiSet &rlset) { FillRunLumiSet(rlset); }
  
  void                         AddJSONFile(const std::string &filepath);
  Bool_t                       HasRunLumi(const RunLumiPairType &runLumi) const;
  
 protected:
  void                         FillRunLumiSet(const RunLumiSet &rlSet);
  MapType                      fMap; //mapped run-lumi ranges to accept
};
#endif

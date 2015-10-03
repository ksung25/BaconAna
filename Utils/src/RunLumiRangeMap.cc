#include "BaconAna/Utils/interface/RunLumiRangeMap.h"
#include "BaconAna/Utils/interface/Jzon.h"

//--------------------------------------------------------------------------------------------------
bool RunLumiRangeMap::HasRunLumi(const RunLumiPairType &runLumi) const
{
  // Check if a given run,lumi pair is included in the mapped lumi ranges

  //check if run is included in the map
  MapType::const_iterator it = fMap.find(runLumi.first);
  if (it!=fMap.end()) {
    //check lumis
    const MapType::mapped_type &lumiPairList = it->second;
    for (MapType::mapped_type::const_iterator jt = lumiPairList.begin(); jt<lumiPairList.end(); ++jt) {
      if (runLumi.second >= jt->first && runLumi.second <= jt->second) {
        //found lumi in accepted range
        return kTRUE;
      }
    }
  }

  return kFALSE;

}

//--------------------------------------------------------------------------------------------------
void RunLumiRangeMap::AddJSONFile(const std::string &filepath) 
{

  //read json without boost bullshit
  Jzon::Object rootNode;
  Jzon::FileReader::ReadFile(filepath, rootNode);
    
  //Build a map of lumi stuff 
  for (Jzon::Object::iterator it = rootNode.begin(); it != rootNode.end(); ++it) { 
    unsigned int runNumber = (unsigned int) atoi(((*it).first).c_str());
    MapType::mapped_type &lumiPairList = fMap[runNumber];
    const Jzon::Array &pLumis = rootNode.Get((*it).first).AsArray();
    for (Jzon::Array::const_iterator it = pLumis.begin(); it != pLumis.end(); ++it) { 
      Jzon::Array lumiPairTree = (*it).AsArray();
      if (lumiPairTree.GetCount()==2) {
        UInt_t firstLumi = (*   (lumiPairTree.begin()) ).ToInt();
        UInt_t lastLumi =  (*(++(lumiPairTree.begin()))).ToInt();
        lumiPairList.push_back(std::pair<UInt_t,UInt_t>(firstLumi,lastLumi));
      }
    }
  }

  //dump run and lumi ranges from MapType structure to verify correct json parsing
  if (0) {
    printf("Iterating over parsed JSON:\n");
    for (MapType::const_iterator it = fMap.begin(); it != fMap.end(); ++it) {
      printf("  Run %u:\n",it->first);
      for (MapType::mapped_type::const_iterator jt = it->second.begin(); jt < it->second.end(); ++jt) {
        printf("    Lumis %u - %u\n",jt->first,jt->second);
      }
    }

  }

}

//--------------------------------------------------------------------------------------------------
void RunLumiRangeMap::FillRunLumiSet(const RunLumiSet &rlSet)
{
  fMap.clear();
  const RunLumiSet::SetType &theset = rlSet.runLumiSet();

  UInt_t firstlumi = 0;
  for (RunLumiSet::SetType::const_iterator it = theset.begin(); it!=theset.end(); ++it) {

    if (firstlumi==0) firstlumi = it->second;
    MapType::mapped_type &lumiPairList = fMap[it->first];

    RunLumiSet::SetType::const_iterator itnext = it;
    ++itnext;

    if ( itnext==theset.end() || itnext->first!=it->first || itnext->second!=(it->second+1) ) {
      lumiPairList.push_back(std::pair<UInt_t,UInt_t>(firstlumi,it->second));
      firstlumi = 0;
    }
    
  }
}

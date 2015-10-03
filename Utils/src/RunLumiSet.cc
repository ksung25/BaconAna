#include "BaconAna/Utils/interface/RunLumiSet.h"
#include "BaconAna/Utils/interface/RunLumiRangeMap.h"

//--------------------------------------------------------------------------------------------------
RunLumiSet::RunLumiSet(const TGraph &graph)
{
  for (Int_t i=0; i<graph.GetN(); ++i) {
    Double_t run;
    Double_t lumi;
    graph.GetPoint(i,run,lumi);
    fSet.insert(RunLumiPairType(run,lumi));
  }
  
}

//--------------------------------------------------------------------------------------------------
Long64_t RunLumiSet::Merge(TCollection *list)
{
  Long64_t nmerged = 0;
  TIter iter(list);
  TObject *obj = 0;
  while( (obj=iter.Next()) ) {
    const RunLumiSet *mergeset = dynamic_cast<const RunLumiSet*>(obj);
    if (mergeset) {
      fSet.insert(mergeset->runLumiSet().begin(), mergeset->runLumiSet().end());
      nmerged++;
    }
  }

  return nmerged;

}


//--------------------------------------------------------------------------------------------------
// $Id: RunLumiSet.h,v 1.2 2010/06/29 15:51:53 bendavid Exp $
//
// RunLumiSet
//
// Set of run,lumi pairs
//
// Authors: J.Bendavid
//--------------------------------------------------------------------------------------------------

#ifndef _RUNLUMISET_H
#define _RUNLUMISET_H
 
#include <TNamed.h>
#include <TCollection.h>
#include <TGraph.h>
#include <set>

class RunLumiSet : public TNamed 
  {
    public:
      typedef std::pair<UInt_t,UInt_t> RunLumiPairType;
      typedef std::set<RunLumiPairType> SetType;
    
      RunLumiSet() {}
      RunLumiSet(const TGraph &graph);

      void                         Add(const RunLumiPairType &runlumi)        { fSet.insert(runlumi); }
      UInt_t                       GetEntries()                        const  { return fSet.size();   }
      const SetType               &runLumiSet()                        const  { return fSet;          }
      Long64_t                     Merge(TCollection *list);

    protected:
      SetType                      fSet;

};
#endif

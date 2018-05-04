#ifndef BACONANA_DATAFORMATS_TGENJET_HH
#define BACONANA_DATAFORMATS_TGENJET_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TGenJet : public TObject
  {
  public:
    /// default constructor
    TGenJet(){}
    /// default destructor
    ~TGenJet(){}
    
    float pdgId; 
    float pt   ;
    float eta  ;
    float phi  ;
    float mass ;

    float msd, e2sdb1, e3_v2_sdb1; 

    /*
    float elept       ;
    float eleeta      ;
    float elephi      ;
    float elem        ;

    float mupt        ;
    float mueta       ;
    float muphi       ;
    float mum         ;

    float gapt        ;
    float gaeta       ;
    float gaphi       ;
    float gam         ;

    float totpt       ;
    float toteta      ;
    float totphi      ;
    float totm        ;

    float iso03       ;
    float iso04       ;
    float iso05       ;

    float mtrim       ;
    float tau1        ;
    float tau2        ;
    */
    ClassDef(TGenJet,1)
  };
}
#endif

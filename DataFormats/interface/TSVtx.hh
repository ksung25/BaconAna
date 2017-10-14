#ifndef BACONANA_DATAFORMATS_TSVTX_HH
#define BACONANA_DATAFORMATS_TSVTX_HH

#include <TObject.h>

namespace baconhep 
{
  class TSVtx : public TObject //2ndary vertex
  {
  public:
    TSVtx():
      pt(0),eta(0),phi(0),mass(0),
      etarel(0),phirel(0),sv_deltaR(0),
      sv_ntracks(0),sv_chi2(0),sv_ndf(0),sv_normchi2(0),
      sv_dxy(0),sv_dxyerr(0),sv_dxysig(0),
      sv_d3d(0),sv_d3derr(0),sv_d3dsig(0),sv_enratio(0)
    {}
    ~TSVtx(){}

    float pt,eta,phi,mass; // 2nd 
    float etarel,phirel,sv_deltaR;
    float sv_ntracks,sv_chi2,sv_ndf,sv_normchi2;
    float sv_dxy,sv_dxyerr,sv_dxysig;
    float sv_d3d,sv_d3derr,sv_d3dsig,sv_enratio;
    ClassDef(TSVtx,1)
  };
}
#endif

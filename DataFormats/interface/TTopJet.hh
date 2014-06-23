#ifndef BACONANA_DATAFORMATS_TTOPJET_HH
#define BACONANA_DATAFORMATS_TTOPJET_HH

#include <TObject.h>

namespace baconhep
{
  class TTopJet : public TObject
  {
    public:
      TTopJet():
	index(-1),
	pt_htt(0), ptraw_htt(0), eta_htt(0), phi_htt(0), mass_htt(0), area_htt(0),
	pt_htt1(0),ptraw_htt1(0),eta_htt1(0),phi_htt1(0),mass_htt1(0),area_htt1(0),
        pt_htt2(0),ptraw_htt2(0),eta_htt2(0),phi_htt2(0),mass_htt2(0),area_htt2(0),
        pt_htt3(0),ptraw_htt3(0),eta_htt3(0),phi_htt3(0),mass_htt3(0),area_htt3(0),
     	pt_cms (0),ptraw_cms (0),eta_cms (0),phi_cms (0),mass_cms (0),area_cms (0),
     	pt_cms1(0),ptraw_cms1(0),eta_cms1(0),phi_cms1(0),mass_cms1(0),area_cms1(0),
	pt_cms2(0),ptraw_cms2(0),eta_cms2(0),phi_cms2(0),mass_cms2(0),area_cms2(0),
	pt_cms3(0),ptraw_cms3(0),eta_cms3(0),phi_cms3(0),mass_cms3(0),area_cms3(0)
    {}
      ~TTopJet(){}

    unsigned int index;                                                // Index of original jet collection
    float pt_htt, ptraw_htt, eta_htt, phi_htt, mass_htt, area_htt;     // hep top tag jet
    float pt_htt1,ptraw_htt1,eta_htt1,phi_htt1,mass_htt1,area_htt1;    // hep top tag subjet1
    float pt_htt2,ptraw_htt2,eta_htt2,phi_htt2,mass_htt2,area_htt2;    // hep top tag subjet2
    float pt_htt3,ptraw_htt3,eta_htt3,phi_htt3,mass_htt3,area_htt3;    // hep top tag subjet3
    float pt_cms ,ptraw_cms, eta_cms, phi_cms, mass_cms, area_cms;     // cms top tag jet
    float pt_cms1,ptraw_cms1,eta_cms1,phi_cms1,mass_cms1,area_cms1;    // cms top tag subjet W1
    float pt_cms2,ptraw_cms2,eta_cms2,phi_cms2,mass_cms2,area_cms2;    // cms top tag subjet W2
    float pt_cms3,ptraw_cms3,eta_cms3,phi_cms3,mass_cms3,area_cms3;    // cms top tag subjet non W
    ClassDef(TTopJet,1)
  };
}
#endif

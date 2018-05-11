#ifndef BACONANA_DATAFORMATS_TADDJET_HH
#define BACONANA_DATAFORMATS_TADDJET_HH

#include <TObject.h>

namespace baconhep
{
  class TAddJet : public TObject
  {
    public:
      TAddJet():
      index(-1),
      mass_prun(0), mass_trim(0), mass_sd0(0), mass_rsd0(0), mass_rsd1(0),
      c2_0(0), c2_0P2(0), c2_0P5(0), c2_1P0(0), c2_2P0(0),
      e2_b1(0),e3_b1(0),e3_v1_b1(0),e3_v2_b1(0),e4_v1_b1(0),e4_v2_b1(0),
      //e2_b2(0),e3_b2(0),e3_v1_b2(0),e3_v2_b2(0),e4_v1_b2(0),e4_v2_b2(0),
      e2_sdb1(0),e3_sdb1(0),e3_v1_sdb1(0),e3_v2_sdb1(0),e4_v1_sdb1(0),e4_v2_sdb1(0),
      //e2_sdb2(0),e3_sdb2(0),e3_v1_sdb2(0),e3_v2_sdb2(0),e4_v1_sdb2(0),e4_v2_sdb2(0),
      //e2_sdb4(0),e3_sdb4(0),e3_v1_sdb4(0),e3_v2_sdb4(0),e4_v1_sdb4(0),e4_v2_sdb4(0),
      //e2_sdb05(0),e3_sdb05(0),e3_v1_sdb05(0),e3_v2_sdb05(0),e4_v1_sdb05(0),e4_v2_sdb05(0),
      qjet(0),
      tau1(-1), tau2(-1), tau3(-1), tau4(-1),doublecsv(0),Double_sub(0),deepdoubleb(0),deepdoubleb_nomasssculptpen(0),
      sj1_pt(0), sj1_eta(0), sj1_phi(0), sj1_m(0), sj1_csv(-2), sj1_qgid(-2), sj1_q(-100),
      sj2_pt(0), sj2_eta(0), sj2_phi(0), sj2_m(0), sj2_csv(-2), sj2_qgid(-2), sj2_q(-100),
      sj3_pt(0), sj3_eta(0), sj3_phi(0), sj3_m(0), sj3_csv(-2), sj3_qgid(-2), sj3_q(-100),
      sj4_pt(0), sj4_eta(0), sj4_phi(0), sj4_m(0), sj4_csv(-2), sj4_qgid(-2), sj4_q(-100),
      pullAngle(0),
      lepCPt(-100), lepCEta(-100), lepCPhi(-100),
      lepCId(0),
      lsfCInc(-100), lsfC_2(-100), lsfC_3(-100), lsfC_4(-100),
      lmdCInc(-100), lmdC_2(-100), lmdC_3(-100), lmdC_4(-100),
      lsfC_3_sj1_pt(0), lsfC_3_sj1_eta(0), lsfC_3_sj1_phi(0), lsfC_3_sj1_m(0),
      lsfC_3_sj2_pt(0), lsfC_3_sj2_eta(0), lsfC_3_sj2_phi(0), lsfC_3_sj2_m(0),
      lsfC_3_sj3_pt(0), lsfC_3_sj3_eta(0), lsfC_3_sj3_phi(0), lsfC_3_sj3_m(0),
      topTagType(0), top_n_subjets(0), top_m_min(0), top_m_123(0), top_fRec(0),topchi2(0)
      {}
      ~TAddJet(){}
      
      unsigned int index;                                                   // index in original jet collection
      float mass_prun, mass_trim, mass_sd0, mass_rsd0, mass_rsd1;           // groomed jet masses
      float c2_0, c2_0P2, c2_0P5, c2_1P0, c2_2P0;                           // Correlation function with various exponents
      float e2_b1,e3_b1,e3_v1_b1,e3_v2_b1,e4_v1_b1,e4_v2_b1;                // Correlation function in puts beta=1
    //float e2_b2,e3_b2,e3_v1_b2,e3_v2_b2,e4_v1_b2,e4_v2_b2;                // Correlation function in puts beta=2
      float e2_sdb1,e3_sdb1,e3_v1_sdb1,e3_v2_sdb1,e4_v1_sdb1,e4_v2_sdb1;    // Soft Dropped correlation function in puts beta=1
    //float e2_sdb2,e3_sdb2,e3_v1_sdb2,e3_v2_sdb2,e4_v1_sdb2,e4_v2_sdb2;    // Soft Dropped correlation function in puts beta=2
    //float e2_sdb4,e3_sdb4,e3_v1_sdb4,e3_v2_sdb4,e4_v1_sdb4,e4_v2_sdb4;        // Soft Dropped correlation function in puts beta=4
    //float e2_sdb05,e3_sdb05,e3_v1_sdb05,e3_v2_sdb05,e4_v1_sdb05,e4_v2_sdb05;  // Soft Dropped correlation function in puts beta=0.5
      float qjet;                                                           // Q-jet volatility
      float tau1, tau2, tau3, tau4;                                         // N-subjettiness
      float doublecsv;                                                      // Double b-tag 
      float Double_sub; 					    	    // Double b-tag with subjet b-tagging as additional input 
      float deepdoubleb, deepdoubleb_nomasssculptpen; 					    	    // Deep double b-tag
      
      // subjets from trimming (ordered by pT)
      float sj1_pt, sj1_eta, sj1_phi, sj1_m, sj1_csv, sj1_qgid, sj1_q;
      float sj2_pt, sj2_eta, sj2_phi, sj2_m, sj2_csv, sj2_qgid, sj2_q;
      float sj3_pt, sj3_eta, sj3_phi, sj3_m, sj3_csv, sj3_qgid, sj3_q;
      float sj4_pt, sj4_eta, sj4_phi, sj4_m, sj4_csv, sj4_qgid, sj4_q;
      float pullAngle;
      
      // lepton in jet
      float lepCPt, lepCEta, lepCPhi;
      int   lepCId;
      float lsfCInc, lsfC_2, lsfC_3, lsfC_4;
      float lmdCInc, lmdC_2, lmdC_3, lmdC_4;
      float lsfC_3_sj1_pt, lsfC_3_sj1_eta, lsfC_3_sj1_phi, lsfC_3_sj1_m;
      float lsfC_3_sj2_pt, lsfC_3_sj2_eta, lsfC_3_sj2_phi, lsfC_3_sj2_m;
      float lsfC_3_sj3_pt, lsfC_3_sj3_eta, lsfC_3_sj3_phi, lsfC_3_sj3_m;
      // top tagger info
      unsigned int topTagType;
      unsigned int top_n_subjets;
      float        top_m_min, top_m_123, top_fRec;
      float        topchi2;
      std::vector<Short_t> svtx;     
    ClassDef(TAddJet,13)
  };
  
  enum ETopTagType
  {
    kCMSTT = 1,
    kHEPTT = 2
  };
}
#endif

#ifndef BACONANA_DATAFORMATS_LINKDEF_H
#define BACONANA_DATAFORMATS_LINKDEF_H
#include "BaconAna/DataFormats/interface/TEventInfo.hh"
#include "BaconAna/DataFormats/interface/TSusyGen.hh"
#include "BaconAna/DataFormats/interface/TGenEventInfo.hh"
#include "BaconAna/DataFormats/interface/TGenWeight.hh"
#include "BaconAna/DataFormats/interface/TGenParticle.hh"
#include "BaconAna/DataFormats/interface/TGenJet.hh"
#include "BaconAna/DataFormats/interface/TElectron.hh"
#include "BaconAna/DataFormats/interface/TMuon.hh"
#include "BaconAna/DataFormats/interface/TTau.hh"
#include "BaconAna/DataFormats/interface/TAddJet.hh"
#include "BaconAna/DataFormats/interface/TTopJet.hh"
#include "BaconAna/DataFormats/interface/TJet.hh"
#include "BaconAna/DataFormats/interface/TPhoton.hh"
#include "BaconAna/DataFormats/interface/TVertex.hh"
#include "BaconAna/DataFormats/interface/TPFPart.hh"
#include "BaconAna/DataFormats/interface/TRHPart.hh"
#endif

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace baconhep;

#pragma link C++ class baconhep::TEventInfo+;
#pragma link C++ class baconhep::TSusyGen+;
#pragma link C++ class baconhep::TGenEventInfo+;
#pragma link C++ class baconhep::TGenParticle+;
#pragma link C++ class baconhep::TGenJet+;
#pragma link C++ class baconhep::TGenWeight+;
#pragma link C++ class baconhep::TElectron+;
#pragma link C++ class baconhep::TMuon+;
#pragma link C++ class baconhep::TTau+;
#pragma link C++ class baconhep::TJet+;
#pragma link C++ class baconhep::TAddJet+;
#pragma link C++ class baconhep::TTopJet+;
#pragma link C++ class baconhep::TPhoton+;
#pragma link C++ class baconhep::TVertex+;
#pragma link C++ class baconhep::TPFPart+;
#pragma link C++ class baconhep::TRHPart+;
#endif

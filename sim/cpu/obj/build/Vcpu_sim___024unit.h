// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_sim.h for the primary calling header

#ifndef VERILATED_VCPU_SIM___024UNIT_H_
#define VERILATED_VCPU_SIM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_sim___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<CData/*4:0*/, std::string> __Venumtab_enum_name29;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name79;
    static VlUnpacked<std::string, 16> __Venumtab_enum_name80;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name73;
    static VlUnpacked<std::string, 16> __Venumtab_enum_name65;
    static VlUnpacked<std::string, 16> __Venumtab_enum_name81;

    // INTERNAL VARIABLES
    Vcpu_sim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcpu_sim___024unit() = default;
    ~Vcpu_sim___024unit() = default;
    void ctor(Vcpu_sim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcpu_sim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"
VlAssocArray<CData/*4:0*/, std::string> Vcpu_sim___024unit::__Venumtab_enum_name29;
VlUnpacked<std::string, 8> Vcpu_sim___024unit::__Venumtab_enum_name79;
VlUnpacked<std::string, 16> Vcpu_sim___024unit::__Venumtab_enum_name80;
VlUnpacked<std::string, 8> Vcpu_sim___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 16> Vcpu_sim___024unit::__Venumtab_enum_name65;
VlUnpacked<std::string, 16> Vcpu_sim___024unit::__Venumtab_enum_name81;

void Vcpu_sim___024unit___ctor_var_reset(Vcpu_sim___024unit* vlSelf);

void Vcpu_sim___024unit::ctor(Vcpu_sim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcpu_sim___024unit___ctor_var_reset(this);
}

void Vcpu_sim___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcpu_sim___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

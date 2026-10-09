// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

void Vcpu_sim___024root___ctor_var_reset(Vcpu_sim___024root* vlSelf);

Vcpu_sim___024root::Vcpu_sim___024root(Vcpu_sim__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcpu_sim___024root___ctor_var_reset(this);
}

void Vcpu_sim___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_sim___024root::~Vcpu_sim___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

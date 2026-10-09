// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU_SIM__SYMS_H_
#define VERILATED_VCPU_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcpu_sim.h"

// INCLUDE MODULE CLASSES
#include "Vcpu_sim___024root.h"
#include "Vcpu_sim___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcpu_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcpu_sim* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcpu_sim___024root             TOP;
    Vcpu_sim___024unit             TOP____024unit;

    // CONSTRUCTORS
    Vcpu_sim__Syms(VerilatedContext* contextp, const char* namep, Vcpu_sim* modelp);
    ~Vcpu_sim__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

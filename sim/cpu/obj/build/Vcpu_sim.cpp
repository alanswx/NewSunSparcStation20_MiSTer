// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_sim__pch.h"

//============================================================
// Constructors

Vcpu_sim::Vcpu_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu_sim__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu_sim::Vcpu_sim(const char* _vcname__)
    : Vcpu_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu_sim::~Vcpu_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcpu_sim___024root___eval_debug_assertions(Vcpu_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_sim___024root___eval_static(Vcpu_sim___024root* vlSelf);
void Vcpu_sim___024root___eval_initial(Vcpu_sim___024root* vlSelf);
void Vcpu_sim___024root___eval_settle(Vcpu_sim___024root* vlSelf);
void Vcpu_sim___024root___eval(Vcpu_sim___024root* vlSelf);

void Vcpu_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcpu_sim___024root___eval_static(&(vlSymsp->TOP));
        Vcpu_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vcpu_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcpu_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcpu_sim::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcpu_sim::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcpu_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcpu_sim___024root___eval_final(Vcpu_sim___024root* vlSelf);

VL_ATTR_COLD void Vcpu_sim::final() {
    Vcpu_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu_sim::hierName() const { return vlSymsp->name(); }
const char* Vcpu_sim::modelName() const { return "Vcpu_sim"; }
unsigned Vcpu_sim::threads() const { return 1; }
void Vcpu_sim::prepareClone() const { contextp()->prepareClone(); }
void Vcpu_sim::atClone() const {
    contextp()->threadPoolpOnClone();
}

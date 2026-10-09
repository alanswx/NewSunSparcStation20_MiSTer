// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

void Vcpu_sim___024root___nba_sequent__TOP__0(Vcpu_sim___024root* vlSelf);
void Vcpu_sim___024root___nba_sequent__TOP__1(Vcpu_sim___024root* vlSelf);
void Vcpu_sim___024root___nba_sequent__TOP__2(Vcpu_sim___024root* vlSelf);

void Vcpu_sim___024root___eval_nba(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_nba\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_sim___024root___nba_sequent__TOP__0(vlSelf);
        Vcpu_sim___024root___nba_sequent__TOP__1(vlSelf);
        Vcpu_sim___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vcpu_sim___024root___timing_commit(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___timing_commit\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_ha8da8781__0.commit(
                                                   "@(posedge cpu_sim.clk)");
    }
}

void Vcpu_sim___024root___timing_resume(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___timing_resume\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha8da8781__0.resume(
                                                   "@(posedge cpu_sim.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_sim___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vcpu_sim___024root___eval_triggers__act(Vcpu_sim___024root* vlSelf);
bool Vcpu_sim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcpu_sim___024root___eval_act(Vcpu_sim___024root* vlSelf);

bool Vcpu_sim___024root___eval_phase__act(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_phase__act\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_sim___024root___eval_triggers__act(vlSelf);
    Vcpu_sim___024root___timing_commit(vlSelf);
    Vcpu_sim___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcpu_sim___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcpu_sim___024root___timing_resume(vlSelf);
        Vcpu_sim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcpu_sim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_sim___024root___eval_phase__nba(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_phase__nba\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_sim___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcpu_sim___024root___eval_nba(vlSelf);
        Vcpu_sim___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_sim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcpu_sim___024root___eval(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_sim___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/cpu/cpu_sim.sv", 20, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcpu_sim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("sim/cpu/cpu_sim.sv", 20, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcpu_sim___024root___eval_phase__act(vlSelf));
    } while (Vcpu_sim___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcpu_sim___024root___eval_debug_assertions(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_debug_assertions\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

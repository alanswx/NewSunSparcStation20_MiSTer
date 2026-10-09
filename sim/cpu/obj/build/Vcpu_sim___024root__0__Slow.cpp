// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

VL_ATTR_COLD void Vcpu_sim___024root___eval_static(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_static\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_sim__DOT__clk__0 
        = vlSelfRef.cpu_sim__DOT__clk;
}

VL_ATTR_COLD void Vcpu_sim___024root___eval_initial__TOP(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_initial__TOP\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_sim__DOT__clk = 0U;
    vlSelfRef.cpu_sim__DOT__rst = 1U;
    VL_READMEM_N(true, 32, 262144, 0, "/Users/alans/dev2/NewSunSparcStation20_MiSTer/sim/cpu/obj/rom.hex"s
                 ,  &(vlSelfRef.cpu_sim__DOT__rom), 0
                 , ~0ULL);
    if ((! VL_VALUEPLUSARGS_INI(32, "lat=%d"s, vlSelfRef.cpu_sim__DOT__lat))) {
        vlSelfRef.cpu_sim__DOT__lat = 1U;
    }
    vlSelfRef.cpu_sim__DOT__gaps = (1U & VL_TESTPLUSARGS_I("gaps"s));
    vlSelfRef.cpu_sim__DOT__quiet = ((VL_TESTPLUSARGS_I("dmem"s) 
                                      || VL_TESTPLUSARGS_I("trace"s)) 
                                     || VL_TESTPLUSARGS_I("mem"s));
    vlSelfRef.cpu_sim__DOT__keep_wd = (1U & VL_TESTPLUSARGS_I("wd"s));
    if ((! VL_VALUEPLUSARGS_INQ(64, "cycles=%d"s, vlSelfRef.cpu_sim__DOT__budget))) {
        vlSelfRef.cpu_sim__DOT__budget = 0x0000000017d78400ULL;
    }
    vlSelfRef.cpu_sim__DOT__trace = (1U & VL_TESTPLUSARGS_I("trace"s));
    if ((! VL_VALUEPLUSARGS_INQ(64, "from=%d"s, vlSelfRef.cpu_sim__DOT__dbg_from))) {
        vlSelfRef.cpu_sim__DOT__dbg_from = 0ULL;
    }
    if ((! VL_VALUEPLUSARGS_INQ(64, "to=%d"s, vlSelfRef.cpu_sim__DOT__dbg_to))) {
        vlSelfRef.cpu_sim__DOT__dbg_to = 0xffffffffffffffffULL;
    }
}

VL_ATTR_COLD void Vcpu_sim___024root___eval_final(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_final\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_sim___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_sim___024root___eval_phase__stl(Vcpu_sim___024root* vlSelf);

VL_ATTR_COLD void Vcpu_sim___024root___eval_settle(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_settle\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_sim___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/cpu/cpu_sim.sv", 20, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcpu_sim___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcpu_sim___024root___eval_triggers__stl(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_triggers__stl\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_sim___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcpu_sim___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_sim___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_sim___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_sim___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*2:0*/, 64> Vcpu_sim__ConstPool__TABLE_h3183d743_0;

VL_ATTR_COLD void Vcpu_sim___024root___stl_sequent__TOP__0(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___stl_sequent__TOP__0\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ cpu_sim__DOT__esc_off;
    cpu_sim__DOT__esc_off = 0;
    VlWide<4>/*111:0*/ cpu_sim__DOT__u_cpu__DOT__mem_w;
    VL_ZERO_W(112, cpu_sim__DOT__u_cpu__DOT__mem_w);
    VlWide<4>/*111:0*/ cpu_sim__DOT__u_cpu__DOT__mem_d;
    VL_ZERO_W(112, cpu_sim__DOT__u_cpu__DOT__mem_d);
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__owner_busy;
    cpu_sim__DOT__u_cpu__DOT__owner_busy = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 = 0;
    CData/*4:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 0;
    CData/*4:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____VdfgRegularize_h3ecca47e_0_1;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____VdfgRegularize_h3ecca47e_0_1 = 0;
    CData/*3:0*/ cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way;
    cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____VdfgRegularize_had306f9e_0_1;
    cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____VdfgRegularize_had306f9e_0_1 = 0;
    QData/*63:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair = 0;
    QData/*63:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair = 0;
    VlWide<3>/*73:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r;
    VL_ZERO_W(74, cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r);
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff = 0;
    SData/*13:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big = 0;
    QData/*57:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ma;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ma = 0;
    QData/*57:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mb;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mb = 0;
    QData/*57:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_big;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_big = 0;
    QData/*57:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small = 0;
    SData/*13:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 0;
    QData/*58:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum = 0;
    QData/*63:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2 = 0;
    CData/*5:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh = 0;
    QData/*52:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_mi;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_mi = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_iv;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_iv = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 0;
    QData/*63:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0 = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_zero;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_zero = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_ones;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_ones = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero = 0;
    CData/*5:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz = 0;
    QData/*52:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__m;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__m = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_zero;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_zero = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero = 0;
    CData/*5:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz = 0;
    QData/*52:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__m;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__m = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i = 0;
    CData/*5:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i = 0;
    CData/*2:0*/ cpu_sim__DOT__u_escc__DOT__top_idx;
    cpu_sim__DOT__u_escc__DOT__top_idx = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__size;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__size = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__a;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__a = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__size;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__size = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r = 0;
    IData/*31:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__rf_val;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__rf_val = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r = 0;
    IData/*31:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__rf_val;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__rf_val = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r = 0;
    IData/*31:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__rf_val;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__rf_val = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r = 0;
    IData/*31:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__rf_val;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__rf_val = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__n;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__n = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__z;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__z = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__v;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__v = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__cc;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__cc = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__r = 0;
    IData/*31:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op 
        = ((0x00002000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
            ? 0x0dU : ((0x00001000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                        ? ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                            ? ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                ? 0x0dU : ((0x00000200U 
                                            & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                            ? ((0x00000100U 
                                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                ? 0x0dU
                                                : (
                                                   (0x00000080U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 
                                                    ((0x00000020U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                      ? 0x0dU
                                                      : 0x0bU)
                                                     : 
                                                    ((0x00000020U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                      ? 0x0bU
                                                      : 0x0dU))))
                                            : ((0x00000100U 
                                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                ? (
                                                   (0x00000080U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 
                                                    ((0x00000020U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                      ? 0x0cU
                                                      : 0x0aU)))
                                                : (
                                                   (0x00000080U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000040U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 
                                                    ((0x00000020U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                      ? 0x0dU
                                                      : 0x0cU)
                                                     : 
                                                    ((0x00000020U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                      ? 0x0dU
                                                      : 0x0aU))
                                                    : 0x0dU))))
                            : 0x0dU) : ((0x00000800U 
                                         & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                         ? ((0x00000400U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                             ? ((0x00000200U 
                                                 & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                 ? 0x0dU
                                                 : 
                                                ((0x00000100U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                  ? 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 0x0dU
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 5U
                                                     : 0x0dU)))
                                                  : 0x0dU))
                                             : ((0x00000200U 
                                                 & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                 ? 
                                                ((0x00000100U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                  ? 0x0dU
                                                  : 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 9U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 9U
                                                     : 0x0dU))
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 8U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 8U
                                                     : 0x0dU))))
                                                 : 
                                                ((0x00000100U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                  ? 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 6U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 6U
                                                     : 0x0dU))
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 5U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 5U
                                                     : 0x0dU)))
                                                  : 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 4U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 4U
                                                     : 0x0dU))
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 3U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 3U
                                                     : 0x0dU))))))
                                         : ((0x00000400U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                             ? ((0x00000200U 
                                                 & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                 ? 0x0dU
                                                 : 
                                                ((0x00000100U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                  ? 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 0x0dU
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0x0dU
                                                     : 7U)
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 7U
                                                     : 0x0dU)))
                                                  : 0x0dU))
                                             : ((0x00000200U 
                                                 & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                 ? 0x0dU
                                                 : 
                                                ((0x00000100U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                  ? 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 0x0dU
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 2U
                                                     : 0x0dU)))
                                                  : 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                   ? 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 1U
                                                     : 0x0dU))
                                                   : 
                                                  ((0x00000040U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                                                     ? 0U
                                                     : 0x0dU)))))))));
    if ((1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                >> 0x00000013U) & (~ ((8U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op)) 
                                      | (9U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op = 0x0dU;
    }
    if (((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
             >> 0x00000013U)) & ((8U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op)) 
                                 | (9U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op = 0x0dU;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__nf 
        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl 
                 >> 1U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set 
        = (0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                  >> 6U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_set 
        = (0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                  >> 5U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit 
        = ((2U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                         >> 6U))) ? 0x20U : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                                                >> 6U)))
                                              ? 0x40U
                                              : 0x10U));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit 
        = ((2U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                         >> 6U))) ? 0x20U : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                                                >> 6U)))
                                              ? 0x40U
                                              : 0x10U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx 
        = (0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_vidx 
        = (0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_cur);
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc_next = 
        (0x03ffffffU & ((IData)(0x004b0000U) + vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3fU;
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x3fU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x3fU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3fU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x3eU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x3eU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3eU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x3dU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x3dU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3dU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x3cU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x3cU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3cU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x3bU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x3bU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3bU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x3aU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x3aU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3aU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x39U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x39U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x39U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x38U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x38U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x38U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x37U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x37U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x37U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x36U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x36U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x36U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x35U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x35U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x35U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x34U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x34U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x34U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x33U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x33U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x33U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x32U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x32U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x32U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x31U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x31U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x31U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x30U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x30U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x30U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x2fU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x2fU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2fU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x2eU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x2eU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2eU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x2dU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x2dU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2dU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x2cU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x2cU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2cU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x2bU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x2bU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2bU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x2aU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x2aU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2aU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x29U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x29U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x29U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x28U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x28U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x28U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x27U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x27U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x27U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x26U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x26U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x26U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x25U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x25U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x25U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x24U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x24U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x24U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x23U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x23U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x23U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x22U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x22U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x22U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x21U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x21U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x21U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x20U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x20U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x20U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x1fU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x1fU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1fU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x1eU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x1eU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1eU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x1dU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x1dU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1dU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x1cU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x1cU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1cU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x1bU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x1bU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1bU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x1aU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x1aU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1aU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x19U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x19U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x19U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x18U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x18U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x18U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x17U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x17U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x17U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x16U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x16U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x16U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x15U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x15U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x15U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x14U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x14U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x14U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x13U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x13U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x13U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x12U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x12U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x12U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x11U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x11U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x11U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x10U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x10U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x10U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x0fU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x0fU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0fU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x0eU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x0eU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0eU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x0dU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x0dU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0dU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x0cU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x0cU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0cU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x0bU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x0bU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0bU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0x0aU][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                           >> 0x0aU)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0aU;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [9U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 9U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 9U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [8U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 8U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 8U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [7U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 7U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 7U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [6U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 6U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 6U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [5U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 5U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 5U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [4U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 4U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 4U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [3U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 3U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 3U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [2U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 2U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 2U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [1U][0U]) & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
                                        >> 1U)))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 1U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                [0U][0U]) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x3fU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3fU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x3eU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3eU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x3dU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3dU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x3cU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3cU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x3bU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3bU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x3aU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x3aU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x39U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x39U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x38U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x38U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x37U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x37U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x36U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x36U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x35U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x35U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x34U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x34U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x33U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x33U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x32U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x32U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x31U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x31U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x30U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x30U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x2fU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2fU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x2eU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2eU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x2dU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2dU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x2cU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2cU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x2bU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2bU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x2aU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x2aU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x29U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x29U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x28U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x28U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x27U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x27U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x26U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x26U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x25U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x25U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x24U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x24U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x23U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x23U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x22U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x22U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x21U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x21U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x20U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x20U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x1fU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1fU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x1eU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1eU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x1dU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1dU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x1cU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1cU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x1bU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1bU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x1aU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x1aU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x19U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x19U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x18U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x18U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x17U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x17U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x16U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x16U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x15U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x15U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x14U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x14U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x13U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x13U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x12U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x12U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x11U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x11U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x10U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x10U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x0fU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0fU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x0eU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0eU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x0dU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0dU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x0cU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0cU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x0bU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0bU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0x0aU][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0x0aU;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [9U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 9U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [8U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 8U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [7U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 7U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [6U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 6U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [5U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 5U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [4U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 4U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [3U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 3U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [2U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 2U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [1U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 1U;
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                  [0U][0U] >> 6U)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in 
        = (1U & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14) 
                     >> 4U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in 
        = (1U & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14) 
                     >> 4U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__dv_trial 
        = (0x3fffffffffffffffULL & (VL_SHIFTL_QQI(62,62,32, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem, 1U) 
                                    - vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__den));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_clk 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11) 
                         >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
            : ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11) 
                             >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_tick)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_clk 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11) 
                         >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
            : ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11) 
                             >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_tick)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__accept 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done)) 
              & (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__accept 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st)) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_done)) 
              & (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 0U;
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                         >> 5U)))]) 
               & (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__mru
                  [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                           >> 5U)))])))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 0U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                   [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                            >> 5U)))] 
                   >> 1U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__mru
                                 [(0x0000007fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                          >> 5U)))] 
                                 >> 1U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 1U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                   [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                            >> 5U)))] 
                   >> 2U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__mru
                                 [(0x0000007fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                          >> 5U)))] 
                                 >> 2U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 2U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                   [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                            >> 5U)))] 
                   >> 3U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__mru
                                 [(0x0000007fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                          >> 5U)))] 
                                 >> 3U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 3U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                         >> 5U)))]) 
               & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                     [0U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                          >> 5U)) >> 5U))] 
                     >> (0x0000001fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                >> 5U)))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 0U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                   [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                            >> 5U)))] 
                   >> 1U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                 [1U][(3U & ((IData)(
                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                      >> 5U)) 
                                             >> 5U))] 
                                 >> (0x0000001fU & (IData)(
                                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                            >> 5U)))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 1U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                   [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                            >> 5U)))] 
                   >> 2U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                 [2U][(3U & ((IData)(
                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                      >> 5U)) 
                                             >> 5U))] 
                                 >> (0x0000001fU & (IData)(
                                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                            >> 5U)))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 2U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck
                   [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                            >> 5U)))] 
                   >> 3U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                 [3U][(3U & ((IData)(
                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                      >> 5U)) 
                                             >> 5U))] 
                                 >> (0x0000001fU & (IData)(
                                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                            >> 5U)))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = 3U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry[0U] 
        = (0x00000040U | ((0xffffff80U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry[0U]) 
                          | ((0x00000038U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry 
                                             << 1U)) 
                             | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level) 
                                << 1U))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry[0U] 
        = ((0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry[0U]) 
           | ((IData)((((QData)((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va 
                                         >> 0x0000000cU))) 
                        << 0x0000002aU) | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx)) 
                                            << 0x0000001aU) 
                                           | (QData)((IData)(
                                                             (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry 
                                                              >> 6U)))))) 
              << 7U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry[1U] 
        = (((IData)((((QData)((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va 
                                       >> 0x0000000cU))) 
                      << 0x0000002aU) | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx)) 
                                          << 0x0000001aU) 
                                         | (QData)((IData)(
                                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry 
                                                            >> 6U)))))) 
            >> 0x00000019U) | ((IData)(((((QData)((IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va 
                                                           >> 0x0000000cU))) 
                                          << 0x0000002aU) 
                                         | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx)) 
                                             << 0x0000001aU) 
                                            | (QData)((IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry 
                                                               >> 6U))))) 
                                        >> 0x00000020U)) 
                               << 7U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry[2U] 
        = (0x0000001fU & ((IData)(((((QData)((IData)(
                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va 
                                                      >> 0x0000000cU))) 
                                     << 0x0000002aU) 
                                    | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx)) 
                                        << 0x0000001aU) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry 
                                                          >> 6U))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000019U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__da_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__da_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__da_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__da_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem2 
        = ((0x3ffffffffffffffcULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                                     << 2U)) | (QData)((IData)(
                                                               (3U 
                                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] 
                                                                   >> 0x00000012U)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sq_trial 
        = (0x3fffffffffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem2 
                                    - (1ULL | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                                               << 2U))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata[4U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_data__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata[4U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_data__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata[4U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_tag__b_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_inval;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push2 
        = (1U & (IData)((vlSelfRef.cpu_sim__DOT__sn 
                         >> 0x00000023U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_pushes 
        = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push) 
                 + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push2)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_push 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_inval;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_push2 
        = ((IData)((vlSelfRef.cpu_sim__DOT__sn >> 0x00000023U)) 
           & (8U != (0x0000000fU & (IData)(vlSelfRef.cpu_sim__DOT__sn))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_pushes 
        = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_push) 
                 + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_push2)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_we = 0U;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11) 
                         >> 3U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
            : ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11) 
                             >> 3U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_tick)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11) 
                         >> 3U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
            : ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11) 
                             >> 3U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_tick)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_fault 
        = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have)
                  ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_fault)
                  : (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs)));
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                  >> 0x0000000dU)))) {
        if ((0x00001000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                              >> 0x0000000aU)))) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 9U)))) {
                        if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 7U)))) {
                                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                              >> 6U)))) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
            if ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                              >> 9U)))) {
                    if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 6U)))) {
                                if ((0x00000020U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                 >> 9U)))) {
                if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 5U)))) {
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                            }
                        }
                    } else if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 5U)))) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                        }
                    }
                } else if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 5U)))) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                        }
                    }
                } else if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 5U)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                    }
                }
            }
        } else if ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                          >> 9U)))) {
                if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 7U)))) {
                        if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 5U)))) {
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_we = 1U;
    } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                   >> 0x0000000eU))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_we = 1U;
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_data_n 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5) 
                         >> 5U))) ? ([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__d 
                    = (0x0000001fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf) 
                                      >> 3U));
                {
                    if ((0x1eU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__d))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout = 1U;
                        goto __Vlabel0;
                    }
                    if ((0x0eU == (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__d) 
                                                  >> 1U)))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout = 2U;
                        goto __Vlabel0;
                    }
                    if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__d) 
                                      >> 2U)))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout = 3U;
                        goto __Vlabel0;
                    }
                    if ((2U == (3U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__d) 
                                      >> 3U)))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout = 4U;
                        goto __Vlabel0;
                    }
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout = 5U;
                    __Vlabel0: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__sel 
                    = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5) 
                             >> 5U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__Vfuncout 
                    = ((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__sel))
                        ? 5U : ((1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__sel))
                                 ? 7U : ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__sel))
                                          ? 6U : 8U)));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__Vfuncout)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_data_n 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5) 
                         >> 5U))) ? ([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__d 
                    = (0x0000001fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf) 
                                      >> 3U));
                {
                    if ((0x1eU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__d))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout = 1U;
                        goto __Vlabel1;
                    }
                    if ((0x0eU == (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__d) 
                                                  >> 1U)))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout = 2U;
                        goto __Vlabel1;
                    }
                    if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__d) 
                                      >> 2U)))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout = 3U;
                        goto __Vlabel1;
                    }
                    if ((2U == (3U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__d) 
                                      >> 3U)))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout = 4U;
                        goto __Vlabel1;
                    }
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout = 5U;
                    __Vlabel1: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__sel 
                    = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5) 
                             >> 5U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__Vfuncout 
                    = ((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__sel))
                        ? 5U : ((1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__sel))
                                 ? 7U : ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__sel))
                                          ? 6U : 8U)));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__Vfuncout)));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_inst 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_inst;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_inst 
            = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                       >> 2U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_17 
        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc 
           == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_rd 
        = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                          >> 0x00000016U));
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel 
        = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3) 
                 >> 6U));
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__Vfuncout 
        = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel))
            ? 5U : ((1U == (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel))
                     ? 7U : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel))
                              ? 6U : 8U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_data_n 
        = __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel 
        = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3) 
                 >> 6U));
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__Vfuncout 
        = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel))
            ? 5U : ((1U == (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel))
                     ? 7U : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel))
                              ? 6U : 8U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_data_n 
        = __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__Vfuncout;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
        [(0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                         >> 0x0000000fU))];
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
        [(0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                         >> 1U))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner = 
        (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_probe) 
          | (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws)))
          ? 0U : ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_inst)
                   ? 2U : 1U));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rr8 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))
            ? (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
               [0U]) : 0x000000ffU);
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rr8 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))
            ? (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
               [0U]) : 0x000000ffU);
    if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = 
            (0xfaU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr15));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = 
            (0xfaU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr15));
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid) 
           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_pc 
              == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live 
        = (5U | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break) 
                  << 4U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun) 
                            << 3U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live 
        = (5U | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break) 
                  << 4U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun) 
                            << 3U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_a 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count)) 
           & ((vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
               [0U] >> 8U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun) 
                              | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err) 
                                 & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                    >> 2U)))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_b 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)) 
           & ((vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
               [0U] >> 8U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun) 
                              | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err) 
                                 & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                    >> 2U)))));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dsigned) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__qneg) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ovf_pre) 
                   | (0x80000000U < vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf)
                    ? 0x80000000U : (- vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo));
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ovf_pre) 
                   | (0x7fffffffU < vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf)
                    ? 0x7fffffffU : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo);
        }
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ovf_pre) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres = 0xffffffffU;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_shift 
        = (IData)(((0x24000000U == (0x3c000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])) 
                   & (0U != (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                   >> 0x00000018U)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_logic 
        = (((1U <= (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                   >> 0x00000018U))) 
            & (3U >= (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                     >> 0x00000018U)))) 
           | ((5U <= (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                     >> 0x00000018U))) 
              & (7U >= (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                       >> 0x00000018U)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 0U;
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                  >> 0x0000000dU)))) {
        if ((0x00001000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                              >> 0x0000000aU)))) {
                    if ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 8U)))) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 7U)))) {
                                if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                                  >> 5U)))) {
                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                         >> 8U)))) {
                        if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                            if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                              >> 5U)))) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
            if ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                              >> 9U)))) {
                    if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 6U)))) {
                                if ((0x00000020U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                              >> 8U)))) {
                    if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 5U)))) {
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                            }
                        }
                    } else if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 5U)))) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                        }
                    }
                }
            } else if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                      >> 5U)))) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                        }
                    }
                } else if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 5U)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                    }
                }
            } else if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 5U)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                    }
                }
            } else if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                              >> 5U)))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                }
            }
        } else if ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                          >> 9U)))) {
                if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 7U)))) {
                        if ((0x00000040U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                          >> 5U)))) {
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_is_md 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap)) 
              & ((7U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                         >> 0x0000001bU)) | (8U == 
                                             (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                              >> 0x0000001bU)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid 
        = ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                    >> 0x00000022U)) & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard)) 
                                        & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending)));
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp 
            = (7U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp) 
                     - (IData)(1U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_rd 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second)
                ? 0x12U : 0x11U);
    } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                   >> 0x0000000eU))) {
        if (((0x16U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                        >> 0x0000001bU)) | (0x17U == 
                                            (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                             >> 0x0000001bU)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_newcwp;
        }
        if ((IData)(((0x00000c00U == (0x00000c00U & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U])) 
                     & (0xc0000000U == (0xf8000000U 
                                        & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U]))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_rd 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second)
                    ? (1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                            >> 0x00000016U)))
                    : (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                      >> 0x00000016U)));
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ser_inflight 
        = (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
              & ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c 
                                = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                   >> 0x0000001bU);
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__Vfuncout 
                                = (((((((0x16U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c)) 
                                        | (0x17U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c))) 
                                       | (0x13U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c))) 
                                      | (0x0eU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c))) 
                                     | (0x0fU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c))) 
                                    | (0x10U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c))) 
                                   | (0x0dU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c)));
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__Vfuncout))) 
             | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
                & ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c 
                                = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                   >> 0x0000001bU);
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__Vfuncout 
                                = (((((((0x16U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c)) 
                                        | (0x17U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c))) 
                                       | (0x13U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c))) 
                                      | (0x0eU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c))) 
                                     | (0x0fU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c))) 
                                    | (0x10U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c))) 
                                   | (0x0dU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c)));
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__Vfuncout)))) 
            | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
               & ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c 
                            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                               >> 0x0000001bU);
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__Vfuncout 
                            = (((((((0x16U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c)) 
                                    | (0x17U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c))) 
                                   | (0x13U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c))) 
                                  | (0x0eU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c))) 
                                 | (0x0fU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c))) 
                                | (0x10U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c))) 
                               | (0x0dU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c)));
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__Vfuncout)))) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ser_commit_q));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__snoop_go 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__qs)) 
           & ((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st)) 
              & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_count))));
    cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____VdfgRegularize_had306f9e_0_1 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ds)) 
           & (7U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap)) 
              & ((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                            >> 0x0000001bU)) | ((0x19U 
                                                 == 
                                                 (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x0000001bU)) 
                                                | ((0x1aU 
                                                    == 
                                                    (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                     >> 0x0000001bU)) 
                                                   | ((0x1bU 
                                                       == 
                                                       (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                        >> 0x0000001bU)) 
                                                      | (0x1cU 
                                                         == 
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                          >> 0x0000001bU))))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs)) 
           & ((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
              & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____VdfgRegularize_h3ecca47e_0_1 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds)) 
           & (6U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[3U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[4U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
        = ((0xf80007ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]) 
           | (((0x0000f800U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                               >> 0x0000000eU)) | (
                                                   (0x000007c0U 
                                                    & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                       >> 8U)) 
                                                   | ((0x0000003eU 
                                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                            >> 0x0000000dU))))) 
              << 0x0000000bU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[4U] 
        = ((0x000007ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[4U]) 
           | (0xfffff800U & (((- (IData)((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                >> 0x0000000cU)))) 
                              << 0x00000018U) | (0x00fff800U 
                                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                    << 0x0000000bU)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
        = ((0xfffff800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]) 
           | (0x000007ffU & ((- (IData)((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                               >> 0x0000000cU)))) 
                             >> 8U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[3U] 
        = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[3U]) 
           | (((0x00003fc0U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                               << 1U)) | (0x0000003fU 
                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                             >> 0x00000013U))) 
              << 0x00000018U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[4U] 
        = ((0xfffff800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[4U]) 
           | (0x00ffffffU & ((0x00ffffc0U & (((0x0000001eU 
                                               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                  >> 0x00000018U)) 
                                              | (1U 
                                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                    >> 0x0000001dU))) 
                                             << 6U)) 
                             | (((0x00003fc0U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                 << 1U)) 
                                 | (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                   >> 0x00000013U))) 
                                >> 8U))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[2U] 
        = ((0x00007fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[2U]) 
           | ((IData)((((QData)((IData)((0x000001ffU 
                                         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                            >> 5U)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                           << 2U))))) 
              << 0x0000000fU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[3U] 
        = ((0xff000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[3U]) 
           | (((IData)((((QData)((IData)((0x000001ffU 
                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                             >> 5U)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                            << 2U))))) 
               >> 0x00000011U) | ((IData)(((((QData)((IData)(
                                                             (0x000001ffU 
                                                              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                                 >> 5U)))) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                               << 2U)))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000fU)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[1U] 
        = ((0x00007fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[1U]) 
           | (0xffff8000U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                             << 0x00000011U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[2U] 
        = ((0xffff8000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[2U]) 
           | (0x00007fffU & ((0x00007f80U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                            >> 0x15U)))) 
                                             << 7U)) 
                             | (0x0000007fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                               >> 0x0000000fU)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
        = ((0x00007fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]) 
           | (0xffff8000U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                             << 0x00000019U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[1U] 
        = ((0xffff8000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[1U]) 
           | (0x00007fffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                             >> 7U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
        = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
    if ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
         >> 0x0000001fU)) {
        if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                = ((0xfffffdffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]) 
                   | (0x00000200U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                     >> 0x0000000eU)));
            if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0xd0000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00000800U | (0xfffff3ffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00000100U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        } else {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                        }
                    } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0xd0000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0xfffff3ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                    }
                } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0xc0000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00001400U | (0xffffe3ffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    }
                } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0xc0000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00001000U | (0xffffe3ffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                }
            } else if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0xc8000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000c00U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0xc8000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000400U | (0xfffff3ffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                    }
                } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0xc8000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0xfffff3ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0xc8000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00000800U | (0xfffff3ffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                }
            } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0xc0000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00000c00U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0xc0000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00000400U | (0xfffff3ffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                }
            } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0xc0000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0xfffff3ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0xc0000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0x00000800U | (0xfffff3ffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
            }
            if ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0xffffbfffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0xffffefffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0xfffffeffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                if ((0x00800000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                    } else if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x08000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (1U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0x08000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (1U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        } else {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                        }
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x08000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (1U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    }
                } else {
                    if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                    } else if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                    = (0xe0000000U 
                                       | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                    = (0x00000c00U 
                                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                            } else {
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                    = (0xe0000000U 
                                       | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                    = (0x00000c00U 
                                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                    = (0x00000040U 
                                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                    = (0x00000010U 
                                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                            }
                        } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0xe0000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00000800U | (0xfffff3ffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00000080U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        } else {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0xe0000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00000800U | (0xfffff3ffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                        }
                    } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0xd8000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00000c00U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        } else {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                        }
                    } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0xd8000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000800U | (0xfffff3ffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000080U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0xd8000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000800U | (0xfffff3ffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]));
                    }
                    if (((0U != (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                 >> 0x0000001bU)) & 
                         (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (2U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    }
                }
            } else if (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                         >> 9U) & (0U != (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                          >> 0x0000001bU)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
            }
        } else if ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
            if ((0x00800000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                        } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0xb8000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        } else {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                = (0xb0000000U | (0x07ffffffU 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        }
                    } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]) 
                               | (((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)
                                    ? 0x15U : 0x14U) 
                                  << 0x0000001bU));
                    } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x98000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x90000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    }
                } else if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x08000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (1U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x88000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef)))) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                                = (2U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        }
                    }
                } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x80000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x78000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    }
                } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x70000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]) 
                           | (((0U == (0x0000001fU 
                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                          >> 0x00000019U)))
                                ? 0x0dU : 1U) << 0x0000001bU));
                }
            } else if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x60000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            = (0x58000000U | (0x07ffffffU 
                                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                            = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    }
                } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x50000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00000010U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x48000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = ((0xffffffdfU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]) 
                           | ((IData)((0x0003c000U 
                                       == (0x3e07c000U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst))) 
                              << 5U));
                }
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x30000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
            }
        } else if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
            if ((0x00200000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x40000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = ((0xffff8fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]) 
                           | (0xfffff000U & (0x00004000U 
                                             | (((2U 
                                                  & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                     >> 0x00000016U)) 
                                                 | (1U 
                                                    & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                       >> 0x00000013U))) 
                                                << 0x0000000cU))));
                } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                        = (0x30000000U | (0x07ffffffU 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                }
            } else if ((0x00100000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x38000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = ((0xffff8fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]) 
                       | (0xfffff000U & (0x00004000U 
                                         | (((2U & 
                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                               >> 0x00000016U)) 
                                             | (1U 
                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst 
                                                   >> 0x00000013U))) 
                                            << 0x0000000cU))));
            } else if ((0x00080000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x30000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
            }
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                = (0x30000000U | (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
        }
    } else if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
            = (0x28000000U | (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
            = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
            = (0x03c00000U | (0xf83fffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
    } else if ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
        if ((0x00800000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
            if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x08000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                    = (1U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                    = (0x20000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
                if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef)))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                        = (2U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
                }
            }
        } else if ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                = (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]);
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                = (0x10000000U | (0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                = (0x00004000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
        }
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
            = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]) 
               | (((0x00800000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)
                    ? ((0x00400000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst)
                        ? 0U : 3U) : 0U) << 0x0000001bU));
    }
    if ((0U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                >> 0x0000001bU))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
            = (8U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
    }
    if ((1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
                >> 4U) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U] 
            = (4U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U]);
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata[4U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_valid = 
        ((4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds)) 
         & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_done) 
            & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_err)));
    vlSelfRef.cpu_sim__DOT__wd_reset = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__error_q)) 
                                        & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__reg_go 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_ack)) 
           & (5U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
        = (((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                >> 8U)) & (0x1aU == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                     >> 0x0000001bU)))
            ? 0x00000000000000ffULL : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wdata);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_two_cycles 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap) 
               & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt))) 
              | (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)) 
                  & (0x00000c00U == (0x00000c00U & 
                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U]))) 
                 & (0xc0000000U == (0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[0U] 
        = (IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                    << 1U) | (QData)((IData)((0ULL 
                                              != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem)))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[1U] 
        = ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt)
              ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp) 
                 - (IData)(1U)) : ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp) 
                                   - (IData)(2U))) 
            << 0x0000001bU) | (IData)((((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                                         << 1U) | (QData)((IData)(
                                                                  (0ULL 
                                                                   != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem)))) 
                                       >> 0x00000020U)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[2U] 
        = ((0x00000200U & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[2U]) 
           | (0x000001ffU & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt)
                               ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp) 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp) 
                               - (IData)(2U))) >> 5U)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[2U] 
        = ((0x000001ffU & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[2U]) 
           | (0x000003ffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sign) 
                             << 9U)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0 
        = ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])
            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc_fwd 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
            & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap)) 
               & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wicc)))
            ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_icc)
            : (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
                & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)) 
                   & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wicc)))
                ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_icc)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc)));
    cpu_sim__DOT__u_cpu__DOT__mem_w[0U] = (IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                                                               >> 2U)))
                                                    ? (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry))
                                                    : 
                                                   ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry)) 
                                                    << 0x00000020U)));
    cpu_sim__DOT__u_cpu__DOT__mem_w[1U] = (IData)((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                                                                >> 2U)))
                                                     ? (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry))
                                                     : 
                                                    ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry)) 
                                                     << 0x00000020U)) 
                                                   >> 0x00000020U));
    cpu_sim__DOT__u_cpu__DOT__mem_w[2U] = (((IData)(
                                                    (0x00000001ffffffffULL 
                                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                                                        >> 3U))) 
                                            << 0x0000000bU) 
                                           | ((1U & (IData)(
                                                            (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                                                             >> 2U)))
                                               ? 0x0fU
                                               : 0xf0U));
    cpu_sim__DOT__u_cpu__DOT__mem_w[3U] = ((0x0000c000U 
                                            & cpu_sim__DOT__u_cpu__DOT__mem_w[3U]) 
                                           | (0x0000ffffU 
                                              & (((IData)(
                                                          (0x00000001ffffffffULL 
                                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                                                              >> 3U))) 
                                                  >> 0x00000015U) 
                                                 | ((IData)(
                                                            ((0x00000001ffffffffULL 
                                                              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                                                                 >> 3U)) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000bU))));
    cpu_sim__DOT__u_cpu__DOT__mem_w[3U] = ((0x00003fffU 
                                            & cpu_sim__DOT__u_cpu__DOT__mem_w[3U]) 
                                           | (0x0000c000U 
                                              & ((((1U 
                                                    == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws)) 
                                                   | (3U 
                                                      == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws))) 
                                                  << 0x0000000fU) 
                                                 | ((3U 
                                                     == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws)) 
                                                    << 0x0000000eU))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                        = (0x0000c000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[0U] 
                        = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[1U] 
                        = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata 
                                   >> 0x00000020U));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U] 
                        = (((IData)((0x00000001ffffffffULL 
                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                        >> 3U))) << 0x0000000bU) 
                           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                        = ((0x0000f000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x00000001ffffffffULL 
                                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                          >> 3U))) 
                                              >> 0x00000015U) 
                                             | ((IData)(
                                                        ((0x00000001ffffffffULL 
                                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                             >> 3U)) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000bU))));
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                        = (0x00008000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U] 
                        = (IData)((0x0000100000000000ULL 
                                   | ((0x00000ffffffff800ULL 
                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                          << 8U)) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be)))));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                        = ((0x0000e000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                           | (0x0000ffffU & (IData)(
                                                    ((0x0000100000000000ULL 
                                                      | ((0x00000ffffffff800ULL 
                                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                             << 8U)) 
                                                         | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be)))) 
                                                     >> 0x00000020U))));
                }
            } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = ((0x00003fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                       | (0x0000c000U & (0x00008000U 
                                         | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_we) 
                                            << 0x0000000eU))));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[0U] 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[1U] 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata 
                               >> 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U] 
                    = (((IData)((0x00000001ffffffffULL 
                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 3U))) << 0x0000000bU) 
                       | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = ((0x0000f000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                       | (0x0000ffffU & (((IData)((0x00000001ffffffffULL 
                                                   & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                      >> 3U))) 
                                          >> 0x00000015U) 
                                         | ((IData)(
                                                    ((0x00000001ffffffffULL 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 3U)) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000bU))));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = ((0x0000efffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                       | (0x0000ffffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__single_lock) 
                                         << 0x0000000cU)));
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = (0x0000c000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[0U] 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[1U] 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata 
                               >> 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U] 
                    = (((IData)((0x00000001ffffffffULL 
                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 3U))) << 0x0000000bU) 
                       | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = ((0x0000f000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                       | (0x0000ffffU & (((IData)((0x00000001ffffffffULL 
                                                   & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                      >> 3U))) 
                                          >> 0x00000015U) 
                                         | ((IData)(
                                                    ((0x00000001ffffffffULL 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 3U)) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000bU))));
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = (0x00008000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = (0x00002000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U] 
                    = (IData)((0x00000000000000ffULL 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & (IData)(
                                                             (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                              >> 5U))))) 
                                  << 0x0000000dU)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                    = ((0x0000f000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U]) 
                       | (0x0000ffffU & (IData)(((0x00000000000000ffULL 
                                                  | ((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                                >> 5U))))) 
                                                     << 0x0000000dU)) 
                                                 >> 0x00000020U))));
            }
        }
    }
    cpu_sim__DOT__u_cpu__DOT__mem_d[0U] = 0U;
    cpu_sim__DOT__u_cpu__DOT__mem_d[1U] = 0U;
    cpu_sim__DOT__u_cpu__DOT__mem_d[2U] = 0U;
    cpu_sim__DOT__u_cpu__DOT__mem_d[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
                if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
                    cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                        = (0x0000c000U | cpu_sim__DOT__u_cpu__DOT__mem_d[3U]);
                    cpu_sim__DOT__u_cpu__DOT__mem_d[0U] 
                        = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata);
                    cpu_sim__DOT__u_cpu__DOT__mem_d[1U] 
                        = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata 
                                   >> 0x00000020U));
                    cpu_sim__DOT__u_cpu__DOT__mem_d[2U] 
                        = (((IData)((0x00000001ffffffffULL 
                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                        >> 3U))) << 0x0000000bU) 
                           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be));
                    cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                        = ((0x0000f000U & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x00000001ffffffffULL 
                                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                          >> 3U))) 
                                              >> 0x00000015U) 
                                             | ((IData)(
                                                        ((0x00000001ffffffffULL 
                                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                             >> 3U)) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000bU))));
                } else {
                    cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                        = (0x00008000U | cpu_sim__DOT__u_cpu__DOT__mem_d[3U]);
                    cpu_sim__DOT__u_cpu__DOT__mem_d[2U] 
                        = (IData)((0x0000100000000000ULL 
                                   | ((0x00000ffffffff800ULL 
                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                          << 8U)) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be)))));
                    cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                        = ((0x0000e000U & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                           | (0x0000ffffU & (IData)(
                                                    ((0x0000100000000000ULL 
                                                      | ((0x00000ffffffff800ULL 
                                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                             << 8U)) 
                                                         | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be)))) 
                                                     >> 0x00000020U))));
                }
            } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = ((0x00003fffU & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                       | (0x0000c000U & (0x00008000U 
                                         | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_we) 
                                            << 0x0000000eU))));
                cpu_sim__DOT__u_cpu__DOT__mem_d[0U] 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata);
                cpu_sim__DOT__u_cpu__DOT__mem_d[1U] 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata 
                               >> 0x00000020U));
                cpu_sim__DOT__u_cpu__DOT__mem_d[2U] 
                    = (((IData)((0x00000001ffffffffULL 
                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                    >> 3U))) << 0x0000000bU) 
                       | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be));
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = ((0x0000f000U & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                       | (0x0000ffffU & (((IData)((0x00000001ffffffffULL 
                                                   & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                      >> 3U))) 
                                          >> 0x00000015U) 
                                         | ((IData)(
                                                    ((0x00000001ffffffffULL 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                         >> 3U)) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000bU))));
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = ((0x0000efffU & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                       | (0x0000ffffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__single_lock) 
                                         << 0x0000000cU)));
            } else {
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = (0x0000c000U | cpu_sim__DOT__u_cpu__DOT__mem_d[3U]);
                cpu_sim__DOT__u_cpu__DOT__mem_d[0U] 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata);
                cpu_sim__DOT__u_cpu__DOT__mem_d[1U] 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata 
                               >> 0x00000020U));
                cpu_sim__DOT__u_cpu__DOT__mem_d[2U] 
                    = (((IData)((0x00000001ffffffffULL 
                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                    >> 3U))) << 0x0000000bU) 
                       | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be));
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = ((0x0000f000U & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                       | (0x0000ffffU & (((IData)((0x00000001ffffffffULL 
                                                   & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                      >> 3U))) 
                                          >> 0x00000015U) 
                                         | ((IData)(
                                                    ((0x00000001ffffffffULL 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                         >> 3U)) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000bU))));
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = (0x00008000U | cpu_sim__DOT__u_cpu__DOT__mem_d[3U]);
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = (0x00002000U | cpu_sim__DOT__u_cpu__DOT__mem_d[3U]);
                cpu_sim__DOT__u_cpu__DOT__mem_d[2U] 
                    = (IData)((0x00000000000000ffULL 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & (IData)(
                                                             (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                              >> 5U))))) 
                                  << 0x0000000dU)));
                cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                    = ((0x0000f000U & cpu_sim__DOT__u_cpu__DOT__mem_d[3U]) 
                       | (0x0000ffffU & (IData)(((0x00000000000000ffULL 
                                                  | ((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                                                >> 5U))))) 
                                                     << 0x0000000dU)) 
                                                 >> 0x00000020U))));
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi = (((QData)((IData)(
                                                               (1U 
                                                                == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is)))) 
                                               << 0x00000024U) 
                                              | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__i_va)) 
                                                  << 4U) 
                                                 | (QData)((IData)(
                                                                   (4U 
                                                                    | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__i_supv) 
                                                                       << 1U))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we = ((0x19U 
                                                  == 
                                                  (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                   >> 0x0000001bU)) 
                                                 | (0x1cU 
                                                    == 
                                                    (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                     >> 0x0000001bU)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh 
        = (0x0000003fU & ((IData)(0x34U) - ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                             << 7U) 
                                            | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                               >> 0x00000019U))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_mi 
        = (0x001fffffffffffffULL & ((0x001fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                         << 0x0000001cU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                           >> 4U))) 
                                    >> (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 0U;
    if ((VL_LTS_III(32, 0U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 4U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 1U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 5U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 2U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 6U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 3U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 7U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 4U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 8U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 5U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 9U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 6U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000000aU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 7U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000000bU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 8U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000000cU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 9U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000000dU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000aU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000000eU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000bU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000000fU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000cU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000010U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000dU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000011U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000eU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000012U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000013U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000010U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000014U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000011U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000015U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000012U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000016U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000013U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000017U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000014U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000018U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000015U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x00000019U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000016U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000001aU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000017U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000001bU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000018U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000001cU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000019U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000001dU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001aU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000001eU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001bU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
            >> 0x0000001fU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001cU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001dU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 1U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001eU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 2U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 3U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000020U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 4U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000021U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 5U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000022U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 6U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000023U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 7U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000024U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 8U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000025U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 9U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000026U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x0000000aU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000027U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x0000000bU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000028U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x0000000cU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000029U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x0000000dU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002aU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x0000000eU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002bU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x0000000fU))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002cU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000010U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002dU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000011U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002eU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000012U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000013U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000030U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000014U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000031U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000015U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000032U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000016U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000033U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000017U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    if ((VL_LTS_III(32, 0x00000034U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_sh)) 
         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
            >> 0x00000018U))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact = 1U;
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_iv 
        = (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_mi);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn 
        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                 >> 0x0000000cU));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size 
        = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                 >> 0x0000000aU));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__Vfuncout 
        = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size))
            ? ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn)
                ? (((- (IData)((1U & (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d 
                                              >> 7U))))) 
                    << 8U) | (0x000000ffU & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d)))
                : (0x000000ffU & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d)))
            : ((1U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size))
                ? ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn)
                    ? (((- (IData)((1U & (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d 
                                                  >> 0x0fU))))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d)))
                    : (0x0000ffffU & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d)))
                : ((3U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size))
                    ? (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d 
                               >> 0x20U)) : (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__Vfuncout;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff 
        = (IData)((((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                     ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                    >> 7U) ^ (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger 
        = (VL_GTS_III(14, (0x00003fffU & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                           << 7U) | 
                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                           >> 0x00000019U))), 
                      (0x00003fffU & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                       << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                 >> 0x00000019U)))) 
           | (((0x00003fffU & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                          >> 0x00000019U))) 
               == (0x00003fffU & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                   << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                             >> 0x00000019U)))) 
              & ((0x001fffffffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                              >> 4U))) 
                 >= (0x001fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                               << 0x0000001cU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                 >> 4U))))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ma 
        = (0x00fffffffffffff8ULL & (((QData)((IData)(
                                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                                     << 0x0000001fU) 
                                    | (0x7ffffffffffffff8ULL 
                                       & ((QData)((IData)(
                                                          vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                          >> 1U))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mb 
        = (0x00fffffffffffff8ULL & (((QData)((IData)(
                                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                     << 0x0000001fU) 
                                    | (0x7ffffffffffffff8ULL 
                                       & ((QData)((IData)(
                                                          vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                          >> 1U))));
    if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big 
            = (0x00003fffU & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                               << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                         >> 0x00000019U)));
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_big 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ma;
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mb;
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff 
            = (0x00003fffU & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                          >> 0x00000019U)) 
                              - ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                  << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                            >> 0x00000019U))));
    } else {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big 
            = (0x00003fffU & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                               << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                         >> 0x00000019U)));
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_big 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mb;
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ma;
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff 
            = (0x00003fffU & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                          >> 0x00000019U)) 
                              - ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                  << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                            >> 0x00000019U))));
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 0U;
    if ((0x003cU < (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small_al = 0ULL;
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky 
            = (0ULL != cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small);
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small_al 
            = (0x03ffffffffffffffULL & (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                                        >> (0x0000003fU 
                                            & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))));
        if ((VL_LTS_III(32, 0U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 1U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 1U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 2U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 2U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 3U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 3U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 4U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 4U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 5U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 5U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 6U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 6U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 7U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 7U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 8U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 8U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 9U, (0x0000003fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 9U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000000aU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x0aU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000000bU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x0bU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000000cU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x0cU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000000dU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x0dU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000000eU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x0eU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000000fU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x0fU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000010U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x10U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000011U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x11U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000012U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x12U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000013U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x13U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000014U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x14U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000015U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x15U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000016U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x16U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000017U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x17U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000018U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x18U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000019U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x19U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000001aU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x1aU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000001bU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x1bU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000001cU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x1cU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000001dU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x1dU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000001eU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x1eU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000001fU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x1fU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000020U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x20U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000021U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x21U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000022U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x22U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000023U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x23U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000024U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x24U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000025U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x25U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000026U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x26U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000027U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x27U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000028U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x28U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000029U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x29U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000002aU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x2aU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000002bU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x2bU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000002cU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x2cU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000002dU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x2dU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000002eU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x2eU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x0000002fU, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x2fU)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000030U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x30U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000031U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x31U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000032U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x32U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000033U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x33U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000034U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x34U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000035U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x35U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000036U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x36U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000037U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x37U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000038U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x38U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
        if ((VL_LTS_III(32, 0x00000039U, (0x0000003fU 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ediff))) 
             & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small 
                        >> 0x39U)))) {
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky = 1U;
        }
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum 
        = (0x07ffffffffffffffULL & ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff)
                                     ? ((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_big 
                                         << 1U) - (
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small_al 
                                                    << 1U) 
                                                   | (QData)((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky))))
                                     : ((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_big 
                                         << 1U) + (
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small_al 
                                                    << 1U) 
                                                   | (QData)((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__al_sticky))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi = (0x000000ffU 
                                                  & ((0x00000200U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U])
                                                      ? 
                                                     ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[4U] 
                                                       << 2U) 
                                                      | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[3U] 
                                                         >> 0x0000001eU))
                                                      : 
                                                     ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s)
                                                       ? 0x0bU
                                                       : 0x0aU)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_load 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy)) 
              & (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5) 
                  >> 3U) & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_load 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy)) 
              & (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5) 
                  >> 3U) & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_we) 
           & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_rd)));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_rd;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__w = 0;
    {
        if ((8U > (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__Vfuncout 
                = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r;
            goto __Vlabel2;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__w)));
        __Vlabel2: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__Vfuncout;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_parity_bad 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
           & ([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__even 
                    = (1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                             >> 1U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_data_n)));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh 
                    = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p = 0U;
                if (VL_LTS_III(32, 0U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh)));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 1U)));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 2U)));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 3U)));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 4U)));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 5U)));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 6U)));
                }
                if (VL_LTS_III(32, 7U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                                    >> 7U)));
                }
                if (VL_LTS_III(32, 8U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p 
                        = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p) 
                           ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh) 
                              >> 8U));
                }
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__Vfuncout 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__even)
                              ? (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p)
                              : (~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__Vfuncout)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_parity_bad 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
           & ([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__even 
                    = (1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                             >> 1U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_data_n)));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh 
                    = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p = 0U;
                if (VL_LTS_III(32, 0U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh)));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 1U)));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 2U)));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 3U)));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 4U)));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 5U)));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 6U)));
                }
                if (VL_LTS_III(32, 7U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                                 ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                                    >> 7U)));
                }
                if (VL_LTS_III(32, 8U, (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p 
                        = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p) 
                           ^ ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh) 
                              >> 8U));
                }
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__Vfuncout 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__even)
                              ? (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p)
                              : (~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__Vfuncout)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc 
                 == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_change 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live) 
            ^ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_prev)) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr15) 
               >> 3U) & (0x00000017U | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun) 
                                        << 3U))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_change 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live) 
            ^ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_prev)) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr15) 
               >> 3U) & (0x00000017U | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun) 
                                        << 3U))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip = (((((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                                       >> 3U))) 
                                                  & ((1U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                                          >> 3U)))
                                                      ? 
                                                     (((0U 
                                                        != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count)) 
                                                       & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_first_armed)) 
                                                      | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_a))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                                           >> 3U)))
                                                       ? 
                                                      (0U 
                                                       != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))
                                                       : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_a)))) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_a) 
                                                    << 4U) 
                                                   | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_a) 
                                                      << 3U))) 
                                               | ((((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                                         >> 3U))) 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                                            >> 3U)))
                                                        ? 
                                                       (((0U 
                                                          != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)) 
                                                         & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_first_armed)) 
                                                        | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_b))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                                             >> 3U)))
                                                         ? 
                                                        (0U 
                                                         != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))
                                                         : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_b)))) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_b) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_b))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone)
            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[0U]);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_16 
        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc 
           == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_17)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_done 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem) 
           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[2U] 
              >> 2U));
    cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
            = ((0x00004000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                ? VL_SHIFTL_QQI(64,64,32, cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair, 0x00000020U)
                : ((QData)((IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair 
                                    >> 0x00000020U))) 
                   << 0x00000020U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
            = ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)
                ? VL_SHIFTL_QQI(64,64,32, cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair, 0x00000020U)
                : ((QData)((IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair 
                                    >> 0x00000020U))) 
                   << 0x00000020U));
    }
    VL_ASSIGNBIT_II(0U, cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way, 
                    (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata
                       [0U]) == (0x00ffffffU & (IData)(
                                                       (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                        >> 0x0cU)))) 
                     & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                      [0U], ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout 
                            = (0x0000007fU & (IData)(
                                                     (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                                                      >> 5U)));
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way, 
                    (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata
                       [1U]) == (0x00ffffffU & (IData)(
                                                       (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                        >> 0x0cU)))) 
                     & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                      [1U], ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout 
                            = (0x0000007fU & (IData)(
                                                     (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                                                      >> 5U)));
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way, 
                    (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata
                       [2U]) == (0x00ffffffU & (IData)(
                                                       (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                        >> 0x0cU)))) 
                     & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                      [2U], ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout 
                            = (0x0000007fU & (IData)(
                                                     (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                                                      >> 5U)));
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way, 
                    (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata
                       [3U]) == (0x00ffffffU & (IData)(
                                                       (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                                        >> 0x0cU)))) 
                     & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits
                                      [3U], ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout 
                            = (0x0000007fU & (IData)(
                                                     (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa 
                                                      >> 5U)));
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit 
        = (0U != (IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx = 0U;
    if ((8U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx = 3U;
    }
    if ((4U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx = 2U;
    }
    if ((2U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx = 1U;
    }
    if ((1U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 0U;
    if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
          & ((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                        >> 0x0000001bU)) | (0x1aU == 
                                            (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                             >> 0x0000001bU)))) 
         & (0U != (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                  >> 0x00000016U))))) {
        if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                             >> 0x00000011U)) == (0x0000001fU 
                                                  & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                                     >> 0x00000016U)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 1U;
        }
        if (((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                 >> 0x0000000bU)) & ((0x0000001fU & 
                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                       >> 0x0000000cU)) 
                                     == (0x0000001fU 
                                         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                            >> 0x00000016U))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 1U;
        }
        if ((((0x19U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                         >> 0x0000001bU)) | (0x1aU 
                                             == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                                 >> 0x0000001bU))) 
             & ((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                >> 0x00000016U)) == 
                (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                >> 0x00000016U))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 1U;
        }
        if ((IData)((((0x00000c00U == (0x00000c00U 
                                       & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[0U])) 
                      & (0xc8000000U == (0xf8000000U 
                                         & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U]))) 
                     & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                              >> 0x00000016U))) 
                        == (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                           >> 0x00000016U)))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 1U;
        }
        if ((IData)(((0x00000c00U == (0x00000c00U & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U])) 
                     & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                              >> 0x00000016U))) 
                        == (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                           >> 0x00000011U)))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 1U;
        }
        if ((IData)((((0x00000c00U == (0x00000c00U 
                                       & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U])) 
                      & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                            >> 0x0000000bU))) & ((1U 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                                        >> 0x00000016U))) 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                                                     >> 0x0000000cU)))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = 1U;
        }
    }
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 0U;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [0U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [0U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 6U)) >> 4U))] 
               >> (0x0000001eU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)) 
                                  << 1U))) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                              [0U][
                                              (3U & 
                                               ((IData)(
                                                        (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 6U)) 
                                                >> 4U))] 
                                              >> (0x0000001fU 
                                                  & (1U 
                                                     | (0x0000007eU 
                                                        & ((IData)(
                                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                    >> 6U)) 
                                                           << 1U)))))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 
        ((0x1eU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way)) 
         | (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [1U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [1U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 6U)) >> 4U))] 
               >> (0x0000001eU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)) 
                                  << 1U))) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                              [1U][
                                              (3U & 
                                               ((IData)(
                                                        (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 6U)) 
                                                >> 4U))] 
                                              >> (0x0000001fU 
                                                  & (1U 
                                                     | (0x0000007eU 
                                                        & ((IData)(
                                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                    >> 6U)) 
                                                           << 1U)))))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 
        ((0x1dU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0) 
            << 1U));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [2U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [2U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 6U)) >> 4U))] 
               >> (0x0000001eU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)) 
                                  << 1U))) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                              [2U][
                                              (3U & 
                                               ((IData)(
                                                        (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 6U)) 
                                                >> 4U))] 
                                              >> (0x0000001fU 
                                                  & (1U 
                                                     | (0x0000007eU 
                                                        & ((IData)(
                                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                    >> 6U)) 
                                                           << 1U)))))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 
        ((0x1bU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0) 
            << 2U));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [3U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [3U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 6U)) >> 4U))] 
               >> (0x0000001eU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)) 
                                  << 1U))) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                              [3U][
                                              (3U & 
                                               ((IData)(
                                                        (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 6U)) 
                                                >> 4U))] 
                                              >> (0x0000001fU 
                                                  & (1U 
                                                     | (0x0000007eU 
                                                        & ((IData)(
                                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                    >> 6U)) 
                                                           << 1U)))))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 
        ((0x17U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0) 
            << 3U));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [4U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [4U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                    >> 6U)) >> 4U))] 
               >> (0x0000001eU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)) 
                                  << 1U))) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                              [4U][
                                              (3U & 
                                               ((IData)(
                                                        (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                         >> 6U)) 
                                                >> 4U))] 
                                              >> (0x0000001fU 
                                                  & (1U 
                                                     | (0x0000007eU 
                                                        & ((IData)(
                                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                    >> 6U)) 
                                                           << 1U)))))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 
        ((0x0fU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0) 
            << 4U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_present 
        = (0U != (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = 0U;
    if ((0x00000010U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = 4U;
    }
    if ((8U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = 3U;
    }
    if ((4U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = 2U;
    }
    if ((2U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = 1U;
    }
    if ((1U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = 0U;
    }
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 0U;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [0U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [0U], ([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                                                  >> 5U)));
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 
        ((0x1eU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way)) 
         | (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [1U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [1U], ([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                                                  >> 5U)));
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 
        ((0x1dU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0) 
            << 1U));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [2U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [2U], ([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                                                  >> 5U)));
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 
        ((0x1bU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0) 
            << 2U));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [3U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [3U], ([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                                                  >> 5U)));
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 
        ((0x17U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0) 
            << 3U));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 
        = (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata
             [4U]) == (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                              >> 0x0cU)))) 
           & VL_BITSEL_IWII(128, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [4U], ([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa 
                                                  >> 5U)));
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout))));
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 
        ((0x0fU & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way)) 
         | ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0) 
            << 4U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit 
        = (0U != (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = 0U;
    if ((0x00000010U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = 4U;
    }
    if ((8U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = 3U;
    }
    if ((4U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = 2U;
    }
    if ((2U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = 1U;
    }
    if ((1U & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
                                                  | (IData)(vlSelfRef.cpu_sim__DOT__wd_reset));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second)) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_two_cycles));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl) 
            == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl))
            ? ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])
                ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits
                : ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])
                    ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits
                    : cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0))
            : cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc_fwd;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c 
        = (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                          >> 7U));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__n 
        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i) 
                 >> 3U));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__z 
        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i) 
                 >> 2U));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__v 
        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i) 
                 >> 1U));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__cc 
        = (1U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__i));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__r 
        = ((4U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
            ? ((2U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
                ? ((1U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
                    ? (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__v)
                    : (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__n))
                : ((1U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
                    ? (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__cc)
                    : ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__cc) 
                       | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__z))))
            : ((2U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
                ? ((1U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
                    ? ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__n) 
                       ^ (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__v))
                    : ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__z) 
                       | ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__n) 
                          ^ (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__v))))
                : ((1U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c)) 
                   && (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__z))));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__c))
                  ? (~ (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__r))
                  : (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__r)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__br_cond 
        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cond_true__23__Vfuncout;
    cpu_sim__DOT__u_cpu__DOT__owner_busy = (1U & ((1U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner_q))
                                                   ? 
                                                  (cpu_sim__DOT__u_cpu__DOT__mem_w[3U] 
                                                   >> 0x0000000fU)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner_q))
                                                    ? 
                                                   ((cpu_sim__DOT__u_cpu__DOT__mem_d[3U] 
                                                     >> 0x0000000fU) 
                                                    | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__locked_q))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner_q)) 
                                                    && (1U 
                                                        & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U] 
                                                           >> 0x0000000fU))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner = ((IData)(cpu_sim__DOT__u_cpu__DOT__owner_busy)
                                                  ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner_q)
                                                  : 
                                                 ((0x00008000U 
                                                   & cpu_sim__DOT__u_cpu__DOT__mem_w[3U])
                                                   ? 1U
                                                   : 
                                                  ((0x00008000U 
                                                    & cpu_sim__DOT__u_cpu__DOT__mem_d[3U])
                                                    ? 2U
                                                    : 
                                                   ((0x00008000U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U])
                                                     ? 3U
                                                     : 0U))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U] = 0U;
    if ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner))) {
        vlSelfRef.cpu_sim__DOT__mr[0U] = cpu_sim__DOT__u_cpu__DOT__mem_w[0U];
        vlSelfRef.cpu_sim__DOT__mr[1U] = cpu_sim__DOT__u_cpu__DOT__mem_w[1U];
        vlSelfRef.cpu_sim__DOT__mr[2U] = cpu_sim__DOT__u_cpu__DOT__mem_w[2U];
        vlSelfRef.cpu_sim__DOT__mr[3U] = cpu_sim__DOT__u_cpu__DOT__mem_w[3U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[0U] 
            = vlSelfRef.cpu_sim__DOT__ms[0U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[1U] 
            = vlSelfRef.cpu_sim__DOT__ms[1U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[2U] 
            = vlSelfRef.cpu_sim__DOT__ms[2U];
    } else if ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner))) {
        vlSelfRef.cpu_sim__DOT__mr[0U] = cpu_sim__DOT__u_cpu__DOT__mem_d[0U];
        vlSelfRef.cpu_sim__DOT__mr[1U] = cpu_sim__DOT__u_cpu__DOT__mem_d[1U];
        vlSelfRef.cpu_sim__DOT__mr[2U] = cpu_sim__DOT__u_cpu__DOT__mem_d[2U];
        vlSelfRef.cpu_sim__DOT__mr[3U] = cpu_sim__DOT__u_cpu__DOT__mem_d[3U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[0U] 
            = vlSelfRef.cpu_sim__DOT__ms[0U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[1U] 
            = vlSelfRef.cpu_sim__DOT__ms[1U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[2U] 
            = vlSelfRef.cpu_sim__DOT__ms[2U];
    } else if ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner))) {
        vlSelfRef.cpu_sim__DOT__mr[0U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[0U];
        vlSelfRef.cpu_sim__DOT__mr[1U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[1U];
        vlSelfRef.cpu_sim__DOT__mr[2U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[2U];
        vlSelfRef.cpu_sim__DOT__mr[3U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i[3U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[0U] 
            = vlSelfRef.cpu_sim__DOT__ms[0U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[1U] 
            = vlSelfRef.cpu_sim__DOT__ms[1U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U] 
            = vlSelfRef.cpu_sim__DOT__ms[2U];
    } else {
        vlSelfRef.cpu_sim__DOT__mr[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__mr[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__mr[2U] = 0U;
        vlSelfRef.cpu_sim__DOT__mr[3U] = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval 
        = (((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                       >> 0x0000001bU)) | (0x1aU == 
                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                            >> 0x0000001bU)))
            ? cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_result);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_masked = 
        ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl 
          >> 1U) & (9U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata = 0U;
    if ((4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata 
            = ((0x00001000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                ? ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                    ? 0U : ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                             ? ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                 ? 0U : ((0x00000100U 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                          ? 0U : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar))
                             : ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                 ? ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                     ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr
                                     : 0U) : ((0x00000100U 
                                               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                               ? 0U
                                               : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__trcr))))
                : ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                    ? ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                        ? ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                            ? 0U : ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                     ? 0x01000001U : 0U))
                        : 0U) : ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                  ? ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                      ? ((0x00000100U 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                          ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wd_flag) 
                                             << 2U)
                                          : 0U) : (
                                                   (0x00000100U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                                    ? 0U
                                                    : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar))
                                  : ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                      ? ((0x00000100U 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                          ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr
                                          : (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx))
                                      : ((0x00000100U 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                                          ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctpr
                                          : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl)))));
    } else if ((6U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) {
        if ((0x00000400U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata = 0U;
        } else if ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)) {
            if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata 
                    = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                       [(0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                        >> 0x0000000cU))][0U]);
            } else {
                vlSelfRef.__Vfunc_tlb_pte_image__42__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [(0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                     >> 0x0000000cU))][0U];
                vlSelfRef.__Vfunc_tlb_pte_image__42__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [(0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                     >> 0x0000000cU))][1U];
                vlSelfRef.__Vfunc_tlb_pte_image__42__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [(0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                     >> 0x0000000cU))][2U];
                vlSelfRef.__Vfunc_tlb_pte_image__42__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tlb_pte_image__42__e[1U] 
                        << 0x0000001fU) | (vlSelfRef.__Vfunc_tlb_pte_image__42__e[0U] 
                                           >> 1U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata 
                    = vlSelfRef.__Vfunc_tlb_pte_image__42__Vfuncout;
            }
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata 
                = ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)
                    ? (0x0000ffffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                      [(0x0000003fU 
                                        & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                           >> 0x0000000cU))][1U] 
                                      >> 1U)) : (0xfffff000U 
                                                 & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                                     [
                                                     (0x0000003fU 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                         >> 0x0000000cU))][2U] 
                                                     << 0x0000001bU) 
                                                    | (0x07fff000U 
                                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                                          [
                                                          (0x0000003fU 
                                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                              >> 0x0000000cU))][1U] 
                                                          >> 5U)))));
        }
    } else if ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_result;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U] = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[1U] = (IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                           >> 0x00000020U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U] = (
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                    << 2U) 
                                                   | (3U 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                                         >> 0x0000000aU)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] = (
                                                   (0x00001ffcU 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U]) 
                                                   | (0x00001fffU 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                         >> 0x0000001eU)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] = (
                                                   (3U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U]) 
                                                   | (0x00001ffcU 
                                                      & ((((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked)) 
                                                           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem)) 
                                                          << 0x0000000cU) 
                                                         | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
                                                             << 0x0000000bU) 
                                                            | (((0x1aU 
                                                                 == 
                                                                 (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                                  >> 0x0000001bU)) 
                                                                << 0x0000000aU) 
                                                               | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
                                                                  << 2U))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_tag_go 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____VdfgRegularize_had306f9e_0_1) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)) 
              & ((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st)) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__snoop_go)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_tag_go 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____VdfgRegularize_h3ecca47e_0_1) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)) 
              & ((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_at = ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
                                                   | (0x1aU 
                                                      == 
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                       >> 0x0000001bU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_pending 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf)) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard)) 
                 & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending) 
                    & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid)) 
                       & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_17))))));
    cpu_sim__DOT__u_escc__DOT__top_idx = 0U;
    if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))) {
        cpu_sim__DOT__u_escc__DOT__top_idx = 0U;
    }
    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))) {
        cpu_sim__DOT__u_escc__DOT__top_idx = 1U;
    }
    if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))) {
        cpu_sim__DOT__u_escc__DOT__top_idx = 2U;
    }
    if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))) {
        cpu_sim__DOT__u_escc__DOT__top_idx = 3U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))) {
        cpu_sim__DOT__u_escc__DOT__top_idx = 4U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))) {
        cpu_sim__DOT__u_escc__DOT__top_idx = 5U;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__sign 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                             >> 0x3fU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e 
            = (0x000007ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                                      >> 0x34U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
            = (0x000fffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits);
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__sign 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                             >> 0x3fU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e 
            = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                                      >> 0x37U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
            = ((QData)((IData)((0x007fffffU & (IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                                                       >> 0x20U))))) 
               << 0x0000001dU);
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_zero 
        = (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero 
        = (0ULL == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f);
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz = 0U;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i = 0x00000033U;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_ones 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
            ? (0x07ffU == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e))
            : (0x00ffU == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e)));
    {
        while (VL_LTES_III(32, 0U, cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i)) {
            if (((0x33U >= (0x0000003fU & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i)) 
                 && (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
                                   >> (0x0000003fU 
                                       & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i)))))) {
                cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz 
                    = (0x0000003fU & ((IData)(0x33U) 
                                      - cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i));
                goto __Vlabel3;
            }
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i 
                = (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel3: ;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__sign 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
                             >> 0x3fU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e 
            = (0x000007ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
                                      >> 0x34U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f 
            = (0x000fffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits);
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones 
            = (0x07ffU == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__sign 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
                             >> 0x3fU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e 
            = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
                                      >> 0x37U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f 
            = ((QData)((IData)((0x007fffffU & (IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
                                                       >> 0x20U))))) 
               << 0x0000001dU);
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones 
            = (0x00ffU == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e));
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__m 
        = (0x001fffffffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
                                    << (0x0000003fU 
                                        & ((IData)(1U) 
                                           + (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U] 
        = ((0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U]) 
           | (0x000000ffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__sign) 
                             << 7U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U] 
        = ((0xfffffff1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U]) 
           | (0xfffffffeU & ((((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_zero) 
                               & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero)) 
                              << 3U) | ((((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_ones) 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero)) 
                                         << 2U) | (
                                                   ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_ones) 
                                                    & (~ (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero))) 
                                                   << 1U)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U] 
        = ((0xfffffffeU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U]) 
           | (((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_ones) 
               & (~ (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f_zero))) 
              & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
                            >> 0x33U)))));
    if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e_zero) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U] 
            = ((0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U]) 
               | ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__m) 
                  << 4U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U] 
            = ((0xfe000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U]) 
               | (((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__m) 
                   >> 0x0000001cU) | ((IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__m 
                                               >> 0x00000020U)) 
                                      << 4U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U] 
            = ((0x01ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U]) 
               | (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                      ? 0x3c02U : 0x3f82U) - (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz)) 
                   - (IData)(1U)) << 0x00000019U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U] 
            = ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U]) 
               | (0x0000007fU & (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                     ? 0x3c02U : 0x3f82U) 
                                   - (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__lz)) 
                                  - (IData)(1U)) >> 7U)));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U] 
            = ((0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U]) 
               | ((IData)((0x0010000000000000ULL | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f)) 
                  << 4U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U] 
            = (((IData)((0x0010000000000000ULL | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f)) 
                >> 0x0000001cU) | ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e) 
                                     - ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                         ? 0x03ffU : 0x007fU)) 
                                    << 0x00000019U) 
                                   | ((IData)(((0x0010000000000000ULL 
                                                | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f) 
                                               >> 0x00000020U)) 
                                      << 4U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U] 
            = ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U]) 
               | (0x000000ffU & (((0x0000000fU & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e) 
                                                   - 
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                                     ? 0x03ffU
                                                     : 0x007fU)) 
                                                  >> 7U)) 
                                  | ((IData)(((0x0010000000000000ULL 
                                               | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | (0x00000070U & (
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e) 
                                                    - 
                                                    ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                                      ? 0x03ffU
                                                      : 0x007fU)) 
                                                   >> 7U)))));
    }
    if ((IData)((0U != (0x0000000eU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U])))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U] 
            = ((0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U]) 
               | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f) 
                  << 4U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U] 
            = ((0xfe000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U]) 
               | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f) 
                   >> 0x0000001cU) | ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
                                               >> 0x00000020U)) 
                                      << 4U)));
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_zero 
        = (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero 
        = (0ULL == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f);
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz = 0U;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i = 0x00000033U;
    {
        while (VL_LTES_III(32, 0U, cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i)) {
            if (((0x33U >= (0x0000003fU & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i)) 
                 && (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f 
                                   >> (0x0000003fU 
                                       & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i)))))) {
                cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz 
                    = (0x0000003fU & ((IData)(0x33U) 
                                      - cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i));
                goto __Vlabel4;
            }
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i 
                = (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel4: ;
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__m 
        = (0x001fffffffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f 
                                    << (0x0000003fU 
                                        & ((IData)(1U) 
                                           + (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U] 
        = ((0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U]) 
           | (0x000000ffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__sign) 
                             << 7U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U] 
        = ((0xfffffff1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U]) 
           | (0xfffffffeU & ((((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_zero) 
                               & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero)) 
                              << 3U) | ((((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones) 
                                          & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero)) 
                                         << 2U) | (
                                                   ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones) 
                                                    & (~ (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero))) 
                                                   << 1U)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U] 
        = ((0xfffffffeU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U]) 
           | (((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_ones) 
               & (~ (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f_zero))) 
              & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f 
                            >> 0x33U)))));
    if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e_zero) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U] 
            = ((0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U]) 
               | ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__m) 
                  << 4U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U] 
            = ((0xfe000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U]) 
               | (((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__m) 
                   >> 0x0000001cU) | ((IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__m 
                                               >> 0x00000020U)) 
                                      << 4U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U] 
            = ((0x01ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U]) 
               | (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                      ? 0x3c02U : 0x3f82U) - (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz)) 
                   - (IData)(1U)) << 0x00000019U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U] 
            = ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U]) 
               | (0x0000007fU & (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                     ? 0x3c02U : 0x3f82U) 
                                   - (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__lz)) 
                                  - (IData)(1U)) >> 7U)));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U] 
            = ((0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U]) 
               | ((IData)((0x0010000000000000ULL | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f)) 
                  << 4U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U] 
            = (((IData)((0x0010000000000000ULL | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f)) 
                >> 0x0000001cU) | ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e) 
                                     - ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                         ? 0x03ffU : 0x007fU)) 
                                    << 0x00000019U) 
                                   | ((IData)(((0x0010000000000000ULL 
                                                | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f) 
                                               >> 0x00000020U)) 
                                      << 4U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U] 
            = ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U]) 
               | (0x000000ffU & (((0x0000000fU & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e) 
                                                   - 
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                                     ? 0x03ffU
                                                     : 0x007fU)) 
                                                  >> 7U)) 
                                  | ((IData)(((0x0010000000000000ULL 
                                               | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | (0x00000070U & (
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e) 
                                                    - 
                                                    ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl)
                                                      ? 0x03ffU
                                                      : 0x007fU)) 
                                                   >> 7U)))));
    }
    if ((IData)((0U != (0x0000000eU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U])))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U] 
            = ((0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U]) 
               | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f) 
                  << 4U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U] 
            = ((0xfe000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U]) 
               | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f) 
                   >> 0x0000001cU) | ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f 
                                               >> 0x00000020U)) 
                                      << 4U)));
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_now 
        = ((4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_written)) 
                 & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_cacheable))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 0U;
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                         >> 6U)))]) 
               & (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                  [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)))])))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 0U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 1U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                 [(0x0000003fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                          >> 6U)))] 
                                 >> 1U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 1U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 2U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                 [(0x0000003fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                          >> 6U)))] 
                                 >> 2U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 2U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 3U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                 [(0x0000003fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                          >> 6U)))] 
                                 >> 3U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 3U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 4U)) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                 [(0x0000003fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                          >> 6U)))] 
                                 >> 4U))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 4U;
    }
    if ((1U & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                         >> 6U)))]) 
               & (~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                      [0U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 6U)) 
                                  >> 4U))] >> (0x0000001eU 
                                               & ((IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                           >> 6U)) 
                                                  << 1U))) 
                     | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                        [0U][(3U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                             >> 6U)) 
                                    >> 4U))] >> (0x0000001fU 
                                                 & (1U 
                                                    | (0x0000007eU 
                                                       & ((IData)(
                                                                  (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                   >> 6U)) 
                                                          << 1U)))))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 0U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 1U)) & (~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                  [1U][(3U & ((IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                       >> 6U)) 
                                              >> 4U))] 
                                  >> (0x0000001eU & 
                                      ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                >> 6U)) 
                                       << 1U))) | (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                                   [1U][
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                >> 6U)) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (1U 
                                                       | (0x0000007eU 
                                                          & ((IData)(
                                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                      >> 6U)) 
                                                             << 1U)))))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 1U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 2U)) & (~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                  [2U][(3U & ((IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                       >> 6U)) 
                                              >> 4U))] 
                                  >> (0x0000001eU & 
                                      ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                >> 6U)) 
                                       << 1U))) | (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                                   [2U][
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                >> 6U)) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (1U 
                                                       | (0x0000007eU 
                                                          & ((IData)(
                                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                      >> 6U)) 
                                                             << 1U)))))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 2U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 3U)) & (~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                  [3U][(3U & ((IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                       >> 6U)) 
                                              >> 4U))] 
                                  >> (0x0000001eU & 
                                      ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                >> 6U)) 
                                       << 1U))) | (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                                   [3U][
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                >> 6U)) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (1U 
                                                       | (0x0000007eU 
                                                          & ((IData)(
                                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                      >> 6U)) 
                                                             << 1U)))))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 3U;
    }
    if ((1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                   [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                            >> 6U)))] 
                   >> 4U)) & (~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                  [4U][(3U & ((IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                       >> 6U)) 
                                              >> 4U))] 
                                  >> (0x0000001eU & 
                                      ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                >> 6U)) 
                                       << 1U))) | (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                                                   [4U][
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                >> 6U)) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (1U 
                                                       | (0x0000007eU 
                                                          & ((IData)(
                                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                                      >> 6U)) 
                                                             << 1U)))))))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = 4U;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_present) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_now 
        = ((4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_written)) 
                 & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_cacheable))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem)) 
                 | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_commit 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits = 0ULL;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_fcc = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_is_cmp = 0U;
    if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)))) {
                    if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                            = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                               | (0x00000010U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                                 << 4U)));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__dbl 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__dd 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__sd 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits;
                        {
                            if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__sd) 
                                 == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__dd))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__Vfuncout 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits;
                                goto __Vlabel5;
                            }
                            if (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__dd) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__Vfuncout 
                                    = (((QData)((IData)(
                                                        (0x07ffU 
                                                         | (0x00000800U 
                                                            & ((IData)(
                                                                       (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits 
                                                                        >> 0x3fU)) 
                                                               << 0x0000000bU))))) 
                                        << 0x00000034U) 
                                       | ((QData)((IData)(
                                                          (0x007fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits 
                                                                      >> 0x20U))))) 
                                          << 0x0000001dU));
                                goto __Vlabel5;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__Vfuncout 
                                = ((QData)((IData)(
                                                   (0x7f800000U 
                                                    | (((IData)(
                                                                (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits 
                                                                 >> 0x3fU)) 
                                                        << 0x0000001fU) 
                                                       | (0x007fffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits 
                                                                     >> 0x1dU))))))) 
                                   << 0x00000020U);
                            __Vlabel5: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__bits 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__Vfuncout;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__dbl)
                                ? (0x0008000000000000ULL 
                                   | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__bits)
                                : (0x0040000000000000ULL 
                                   | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__bits));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__Vfuncout;
                    } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__dbl 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__s 
                            = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                     >> 7U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__dbl)
                                ? (0x7ff0000000000000ULL 
                                   | ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__s)) 
                                      << 0x0000003fU))
                                : ((QData)((IData)(
                                                   (0x7f800000U 
                                                    | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__s) 
                                                       << 0x0000001fU)))) 
                                   << 0x00000020U));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__Vfuncout;
                    } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__96__s 
                            = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                     >> 7U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__96__Vfuncout 
                            = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__96__s)) 
                               << 0x0000003fU);
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__96__Vfuncout;
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                            = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                               | (0x00000200U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                 << 2U)));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                            = ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]) 
                               | ((IData)((0x00fffffffffffff8ULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                               << 0x0000001fU) 
                                              | (0x7ffffffffffffff8ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                    >> 1U))))) 
                                  << 1U));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                            = ((0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                               | (((IData)((0x00fffffffffffff8ULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                                << 0x0000001fU) 
                                               | (0x7ffffffffffffff8ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                     >> 1U))))) 
                                   >> 0x0000001fU) 
                                  | ((IData)(((0x00fffffffffffff8ULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                                   << 0x0000001fU) 
                                                  | (0x7ffffffffffffff8ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                        >> 1U)))) 
                                              >> 0x00000020U)) 
                                     << 1U)));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                            = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                               | (0xf8000000U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                 << 2U)));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                            = ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                               | (0x000001ffU & ((0x07fffffcU 
                                                  & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                     << 2U)) 
                                                 | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                    >> 0x0000001eU))));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                            = (0xfffffffeU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits = 0x7fffffff00000000ULL;
                } else if ((1U & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                    >> 2U) | VL_LTS_III(14, 0x001fU, 
                                                        (0x00003fffU 
                                                         & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                             << 7U) 
                                                            | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                               >> 0x00000019U))))) 
                                  | ((0x001fU == (0x00003fffU 
                                                  & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                      << 7U) 
                                                     | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                        >> 0x00000019U)))) 
                                     & (~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                            >> 7U) 
                                           & (0x80000000U 
                                              == (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_mi)))))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = ((QData)((IData)(((0x00000080U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U])
                                             ? 0x80000000U
                                             : 0x7fffffffU))) 
                           << 0x00000020U);
                } else if ((1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                   >> 3U) | VL_GTS_III(14, 0U, 
                                                       (0x00003fffU 
                                                        & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                            << 7U) 
                                                           | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                              >> 0x00000019U))))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits = 0ULL;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = ((0x1eU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                           | (1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                       >> 3U))));
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = ((QData)((IData)(((0x00000080U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U])
                                             ? (- cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_iv)
                                             : cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_iv))) 
                           << 0x00000020U);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = ((0x1eU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                           | (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ftoi_inexact));
                }
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                       | (0x00000200U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                  >> 0x3fU)) 
                                         << 9U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = (0xfffffffeU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]) 
                       | ((IData)((QData)((IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                               >> 0x0000003fU)))
                                                    ? 
                                                   (- (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                               >> 0x00000020U)))
                                                    : (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                               >> 0x00000020U)))))) 
                          << 1U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = ((0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                       | (((IData)((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                                >> 0x0000003fU)))
                                                     ? 
                                                    (- (IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                                >> 0x00000020U)))
                                                     : (IData)(
                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                                >> 0x00000020U)))))) 
                           >> 0x0000001fU) | ((IData)(
                                                      ((QData)((IData)(
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                                                >> 0x0000003fU)))
                                                                         ? 
                                                                        (- (IData)(
                                                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                                                >> 0x00000020U)))
                                                                         : (IData)(
                                                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                                                >> 0x00000020U))))) 
                                                       >> 0x00000020U)) 
                                              << 1U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = (0xb8000000U | (0x07ffffffU & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = (1U | (0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]));
            }
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_is_cmp = 1U;
            if ((2U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_fcc = 3U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                       | (0x00000010U & ((((9U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)) 
                                           | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U]) 
                                          | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                                         << 4U)));
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_fcc 
                    = ((8U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))
                        ? 0U : (((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                        >> 7U)) != 
                                 (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                        >> 7U))) ? 
                                ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U])
                                  ? 1U : 2U) : ((4U 
                                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])
                                                  ? 
                                                 ((0x00000080U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U])
                                                   ? 1U
                                                   : 2U)
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])
                                                   ? 
                                                  ((0x00000080U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U])
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((8U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])
                                                    ? 
                                                   ((0x00000080U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U])
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])
                                                     ? 
                                                    ((0x00000080U 
                                                      & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U])
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((((0x00003fffU 
                                                        & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                                            << 7U) 
                                                           | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                                              >> 0x00000019U))) 
                                                       == 
                                                       (0x00003fffU 
                                                        & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                            << 7U) 
                                                           | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                              >> 0x00000019U)))) 
                                                      & ((0x001fffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                                                              << 0x0000001cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                                                >> 4U))) 
                                                         == 
                                                         (0x001fffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                                              << 0x0000001cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                                >> 4U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger)
                                                       ? 
                                                      ((0x00000080U 
                                                        & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U])
                                                        ? 1U
                                                        : 2U)
                                                       : 
                                                      ((0x00000080U 
                                                        & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U])
                                                        ? 2U
                                                        : 1U))))))))));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                           | (0x00000010U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                             << 4U)));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__dbl 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__bits 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__dbl)
                            ? (0x0008000000000000ULL 
                               | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__bits)
                            : (0x0040000000000000ULL 
                               | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__bits));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__Vfuncout;
                } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits;
                } else if ((0x00000080U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__98__dbl 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__98__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__98__dbl)
                            ? 0x7fffffffffffffffULL
                            : 0x7fffffff00000000ULL);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__98__Vfuncout;
                } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits;
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                        = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[0U];
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                        = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[1U];
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                        = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[2U];
                }
            } else if ((2U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                              | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                       | (0x00000010U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                          | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                                         << 4U)));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__bits 
                    = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__dbl)
                        ? (0x0008000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__bits)
                        : (0x0040000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__bits));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__Vfuncout;
            } else if ((1U & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                               >> 2U) | ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                                         >> 3U)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__100__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__100__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__100__dbl)
                        ? 0x7fffffffffffffffULL : 0x7fffffff00000000ULL);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__100__Vfuncout;
            } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__s 
                    = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__dbl)
                        ? (0x7ff0000000000000ULL | 
                           ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__s)) 
                            << 0x0000003fU)) : ((QData)((IData)(
                                                                (0x7f800000U 
                                                                 | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__s) 
                                                                    << 0x0000001fU)))) 
                                                << 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__Vfuncout;
            } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__102__s 
                    = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__102__Vfuncout 
                    = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__102__s)) 
                       << 0x0000003fU);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__102__Vfuncout;
            } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = (2U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__s 
                    = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__dbl)
                        ? (0x7ff0000000000000ULL | 
                           ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__s)) 
                            << 0x0000003fU)) : ((QData)((IData)(
                                                                (0x7f800000U 
                                                                 | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__s) 
                                                                    << 0x0000001fU)))) 
                                                << 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__Vfuncout;
            } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__104__s 
                    = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__104__Vfuncout 
                    = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__104__s)) 
                       << 0x0000003fU);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__104__Vfuncout;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[0U];
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[1U];
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_r[2U];
            }
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
            if ((2U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                       | (0x00000010U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                          | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                                         << 4U)));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__dd 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__sd 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits 
                    = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2;
                {
                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__sd) 
                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__dd))) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__Vfuncout 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits;
                        goto __Vlabel6;
                    }
                    if (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__dd) {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__Vfuncout 
                            = (((QData)((IData)((0x07ffU 
                                                 | (0x00000800U 
                                                    & ((IData)(
                                                               (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits 
                                                                >> 0x3fU)) 
                                                       << 0x0000000bU))))) 
                                << 0x00000034U) | ((QData)((IData)(
                                                                   (0x007fffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits 
                                                                               >> 0x20U))))) 
                                                   << 0x0000001dU));
                        goto __Vlabel6;
                    }
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__Vfuncout 
                        = ((QData)((IData)((0x7f800000U 
                                            | (((IData)(
                                                        (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits 
                                                         >> 0x3fU)) 
                                                << 0x0000001fU) 
                                               | (0x007fffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits 
                                                             >> 0x1dU))))))) 
                           << 0x00000020U);
                    __Vlabel6: ;
                }
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__Vfuncout;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__dbl)
                        ? (0x0008000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__bits)
                        : (0x0040000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__bits));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__Vfuncout;
            } else if ((1U & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                >> 2U) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                          >> 3U)) | 
                              ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                >> 3U) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                                          >> 2U))))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__107__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__107__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__107__dbl)
                        ? 0x7fffffffffffffffULL : 0x7fffffff00000000ULL);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__107__Vfuncout;
            } else if ((4U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                              | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__s 
                    = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__dbl)
                        ? (0x7ff0000000000000ULL | 
                           ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__s)) 
                            << 0x0000003fU)) : ((QData)((IData)(
                                                                (0x7f800000U 
                                                                 | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__s) 
                                                                    << 0x0000001fU)))) 
                                                << 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__Vfuncout;
            } else if ((8U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                              | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__109__s 
                    = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__109__Vfuncout 
                    = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__109__s)) 
                       << 0x0000003fU);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__109__Vfuncout;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                       | (0x00000200U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                          ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                                         << 2U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = (IData)(((0x07fffffffffffffeULL 
                                & (((QData)((IData)(
                                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[3U])) 
                                    << 0x00000031U) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[2U])) 
                                       << 0x00000011U) 
                                      | (0x0001fffffffffffeULL 
                                         & ((QData)((IData)(
                                                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[1U])) 
                                            >> 0x0000000fU))))) 
                               | (QData)((IData)((0U 
                                                  != 
                                                  (0x0000ffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[1U])) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[0U])))))))));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = ((0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                       | (IData)((((0x07fffffffffffffeULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[3U])) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(
                                                           vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[2U])) 
                                           << 0x00000011U) 
                                          | (0x0001fffffffffffeULL 
                                             & ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[1U])) 
                                                >> 0x0000000fU))))) 
                                   | (QData)((IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[1U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[0U])))))))) 
                                  >> 0x00000020U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                       | (((((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                        >> 0x00000019U)) 
                            + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                          >> 0x00000019U))) 
                           - (IData)(1U)) << 0x0000001bU));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                       | (0x000001ffU & (((((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                             << 7U) 
                                            | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                               >> 0x00000019U)) 
                                           + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                               << 7U) 
                                              | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                 >> 0x00000019U))) 
                                          - (IData)(1U)) 
                                         >> 5U)));
            }
        } else if ((2U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                          | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                   | (0x00000010U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                      | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                                     << 4U)));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__dbl 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__bits 
                = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__dbl)
                    ? (0x0008000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__bits)
                    : (0x0040000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__bits));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__Vfuncout;
        } else if ((4U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__111__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__111__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__111__dbl)
                        ? 0x7fffffffffffffffULL : 0x7fffffff00000000ULL);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__111__Vfuncout;
            } else {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__s 
                    = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__dbl)
                        ? (0x7ff0000000000000ULL | 
                           ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__s)) 
                            << 0x0000003fU)) : ((QData)((IData)(
                                                                (0x7f800000U 
                                                                 | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__s) 
                                                                    << 0x0000001fU)))) 
                                                << 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__Vfuncout;
            }
        } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__dbl 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__s 
                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                         >> 7U));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__dbl)
                    ? (0x7ff0000000000000ULL | ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__s)) 
                                                << 0x0000003fU))
                    : ((QData)((IData)((0x7f800000U 
                                        | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__s) 
                                           << 0x0000001fU)))) 
                       << 0x00000020U));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__Vfuncout;
        } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__dbl 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__s 
                = (IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                            >> 7U) ^ (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__dbl)
                    ? (0x7ff0000000000000ULL | ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__s)) 
                                                << 0x0000003fU))
                    : ((QData)((IData)((0x7f800000U 
                                        | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__s) 
                                           << 0x0000001fU)))) 
                       << 0x00000020U));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__Vfuncout;
        } else if ((8U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                          & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff)
                    ? ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__115__s 
                            = (3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__115__Vfuncout 
                            = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__115__s)) 
                               << 0x0000003fU);
                    }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__115__Vfuncout)
                    : ([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__116__s 
                            = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                     >> 7U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__116__Vfuncout 
                            = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__116__s)) 
                               << 0x0000003fU);
                    }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__116__Vfuncout));
        } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = (((QData)((IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                      >> 0x0000003fU) 
                                     ^ (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))))) 
                    << 0x0000003fU) | (0x7fffffffffffffffULL 
                                       & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits));
        } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits;
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                   | ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big) 
                      << 0x0000001bU));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                = ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                   | (0x000003ffU & ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big) 
                                     >> 5U)));
            if ((0ULL == cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum)) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = (0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                       | (0x000003ffU & ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd)) 
                                         << 9U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = (0xfffffffeU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                       | (0x00000200U & (((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger)
                                           ? (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                              >> 7U)
                                           : ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                               >> 7U) 
                                              ^ (4U 
                                                 == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)))) 
                                         << 9U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                    = (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum);
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = ((0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                       | (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum 
                                  >> 0x00000020U)));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
            if ((2U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                    = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags)) 
                       | (0x00000010U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                                          | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]) 
                                         << 4U)));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__bits 
                    = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__dbl)
                        ? (0x0008000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__bits)
                        : (0x0040000000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__bits));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__Vfuncout;
            } else if ((4U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags 
                        = (0x00000010U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__118__dbl 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__118__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__118__dbl)
                            ? 0x7fffffffffffffffULL
                            : 0x7fffffff00000000ULL);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__118__Vfuncout;
                } else {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__dbl 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__s 
                        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                 >> 7U));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__dbl)
                            ? (0x7ff0000000000000ULL 
                               | ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__s)) 
                                  << 0x0000003fU)) : 
                           ((QData)((IData)((0x7f800000U 
                                             | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__s) 
                                                << 0x0000001fU)))) 
                            << 0x00000020U));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__Vfuncout;
                }
            } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__s 
                    = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                             >> 7U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__dbl)
                        ? (0x7ff0000000000000ULL | 
                           ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__s)) 
                            << 0x0000003fU)) : ((QData)((IData)(
                                                                (0x7f800000U 
                                                                 | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__s) 
                                                                    << 0x0000001fU)))) 
                                                << 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__Vfuncout;
            } else if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__dbl 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__s 
                    = (IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                >> 7U) ^ (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__dbl)
                        ? (0x7ff0000000000000ULL | 
                           ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__s)) 
                            << 0x0000003fU)) : ((QData)((IData)(
                                                                (0x7f800000U 
                                                                 | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__s) 
                                                                    << 0x0000001fU)))) 
                                                << 0x00000020U));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__Vfuncout;
            } else if ((8U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                              & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U]))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sub_eff)
                        ? ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__122__s 
                                = (3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__122__Vfuncout 
                                = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__122__s)) 
                                   << 0x0000003fU);
                        }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__122__Vfuncout)
                        : ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__123__s 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                         >> 7U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__123__Vfuncout 
                                = ((QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__123__s)) 
                                   << 0x0000003fU);
                        }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__123__Vfuncout));
            } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = (((QData)((IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                          >> 0x0000003fU) 
                                         ^ (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))))) 
                        << 0x0000003fU) | (0x7fffffffffffffffULL 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits));
            } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                    = ((0x07ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                       | ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big) 
                          << 0x0000001bU));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                    = ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                       | (0x000003ffU & ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__e_big) 
                                         >> 5U)));
                if ((0ULL == cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                        = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                        = (0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                        = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                           | (0x000003ffU & ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd)) 
                                             << 9U)));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                        = (0xfffffffeU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                        = ((0x000001ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U]) 
                           | (0x00000200U & (((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bigger)
                                               ? (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                                  >> 7U)
                                               : ((
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                   >> 7U) 
                                                  ^ 
                                                  (4U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)))) 
                                             << 9U)));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] 
                        = (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                        = ((0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U]) 
                           | (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__sum 
                                      >> 0x00000020U)));
                }
            }
        } else {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
                = (0x7fffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits);
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
            = (((QData)((IData)((1U & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                                                  >> 0x3fU)))))) 
                << 0x0000003fU) | (0x7fffffffffffffffULL 
                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat_now 
        = ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st)) 
           & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[2U]) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[2U] 
                 >> 1U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat_now 
        = ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
           & ((~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U]) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U] 
                 >> 1U)));
    vlSelfRef.cpu_sim__DOT__bpa = (0x0000000fffffffffULL 
                                   & ((0x00002000U 
                                       & vlSelfRef.cpu_sim__DOT__mr[3U])
                                       ? (((QData)((IData)(
                                                           (0x7fffffffU 
                                                            & ((vlSelfRef.cpu_sim__DOT__mr[3U] 
                                                                << 0x00000013U) 
                                                               | (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                                  >> 0x0000000dU))))) 
                                           << 5U) | (QData)((IData)(
                                                                    ((IData)(vlSelfRef.cpu_sim__DOT__beat) 
                                                                     << 3U))))
                                       : (((QData)((IData)(
                                                           vlSelfRef.cpu_sim__DOT__mr[3U])) 
                                           << 0x00000038U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__mr[3U])) 
                                              << 0x00000018U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__mr[2U])) 
                                                >> 8U)))));
    cpu_sim__DOT__esc_off = 0U;
    if ((1U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 7U;
    }
    if ((2U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 6U;
    }
    if ((4U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 5U;
    }
    if ((8U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 4U;
    }
    if ((0x00000010U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 3U;
    }
    if ((0x00000020U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 2U;
    }
    if ((0x00000040U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 1U;
    }
    if ((0x00000080U & vlSelfRef.cpu_sim__DOT__mr[2U])) {
        cpu_sim__DOT__esc_off = 0U;
    }
    vlSelfRef.cpu_sim__DOT__esc_req[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__esc_req[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__esc_req[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__esc_req[2U] = ((3U & vlSelfRef.cpu_sim__DOT__esc_req[2U]) 
                                           | (7U & 
                                              ((((3U 
                                                  == (IData)(vlSelfRef.cpu_sim__DOT__mst)) 
                                                 & (~ (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__esc_rsp 
                                                               >> 0x00000021U)))) 
                                                & (~ (IData)(vlSelfRef.cpu_sim__DOT__esc_started))) 
                                               << 2U)));
    vlSelfRef.cpu_sim__DOT__esc_req[2U] = ((5U & vlSelfRef.cpu_sim__DOT__esc_req[2U]) 
                                           | (2U & 
                                              (vlSelfRef.cpu_sim__DOT__mr[3U] 
                                               >> 0x0000000dU)));
    vlSelfRef.cpu_sim__DOT__esc_req[1U] = ((0x0000001fU 
                                            & vlSelfRef.cpu_sim__DOT__esc_req[1U]) 
                                           | (((0x000ffff8U 
                                                & (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                   >> 8U)) 
                                               | (IData)(cpu_sim__DOT__esc_off)) 
                                              << 5U));
    vlSelfRef.cpu_sim__DOT__esc_req[2U] = ((6U & vlSelfRef.cpu_sim__DOT__esc_req[2U]) 
                                           | (7U & 
                                              (((0x000ffff8U 
                                                 & (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                    >> 8U)) 
                                                | (IData)(cpu_sim__DOT__esc_off)) 
                                               >> 0x0000001bU)));
    vlSelfRef.cpu_sim__DOT__esc_req[1U] = ((0xffffffe1U 
                                            & vlSelfRef.cpu_sim__DOT__esc_req[1U]) 
                                           | (0x0000001eU 
                                              & (((0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                       >> 4U)))
                                                   ? 
                                                  ((vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                    << 0x0000001cU) 
                                                   | (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                      >> 4U))
                                                   : 
                                                  vlSelfRef.cpu_sim__DOT__mr[2U]) 
                                                 << 1U)));
    vlSelfRef.cpu_sim__DOT__esc_req[0U] = ((1U & vlSelfRef.cpu_sim__DOT__esc_req[0U]) 
                                           | (((0U 
                                                != 
                                                (0x0000000fU 
                                                 & (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                    >> 4U)))
                                                ? vlSelfRef.cpu_sim__DOT__mr[1U]
                                                : vlSelfRef.cpu_sim__DOT__mr[0U]) 
                                              << 1U));
    vlSelfRef.cpu_sim__DOT__esc_req[1U] = ((0xfffffffeU 
                                            & vlSelfRef.cpu_sim__DOT__esc_req[1U]) 
                                           | (((0U 
                                                != 
                                                (0x0000000fU 
                                                 & (vlSelfRef.cpu_sim__DOT__mr[2U] 
                                                    >> 4U)))
                                                ? vlSelfRef.cpu_sim__DOT__mr[1U]
                                                : vlSelfRef.cpu_sim__DOT__mr[0U]) 
                                              >> 0x0000001fU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word 
        = ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr 
                          >> 2U))) ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[0U]
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[1U]);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval;
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second)
                ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_npc
                : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc);
    } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                   >> 0x0000000eU))) {
        if ((IData)(((0x00000c00U == (0x00000c00U & 
                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U])) 
                     & (0xc0000000U == (0xf8000000U 
                                        & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U]))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second)
                    ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata)
                    : (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata 
                               >> 0x20U)));
        }
    }
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__rf_val 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs1;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r 
        = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x00000011U));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__m_is_ld = 0;
    {
        if ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout = 0U;
            goto __Vlabel7;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__m_is_ld 
            = ((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                          >> 0x0000001bU)) | (0x1aU 
                                              == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x0000001bU)));
        if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                  >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap))) 
             & ((~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__m_is_ld)) 
                | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__m_is_ld)
                        ? ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata;
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__sgn 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000cU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__size 
                                = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000aU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__Vfuncout 
                                = ((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__size))
                                    ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__sgn)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d 
                                                                   >> 7U))))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d)))
                                        : (0x000000ffU 
                                           & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d)))
                                    : ((1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__size))
                                        ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__sgn)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d 
                                                                       >> 0x0fU))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d)))
                                            : (0x0000ffffU 
                                               & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d)))
                                        : ((3U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__size))
                                            ? (IData)(
                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d 
                                                       >> 0x20U))
                                            : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d))));
                        }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__Vfuncout)
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result);
                goto __Vlabel7;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata);
                goto __Vlabel7;
            }
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                 >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval;
                goto __Vlabel7;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata);
                goto __Vlabel7;
            }
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout 
            = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__rf_val;
        __Vlabel7: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a_fwd 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__rf_val 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs2;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r 
        = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x0000000cU));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__m_is_ld = 0;
    {
        if ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout = 0U;
            goto __Vlabel8;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__m_is_ld 
            = ((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                          >> 0x0000001bU)) | (0x1aU 
                                              == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x0000001bU)));
        if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                  >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap))) 
             & ((~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__m_is_ld)) 
                | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__m_is_ld)
                        ? ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata;
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__sgn 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000cU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__size 
                                = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000aU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__Vfuncout 
                                = ((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__size))
                                    ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__sgn)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d 
                                                                   >> 7U))))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d)))
                                        : (0x000000ffU 
                                           & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d)))
                                    : ((1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__size))
                                        ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__sgn)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d 
                                                                       >> 0x0fU))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d)))
                                            : (0x0000ffffU 
                                               & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d)))
                                        : ((3U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__size))
                                            ? (IData)(
                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d 
                                                       >> 0x20U))
                                            : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d))));
                        }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__Vfuncout)
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result);
                goto __Vlabel8;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata);
                goto __Vlabel8;
            }
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                 >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval;
                goto __Vlabel8;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata);
                goto __Vlabel8;
            }
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout 
            = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__rf_val;
        __Vlabel8: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b_fwd 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a_fwd;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b 
        = ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])
            ? ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                << 0x00000015U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                                   >> 0x0000000bU))
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b_fwd);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__rf_val 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs3;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r 
        = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x00000016U));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__m_is_ld = 0;
    {
        if ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout = 0U;
            goto __Vlabel9;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__m_is_ld 
            = ((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                          >> 0x0000001bU)) | (0x1aU 
                                              == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x0000001bU)));
        if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                  >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap))) 
             & ((~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__m_is_ld)) 
                | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__m_is_ld)
                        ? ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata;
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__sgn 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000cU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__size 
                                = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000aU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__Vfuncout 
                                = ((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__size))
                                    ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__sgn)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d 
                                                                   >> 7U))))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d)))
                                        : (0x000000ffU 
                                           & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d)))
                                    : ((1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__size))
                                        ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__sgn)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d 
                                                                       >> 0x0fU))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d)))
                                            : (0x0000ffffU 
                                               & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d)))
                                        : ((3U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__size))
                                            ? (IData)(
                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d 
                                                       >> 0x20U))
                                            : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d))));
                        }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__Vfuncout)
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result);
                goto __Vlabel9;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata);
                goto __Vlabel9;
            }
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                 >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval;
                goto __Vlabel9;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata);
                goto __Vlabel9;
            }
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout 
            = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__rf_val;
        __Vlabel9: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs3v 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__rf_val 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs4;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r 
        = (1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                >> 0x00000016U)));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__m_is_ld = 0;
    {
        if ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout = 0U;
            goto __Vlabel10;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__m_is_ld 
            = ((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                          >> 0x0000001bU)) | (0x1aU 
                                              == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x0000001bU)));
        if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                  >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap))) 
             & ((~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__m_is_ld)) 
                | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__m_is_ld)
                        ? ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata;
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__sgn 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000cU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__size 
                                = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                                         >> 0x0000000aU));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__Vfuncout 
                                = ((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__size))
                                    ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__sgn)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d 
                                                                   >> 7U))))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d)))
                                        : (0x000000ffU 
                                           & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d)))
                                    : ((1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__size))
                                        ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__sgn)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d 
                                                                       >> 0x0fU))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d)))
                                            : (0x0000ffffU 
                                               & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d)))
                                        : ((3U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__size))
                                            ? (IData)(
                                                      (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d 
                                                       >> 0x20U))
                                            : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d))));
                        }(), vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__Vfuncout)
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result);
                goto __Vlabel10;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata);
                goto __Vlabel10;
            }
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                 >> 0x0000000eU)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)))) {
            if (((0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                 >> 0x00000016U)) == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval;
                goto __Vlabel10;
            }
            if ((IData)((((0x00000c00U == (0x00000c00U 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U])) 
                          & (0xc0000000U == (0xf8000000U 
                                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U]))) 
                         & ((1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                  >> 0x00000016U))) 
                            == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__r))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata);
                goto __Vlabel10;
            }
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout 
            = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__rf_val;
        __Vlabel10: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs4v 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w 
        = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U])));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__size 
        = (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U]);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__size))
            ? (((QData)((IData)((0x000000ffU & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                << 0x00000038U) | (((QData)((IData)(
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                    << 0x00000030U) 
                                   | (((QData)((IData)(
                                                       (0x000000ffU 
                                                        & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                       << 0x00000028U) 
                                      | (((QData)((IData)(
                                                          (0x000000ffU 
                                                           & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                          << 0x00000020U) 
                                         | (((QData)((IData)(
                                                             (0x000000ffU 
                                                              & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                             << 0x00000018U) 
                                            | (((QData)((IData)(
                                                                (0x000000ffU 
                                                                 & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                                << 0x00000010U) 
                                               | (((QData)((IData)(
                                                                   (0x000000ffU 
                                                                    & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))))))))))
            : ((1U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__size))
                ? (((QData)((IData)((0x0000ffffU & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                    << 0x00000030U) | (((QData)((IData)(
                                                        (0x0000ffffU 
                                                         & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                        << 0x00000020U) 
                                       | (((QData)((IData)(
                                                           (0x0000ffffU 
                                                            & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (0x0000ffffU 
                                                             & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))))))
                : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__size))
                    ? (((QData)((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)))
                    : __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__w)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_wdata = __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_wdata__3__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__a 
        = (7U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__size 
        = (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U]);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__Vfuncout 
        = (0x000000ffU & ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__size))
                           ? (0x80U >> (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__a))
                           : ((1U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__size))
                               ? (0xc0U >> (6U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__a)))
                               : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__size))
                                   ? ((4U & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__a))
                                       ? 0x0fU : 0xf0U)
                                   : 0xffU))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_be = __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_be__2__Vfuncout;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way = 0U;
    if ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr 
            = (0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                      >> 5U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
            = (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                      >> 0x0cU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_way))));
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__snoop_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr 
                = (0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_line
                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_rd]);
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_tag_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr 
                = (0x0000007fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                  >> 5U));
        }
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__snoop_go)))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_tag_go) {
                if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
                     & (2U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                               >> 0x0000001eU)))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                        = ((0x02000000U & ((IData)(
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                    >> 0x30U)) 
                                           << 0x00000019U)) 
                           | ((0x01000000U & ((IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                       >> 0x28U)) 
                                              << 0x00000018U)) 
                              | (0x00ffffffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i))));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way 
                        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way) 
                           | (0x0fU & ((IData)(1U) 
                                       << (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                 >> 0x0000001aU)))));
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way = 0U;
    if ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr 
            = (0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                      >> 6U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
            = (0x00ffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                      >> 0x0cU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h63936532__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way)) 
                   | (0x1fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h63936532__0) 
                               << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))));
        }
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr 
                = (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line
                                  [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd] 
                                  >> 1U));
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_tag_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr 
                = (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                  >> 6U));
        }
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go)))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_tag_go) {
                if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
                      & (2U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                >> 0x0000001eU))) & 
                     (5U > (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                  >> 0x0000001aU))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                        = (0x00ffffffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h8578f7c8__0 = 1U;
                    if ((4U >= (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                      >> 0x0000001aU)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way 
                            = (((~ ((IData)(1U) << 
                                    (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                           >> 0x0000001aU)))) 
                                & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way)) 
                               | (0x1fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h8578f7c8__0) 
                                           << (7U & 
                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                >> 0x0000001aU)))));
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd = ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))
                                               ? (0x0000001000000000ULL 
                                                  | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)) 
                                                      << 4U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_at) 
                                                                         << 1U) 
                                                                        | (9U 
                                                                           != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)))))))
                                               : ((8U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))
                                                   ? 
                                                  (0x0000001000000003ULL 
                                                   | ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)) 
                                                      << 4U))
                                                   : 
                                                  ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)) 
                                                   << 4U)));
    __Vtableidx1 = ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_b) 
                      << 5U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_a) 
                                << 4U)) | (((IData)(cpu_sim__DOT__u_escc__DOT__top_idx) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ip))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__code = Vcpu_sim__ConstPool__TABLE_h3183d743_0
        [__Vtableidx1];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_7 
        = (1U & (~ ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go)) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_15 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_commit) 
           & (0x1bU == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                        >> 0x0000001bU)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__is_zero 
        = (0ULL == (0x03ffffffffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U])) 
                                              << 0x0000001fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U])) 
                                                >> 1U))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i = 0x00000039U;
    {
        while (VL_LTES_III(32, 0U, cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[
                       (((IData)(1U) + (0x0000003fU 
                                        & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i)) 
                        >> 5U)] >> (0x0000001fU & ((IData)(1U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i)))))) {
                cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz 
                    = (0x0000003fU & ((IData)(0x39U) 
                                      - cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i));
                goto __Vlabel11;
            }
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i 
                = (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel11: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
        = (0x03ffffffffffffffULL & ((((QData)((IData)(
                                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U])) 
                                      << 0x0000003fU) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U])) 
                                         << 0x0000001fU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U])) 
                                           >> 1U))) 
                                    << (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__en 
        = (0x00003fffU & (((IData)(2U) + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                           << 5U) | 
                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] 
                                           >> 0x0000001bU))) 
                          - (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be = 0xffU;
    if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat_now)))) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_now) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be;
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_data_go 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
           & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat_now) 
                  | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_now))) 
              & (IData)(cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____VdfgRegularize_had306f9e_0_1)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be = 0xffU;
    if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat_now)))) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_now) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be;
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_data_go 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
           & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat_now) 
                  | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_now))) 
              & (IData)(cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____VdfgRegularize_h3ecca47e_0_1)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte = (0x000000ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0x0000001fU 
                                                            & VL_MULS_III(32, (IData)(8U), 
                                                                          ((IData)(3U) 
                                                                           - 
                                                                           (3U 
                                                                            & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                                                               >> 5U))))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cpu_sim__DOT__esc_req[
                                                       (((IData)(8U) 
                                                         + 
                                                         (0x0000001fU 
                                                          & VL_MULS_III(32, (IData)(8U), 
                                                                        ((IData)(3U) 
                                                                         - 
                                                                         (3U 
                                                                          & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                                                             >> 5U)))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0x0000001fU 
                                                             & VL_MULS_III(32, (IData)(8U), 
                                                                           ((IData)(3U) 
                                                                            - 
                                                                            (3U 
                                                                             & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                                                                >> 5U)))))))))) 
                                                     | (vlSelfRef.cpu_sim__DOT__esc_req[
                                                        (((IData)(1U) 
                                                          + 
                                                          (0x0000001fU 
                                                           & VL_MULS_III(32, (IData)(8U), 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          (3U 
                                                                           & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                                                              >> 5U)))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0x0000001fU 
                                                             & VL_MULS_III(32, (IData)(8U), 
                                                                           ((IData)(3U) 
                                                                            - 
                                                                            (3U 
                                                                             & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                                                                >> 5U))))))))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__access = (IData)(
                                                          ((~ 
                                                            (vlSelfRef.cpu_sim__DOT__esc_rsp 
                                                             >> 0x00000021U)) 
                                                           & (vlSelfRef.cpu_sim__DOT__esc_req[2U] 
                                                              >> 2U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_rm = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ptd = 0U;
    if ((1U & (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[2U]))) {
        if ((0U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
            if ((3U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
                if ((1U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_rm 
                        = (1U & ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word 
                                     >> 5U)) | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at) 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word 
                                                    >> 6U)))));
                }
                if ((1U == (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
                    if ((3U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ptd = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft = 0U;
    if ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[2U])) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft = 4U;
    } else if ((0U == (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft = 1U;
    } else if ((3U == (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft = 4U;
    } else if ((1U == (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word))) {
        if ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft = 4U;
        }
    } else {
        vlSelfRef.__Vfunc_acc_fault__41__acc = (7U 
                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word 
                                                   >> 2U));
        vlSelfRef.__Vfunc_acc_fault__41__at = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at;
        vlSelfRef.__Vfunc_acc_fault__41__Vfuncout = 
            ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
              ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
                  ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
                      ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                          ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                              ? 0U : 2U) : 2U) : ((4U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)))
                  : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
                      ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                          ? 0U : 2U) : ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                         ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                             ? 3U : 2U)
                                         : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                             ? 0U : 2U))))
              : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
                  ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
                      ? ((((0U == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc)) 
                           || (1U == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))) 
                          || (5U == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc)))
                          ? 2U : 0U) : ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                         ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                             ? 3U : 
                                            ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                              ? 2U : 0U))
                                         : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                             ? 0U : 2U)))
                  : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__41__at))
                      ? ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                          ? 2U : 0U) : ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc))
                                         ? 2U : (((6U 
                                                   == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc)) 
                                                  || (7U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__41__acc)))
                                                  ? 3U
                                                  : 0U)))));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft 
            = vlSelfRef.__Vfunc_acc_fault__41__Vfuncout;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_neg 
        = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
            >> 0x0000000cU) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b 
                               >> 0x0000001fU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_abs 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_neg)
            ? (- vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_y 
        = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
            << 0x0000001fU) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y 
                               >> 1U));
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                  >> 0x0000001fU)))) {
        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                      >> 0x0000001eU)))) {
            if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                    if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_y 
                            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone)
                                ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y
                                : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[1U]);
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_neg 
        = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
            >> 0x0000000cU) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y 
                               >> 0x0000001fU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_abs 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_neg)
            ? (- (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y)) 
                   << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a))))
            : (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr 
        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
           + vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval 
        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
           ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged 
        = (8U == (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                 >> 0x0000001aU)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tv 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged) 
           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
              >> 0x00000019U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc 
        = (0x24U == (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                    >> 0x00000018U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cc 
        = (IData)((0x10000000U == (0x30000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])));
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cc = 1U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub = 0U;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
            = ((VL_REDXOR_4((0x0aU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc_fwd))) 
                << 0x0000001fU) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                                   >> 1U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 
            = ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y)
                ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b
                : 0U);
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub 
            = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                     >> 0x00000018U));
    } else if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                         >> 0x0000001dU)))) {
        if ((4U == (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                   >> 0x00000018U)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub = 1U;
        } else if ((8U == (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                          >> 0x00000018U)))) {
            cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin 
                = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc_fwd));
        } else if ((0x0cU == (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                             >> 0x00000018U)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub = 1U;
            cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin 
                = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc_fwd));
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub)
            ? ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                - vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
               - (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin))
            : ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                + vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
               + (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way) 
              >> 1U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way) 
              >> 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way) 
              >> 3U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way) 
              >> 1U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way) 
              >> 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way) 
              >> 3U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__4__KET____DOT__u_tag__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way) 
              >> 4U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3fU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x3fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3fU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x3fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3eU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x3eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3eU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x3eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3dU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x3dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3dU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x3dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3cU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x3cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3cU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x3cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3bU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x3bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3bU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x3bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3aU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x3aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x3aU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x3aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x39U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x39U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x39U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x39U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x39U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x39U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x39U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x39U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x38U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x38U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x38U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x38U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x38U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x38U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x38U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x38U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x37U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x37U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x37U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x37U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x37U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x37U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x37U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x37U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x36U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x36U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x36U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x36U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x36U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x36U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x36U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x36U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x35U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x35U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x35U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x35U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x35U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x35U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x35U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x35U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x34U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x34U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x34U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x34U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x34U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x34U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x34U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x34U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x33U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x33U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x33U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x33U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x33U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x33U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x33U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x33U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x32U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x32U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x32U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x32U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x32U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x32U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x32U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x32U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x31U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x31U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x31U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x31U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x31U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x31U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x31U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x31U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x30U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x30U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x30U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x30U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x30U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x30U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2fU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x2fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2fU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x2fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2eU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x2eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2eU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x2eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2dU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x2dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2dU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x2dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2cU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x2cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2cU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x2cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2bU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x2bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2bU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x2bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2aU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x2aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x2aU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x2aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x29U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x29U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x29U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x29U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x29U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x29U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x29U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x29U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x28U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x28U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x28U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x28U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x28U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x28U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x28U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x28U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x27U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x27U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x27U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x27U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x27U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x27U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x27U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x27U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x26U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x26U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x26U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x26U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x26U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x26U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x26U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x26U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x25U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x25U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x25U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x25U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x25U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x25U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x25U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x25U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x24U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x24U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x24U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x24U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x24U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x24U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x24U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x24U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x23U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x23U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x23U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x23U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x23U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x23U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x23U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x23U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x22U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x22U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x22U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x22U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x22U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x22U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x22U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x22U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x21U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x21U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x21U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x21U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x21U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x21U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x21U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x21U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x20U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x20U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x20U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x20U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x20U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x20U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1fU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x1fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1fU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x1fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1eU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x1eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1eU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x1eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1dU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x1dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1dU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x1dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1cU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x1cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1cU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x1cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1bU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x1bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1bU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x1bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1aU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x1aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x1aU][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x1aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x19U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x19U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x19U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x19U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x19U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x19U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x19U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x19U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x18U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x18U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x18U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x18U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x18U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x18U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x18U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x18U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x17U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x17U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x17U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x17U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x17U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x17U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x17U][2U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok 
                    = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                     >> 1U))) ? ((0x000fffffU 
                                                  & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                      << 0x0000000fU) 
                                                     | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                        >> 0x00000011U))) 
                                                 == 
                                                 (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                  >> 0x0cU))
                        : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                         >> 1U))) ? 
                           ((0x00003fffU & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                             << 9U) 
                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                               >> 0x00000017U))) 
                            == (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                >> 0x12U)) : ((1U != 
                                               (3U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                                   >> 1U))) 
                                              || ((0x000000ffU 
                                                   & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                                         >> 0x0000001dU))) 
                                                  == 
                                                  (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                                                   >> 0x18U)))));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout 
                    = (((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                         >> 6U) & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok)) 
                       & ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                                        >> 4U))) | 
                          ((0x0000ffffU & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                                           >> 1U)) 
                           == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c))));
            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x17U;
    }
}

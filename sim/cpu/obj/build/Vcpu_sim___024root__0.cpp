// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

VlCoroutine Vcpu_sim___024root___eval_initial__TOP__Vtiming__0(Vcpu_sim___024root* vlSelf);
VlCoroutine Vcpu_sim___024root___eval_initial__TOP__Vtiming__1(Vcpu_sim___024root* vlSelf);

void Vcpu_sim___024root___eval_initial(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_initial\n"); );
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
    Vcpu_sim___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_sim___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vcpu_sim___024root___eval_initial__TOP__Vtiming__0(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cpu_sim__DOT__unnamedblk1_1__DOT____Vrepeat0;
    cpu_sim__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.cpu_sim__DOT__cyc = 0ULL;
    vlSelfRef.cpu_sim__DOT__last8 = 0ULL;
    cpu_sim__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, cpu_sim__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha8da8781__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge cpu_sim.clk)", 
                                                             "sim/cpu/cpu_sim.sv", 
                                                             170);
        cpu_sim__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (cpu_sim__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.cpu_sim__DOT__rst = 0U;
    co_return;}

VlCoroutine Vcpu_sim___024root___eval_initial__TOP__Vtiming__1(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "sim/cpu/cpu_sim.sv", 
                                             30);
        vlSelfRef.cpu_sim__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_sim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcpu_sim___024root___eval_triggers__act(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_triggers__act\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.cpu_sim__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_sim__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_sim__DOT__clk__0 
        = vlSelfRef.cpu_sim__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_sim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcpu_sim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___trigger_anySet__act\n"); );
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

void Vcpu_sim___024root___act_sequent__TOP__0(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___act_sequent__TOP__0\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
                                                  | (IData)(vlSelfRef.cpu_sim__DOT__wd_reset));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      & (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte)))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_a) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_b) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
}

void Vcpu_sim___024root___eval_act(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_act\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst 
            = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
               | (IData)(vlSelfRef.cpu_sim__DOT__wd_reset));
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst 
            = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
               | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                  & (0xc0U == (0xc0U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte)))));
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_a) 
               | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_b) 
               | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
    }
}

void Vcpu_sim___024root___nba_sequent__TOP__0(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___nba_sequent__TOP__0\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hbc130b5a__0 = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6412bd72__0 = 0;
    CData/*4:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_way = 0;
    CData/*4:0*/ cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way;
    cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_way = 0;
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
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__up_n;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__up_n = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry_n;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry_n = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vfunc_cacheable_pa__1__Vfuncout;
    __Vfunc_cacheable_pa__1__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_cacheable_pa__1__pa;
    __Vfunc_cacheable_pa__1__pa = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__size;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__size = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__a;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__a = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__r = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__sh;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__sh = 0;
    CData/*0:0*/ __Vfunc_cacheable_pa__5__Vfuncout;
    __Vfunc_cacheable_pa__5__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_cacheable_pa__5__pa;
    __Vfunc_cacheable_pa__5__pa = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c = 0;
    IData/*31:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__size = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__sgn = 0;
    QData/*63:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__27__d = 0;
    CData/*6:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__pa;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__pa = 0;
    CData/*6:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__pa;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__pa = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__rd;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__rd = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sgn;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sgn = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__lsb;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__lsb = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__guard;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__guard = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sticky;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sticky = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__even;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__even = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__129__sel = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__even;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__even = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__135__sel = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh = 0;
    CData/*3:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total = 0;
    CData/*7:0*/ __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r;
    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r = 0;
    VlWide<3>/*65:0*/ __Vdly__cpu_sim__DOT__ms;
    VL_ZERO_W(66, __Vdly__cpu_sim__DOT__ms);
    QData/*63:0*/ __Vdly__cpu_sim__DOT__cyc;
    __Vdly__cpu_sim__DOT__cyc = 0;
    QData/*63:0*/ __Vdly__cpu_sim__DOT__last8;
    __Vdly__cpu_sim__DOT__last8 = 0;
    QData/*63:0*/ __VdlyMask__cpu_sim__DOT__last8;
    __VdlyMask__cpu_sim__DOT__last8 = 0;
    CData/*2:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__is;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0;
    QData/*35:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_pa;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_pa = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_cacheable;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_cacheable = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et = 0;
    CData/*2:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun = 0;
    CData/*5:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic = 0;
    QData/*35:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat = 0;
    QData/*63:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped = 0;
    CData/*2:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way = 0;
    CData/*2:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr = 0;
    CData/*2:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 0;
    CData/*2:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = 0;
    CData/*4:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl = 0;
    CData/*4:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst = 0;
    IData/*31:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt = 0;
    QData/*63:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits = 0;
    CData/*4:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run = 0;
    CData/*5:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt = 0;
    QData/*61:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem = 0;
    VlWide<4>/*115:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad;
    VL_ZERO_W(116, __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad);
    QData/*57:0*/ __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 = 0;
    SData/*15:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy = 0;
    CData/*6:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits = 0;
    SData/*9:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 0;
    CData/*6:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit = 0;
    SData/*8:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 = 0;
    SData/*15:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy = 0;
    CData/*6:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits = 0;
    SData/*9:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift = 0;
    CData/*7:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 0;
    CData/*6:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = 0;
    CData/*3:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit = 0;
    SData/*8:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift = 0;
    CData/*1:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break = 0;
    CData/*0:0*/ __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v1 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 = 0;
    CData/*2:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 = 0;
    CData/*2:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v76;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v76 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v64;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v64 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 = 0;
    CData/*0:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 = 0;
    CData/*6:0*/ __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20;
    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 = 0;
    CData/*2:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 = 0;
    CData/*4:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 = 0;
    CData/*4:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 = 0;
    QData/*63:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 = 0;
    CData/*3:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 = 0;
    CData/*3:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 = 0;
    CData/*3:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 = 0;
    QData/*63:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 = 0;
    CData/*3:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 = 0;
    CData/*3:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 = 0;
    IData/*31:0*/ __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5;
    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 = 0;
    CData/*3:0*/ __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5;
    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v0;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v0 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4;
    __VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v6;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v0;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v0 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4;
    __VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5 = 0;
    SData/*8:0*/ __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v6;
    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v6 = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_38;
    // Body
    if (VL_UNLIKELY((((VL_TESTPLUSARGS_I("dmem"s) && 
                       (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                              >> 0x0000000cU))) & (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                                                   >> 2U))))) {
        VL_WRITEF_NX("%8d  dmem %s asi=%02x va=%08x pa=%09x size=%0# wdata=%016x rdata=%016x fault=%0#\n",0,
                     64,vlSelfRef.cpu_sim__DOT__cyc,
                     8,((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])
                         ? 0x57U : ((0x00000400U & 
                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])
                                     ? 0x41U : 0x52U)),
                     8,(0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                       >> 2U)),32,(
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                                    << 0x0000001eU) 
                                                   | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U] 
                                                      >> 2U)),
                     36,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa,
                     2,(3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U]),
                     64,(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[1U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]))),
                     64,(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[2U])) 
                          << 0x0000003eU) | (((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[1U])) 
                                              << 0x0000001eU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[0U])) 
                                                >> 2U))),
                     2,(3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[0U]));
    }
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 = 0U;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_escc__DOT__ptr 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 = 0U;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5 = 0U;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count;
    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count;
    if (VL_UNLIKELY(((VL_TESTPLUSARGS_I("mem"s) && 
                      (1U & (vlSelfRef.cpu_sim__DOT__ms[2U] 
                             >> 1U)))))) {
        VL_WRITEF_NX("%8d  mem %s%s pa=%09x be=%02x wdata=%016x rdata=%016x err=%0# owner=%0#\n",0,
                     64,vlSelfRef.cpu_sim__DOT__cyc,
                     8,((0x00004000U & vlSelfRef.cpu_sim__DOT__mr[3U])
                         ? 0x57U : 0x52U),8,((0x00002000U 
                                              & vlSelfRef.cpu_sim__DOT__mr[3U])
                                              ? 0x62U
                                              : 0x20U),
                     36,vlSelfRef.cpu_sim__DOT__bpa,
                     8,(0x000000ffU & vlSelfRef.cpu_sim__DOT__mr[2U]),
                     64,(((QData)((IData)(vlSelfRef.cpu_sim__DOT__mr[1U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cpu_sim__DOT__mr[0U]))),
                     64,(((QData)((IData)(vlSelfRef.cpu_sim__DOT__ms[1U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cpu_sim__DOT__ms[0U]))),
                     1,(1U & vlSelfRef.cpu_sim__DOT__ms[2U]),
                     2,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner));
    }
    vlSelfRef.__Vdly__cpu_sim__DOT__m_cnt = vlSelfRef.cpu_sim__DOT__m_cnt;
    vlSelfRef.__Vdly__cpu_sim__DOT__gap_q = vlSelfRef.cpu_sim__DOT__gap_q;
    vlSelfRef.__Vdly__cpu_sim__DOT__beat = vlSelfRef.cpu_sim__DOT__beat;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v1 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v2 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v3 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v4 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v5 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v6 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__ram__v7 = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__mst = vlSelfRef.cpu_sim__DOT__mst;
    __Vdly__cpu_sim__DOT__ms[0U] = vlSelfRef.cpu_sim__DOT__ms[0U];
    __Vdly__cpu_sim__DOT__ms[1U] = vlSelfRef.cpu_sim__DOT__ms[1U];
    __Vdly__cpu_sim__DOT__ms[2U] = vlSelfRef.cpu_sim__DOT__ms[2U];
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_ptype 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_ptype;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_no_fault 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_no_fault;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_fault 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_fault;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_done 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_done;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctpr 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctpr;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_probe 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_probe;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v1 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v64 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v65 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v66 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v67 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v68 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v69 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v70 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v71 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v72 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v73 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v74 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v75 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v76 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v77 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v78 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v79 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v80 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v81 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v82 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v83 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v84 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v85 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v86 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v87 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v88 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v89 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v90 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v91 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v92 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v93 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v94 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v95 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v96 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v97 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v98 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v99 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v100 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v101 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v102 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v103 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v104 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v105 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v106 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v107 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v108 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v109 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v110 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v111 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v112 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v113 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v114 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v115 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v116 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v117 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v118 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v119 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v120 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v121 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v122 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v123 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v124 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v125 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v126 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v127 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v128 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v129 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v193 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v194 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v200 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v201 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 = 0U;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U];
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U];
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U];
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U];
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_atomic 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_atomic;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_data 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_data;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_err 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_err;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_snooped 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_snooped;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_wr 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_wr;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_cur 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_cur;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_rd 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_rd;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_line__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_line__v2 = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_way 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_way;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_count 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_count;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__qs 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__qs;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ds 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ds;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v0 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v1 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v4 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v5 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v6 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v7 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v8 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v9 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v10 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v11 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v12 = 0U;
    vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v15 = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st;
    if ((((IData)(vlSelfRef.cpu_sim__DOT__trace) & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid)) 
         & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)))) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap) {
            VL_WRITEF_NX("%8d  %08x  TRAP tt=%02x  (npc %08x) cwp %0# et %0#\n",0,
                         64,vlSelfRef.cpu_sim__DOT__cyc,
                         32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc,
                         8,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt),
                         32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_npc,
                         3,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp),
                         1,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et);
        } else {
            __Vtemp_1 = Vcpu_sim___024unit::__Venumtab_enum_name29
                .at((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                     >> 0x0000001bU));
            VL_WRITEF_NX("%8d  %08x  %-10@ rd=%0# r=%08x  icc=%b cwp=%0#\n",0,
                         64,vlSelfRef.cpu_sim__DOT__cyc,
                         32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc,
                         -1,&(__Vtemp_1),5,(0x0000001fU 
                                            & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                               >> 0x00000016U)),
                         32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval,
                         4,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc),
                         3,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp);
        }
    }
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_v 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_flash_v;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_l 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_flash_l;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_cacheable 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_cacheable;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__inval_line 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__inval_line;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_val 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_val;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_mask 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_mask;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_ctl 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_ctl;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_sts 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_sts;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrv 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrv;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrc 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrc;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrs 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrs;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__action 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__action;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[0U];
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[1U];
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[2U];
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_inval 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_inval;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_pa 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_done 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_done;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v64 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 = 0U;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v76 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v0 = 0U;
    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v1 = 0U;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_pa = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_cacheable 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_cacheable;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__is = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is;
    if (VL_UNLIKELY(((VL_GTES_IQQ(64, vlSelfRef.cpu_sim__DOT__cyc, vlSelfRef.cpu_sim__DOT__dbg_from) 
                      & VL_LTES_IQQ(64, vlSelfRef.cpu_sim__DOT__cyc, vlSelfRef.cpu_sim__DOT__dbg_to))))) {
        __Vtemp_2 = Vcpu_sim___024unit::__Venumtab_enum_name79
            [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is];
        __Vtemp_3 = Vcpu_sim___024unit::__Venumtab_enum_name80
            [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds];
        __Vtemp_4 = Vcpu_sim___024unit::__Venumtab_enum_name73
            [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws];
        __Vtemp_5 = Vcpu_sim___024unit::__Venumtab_enum_name65
            [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st];
        __Vtemp_6 = Vcpu_sim___024unit::__Venumtab_enum_name81
            [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st];
        VL_WRITEF_NX("%8d D v%0# pc=%08x go%0# | E v%0# pc=%08x go%0# | M v%0# pc=%08x | W v%0# pc=%08x | F pc=%08x pend%0# | is=%@ ds=%@ ws=%@ ic=%@ dc=%@\n",0,
                     64,vlSelfRef.cpu_sim__DOT__cyc,
                     1,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid),
                     32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_pc,
                     1,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go),
                     1,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid,
                     32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc,
                     1,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go),
                     1,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid,
                     32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_pc,
                     1,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid),
                     32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc,
                     32,vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc,
                     1,(IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending),
                     -1,&(__Vtemp_2),-1,&(__Vtemp_3),
                     -1,&(__Vtemp_4),-1,&(__Vtemp_5),
                     -1,&(__Vtemp_6));
    }
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc;
    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc;
    __Vdly__cpu_sim__DOT__cyc = (1ULL + vlSelfRef.cpu_sim__DOT__cyc);
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__dat_wr_a) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__quiet)))))) {
            VL_WRITEF_NX("%c",0,8,vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte);
            Verilated::runFlushCallbacks();
        }
        __Vdly__cpu_sim__DOT__last8 = ((vlSelfRef.cpu_sim__DOT__last8 
                                        << 8U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte)));
        __VdlyMask__cpu_sim__DOT__last8 = 0xffffffffffffffffULL;
    }
    if (VL_UNLIKELY((((0x535420444f4e450aULL == vlSelfRef.cpu_sim__DOT__last8) 
                      | (0x005420444f4e450dULL == (0x00ffffffffffffffULL 
                                                   & vlSelfRef.cpu_sim__DOT__last8)))))) {
        VL_WRITEF_NX("\ncpu_sim: done after %0d cycles\n",0,
                     64,vlSelfRef.cpu_sim__DOT__cyc);
        VL_FINISH_MT("sim/cpu/cpu_sim.sv", 181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.cpu_sim__DOT__wd_reset) 
                      & (~ (IData)(vlSelfRef.cpu_sim__DOT__keep_wd)))))) {
        VL_WRITEF_NX("\ncpu_sim: watchdog reset (error mode) at cycle %0d\n",0,
                     64,vlSelfRef.cpu_sim__DOT__cyc);
        VL_FINISH_MT("sim/cpu/cpu_sim.sv", 185, "");
    }
    if (VL_UNLIKELY((VL_GTES_IQQ(64, vlSelfRef.cpu_sim__DOT__cyc, vlSelfRef.cpu_sim__DOT__budget)))) {
        VL_WRITEF_NX("\ncpu_sim: cycle budget exhausted\n",0);
        VL_FINISH_MT("sim/cpu/cpu_sim.sv", 189, "");
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__we) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_hcea681a3__0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_h9e4664c8__0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_ha830843f__0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_h06e81a67__0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata;
        if ((0x87U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa))) {
            vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_hcea681a3__0;
            vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa;
            vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 = 1U;
            vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_h9e4664c8__0;
            vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa;
            vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 = 1U;
            vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_ha830843f__0;
            vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa;
            vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 = 1U;
            vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_h06e81a67__0;
            vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa;
            vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__4__KET____DOT__u_tag__b_we) {
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0 = 1U;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 8U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2 
            = (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
                              >> 0x10U));
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3 
            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata 
               >> 0x18U);
        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__4__KET____DOT__u_data__b_we) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 8U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x10U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x18U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x20U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x28U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x30U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
                                          >> 0x38U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7 = 1U;
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_two_cycles) 
              & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second))));
    if ((0x00000100U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U])) {
        if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U])) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 
                = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U])) 
                    << 0x0000003eU) | (((QData)((IData)(
                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[2U])) 
                                        << 0x0000001eU) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U])) 
                                          >> 2U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 
                = (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] 
                                  >> 4U));
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0 = 1U;
        } else if ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U])) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 
                = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[2U] 
                    << 0x0000001eU) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U] 
                                       >> 2U));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 
                = (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] 
                                  >> 4U));
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1 = 1U;
        } else {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 
                = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[2U] 
                    << 0x0000001eU) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U] 
                                       >> 2U));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 
                = (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] 
                                  >> 4U));
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2 = 1U;
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_dbl) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_data;
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 
                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr) 
                                  >> 1U));
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3 = 1U;
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 
                = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_data 
                           >> 0x20U));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 
                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr) 
                                  >> 1U));
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4 = 1U;
        } else {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 
                = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_data 
                           >> 0x20U));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 
                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr) 
                                  >> 1U));
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5 = 1U;
        }
    }
    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_tag__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr];
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_prev 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_prev 
        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_data__b_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
        [(0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 3U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
        [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 5U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
        [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 5U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
        [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 5U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
        [(0x0000007fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa 
                                 >> 5U)))];
    vlSelfRef.cpu_sim__DOT__last8 = ((__Vdly__cpu_sim__DOT__last8 
                                      & __VdlyMask__cpu_sim__DOT__last8) 
                                     | (vlSelfRef.cpu_sim__DOT__last8 
                                        & (~ __VdlyMask__cpu_sim__DOT__last8)));
    __VdlyMask__cpu_sim__DOT__last8 = 0ULL;
    vlSelfRef.cpu_sim__DOT__cyc = __Vdly__cpu_sim__DOT__cyc;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
        [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 6U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
        [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 6U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
        [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 6U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
        [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 6U)))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_tag__a_rdata 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem
        [(0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                 >> 6U)))];
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_tick = 0U;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_tick = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14))) {
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en) {
                if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out 
                        = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out)));
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr13) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr12))));
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_tick 
                        = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out)));
                } else {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt 
                        = (0x0000ffffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt) 
                                          - (IData)(1U)));
                }
            }
        } else {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt 
                = (0x0000ffffU & ((IData)(1U) + (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr13) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr12))));
        }
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14))) {
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en) {
                if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out 
                        = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out)));
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr13) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr12))));
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_tick 
                        = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out)));
                } else {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt 
                        = (0x0000ffffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt) 
                                          - (IData)(1U)));
                }
            }
        } else {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt 
                = (0x0000ffffU & ((IData)(1U) + (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr13) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr12))));
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 
            = (0x000000e3U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14));
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 
            = (0x00000061U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5));
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 
            = (4U | (0x000000fbU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4)));
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 
            = (0x000000feU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3));
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 = 0x20U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 = 4U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11 = 8U;
        }
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun = 1U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr15 = 0xf8U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_first_armed = 1U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_held = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_a = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) {
            if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr15 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) 
              & (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2)) 
             & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5) 
                >> 3U))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun = 0U;
        } else if ((1U & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5) 
                              >> 3U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__cmd_send_abort)))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun = 1U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
             & (0x20U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_first_armed = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3)))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_first_armed = 1U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_pop) {
            if ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                              >> 3U)))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_first_armed = 0U;
            }
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
             & (0x10U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_a = 0U;
        } else if (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched)) 
                    & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_change)))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched = 1U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_held 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live;
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_a = 1U;
            }
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched) 
                    & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_change) 
                       >> 4U))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_held 
                = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_held)) 
                   | (0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live)));
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_a = 1U;
            }
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 
            = (0x000000e3U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14));
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 
            = (0x00000061U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5));
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 
            = (4U | (0x000000fbU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4)));
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 
            = (0x000000feU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3));
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 = 0x20U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 = 4U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11 = 8U;
        }
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun = 1U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr15 = 0xf8U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_first_armed = 1U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_held = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_b = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b) {
            if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr15 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b) 
              & (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2)) 
             & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5) 
                >> 3U))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun = 0U;
        } else if ((1U & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5) 
                              >> 3U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__cmd_send_abort)))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun = 1U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
             & (0x20U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_first_armed = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3)))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_first_armed = 1U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_pop) {
            if ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                              >> 3U)))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_first_armed = 0U;
            }
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
             & (0x10U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_b = 0U;
        } else if (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched)) 
                    & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_change)))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched = 1U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_held 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live;
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_b = 1U;
            }
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched) 
                    & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_change) 
                       >> 4U))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_held 
                = ((0x0fU & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_held)) 
                   | (0x00000010U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live)));
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__ext_ip_b = 1U;
            }
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mstage = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q = 0ULL;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mstage 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)
                ? 0U : ((0x0000000eU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mstage) 
                                        << 1U)) | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) 
                                                   & (8U 
                                                      != 
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                                       >> 0x0000001bU)))));
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_start) {
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run = 1U;
            if ((7U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt = 0x3aU;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q = 0ULL;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem = 0ULL;
                __Vtemp_8[0U] = (IData)((0x001fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                               >> 4U))));
                __Vtemp_8[1U] = (IData)(((0x001fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                >> 4U))) 
                                         >> 0x00000020U));
                __Vtemp_8[2U] = 0U;
                __Vtemp_8[3U] = 0U;
                VL_SHIFTL_WWI(116,116,32, __Vtemp_9, __Vtemp_8, 0x0000003dU);
                __Vtemp_10[0U] = (IData)((0x001fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                >> 4U))));
                __Vtemp_10[1U] = (IData)(((0x001fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                               << 0x0000001cU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                 >> 4U))) 
                                          >> 0x00000020U));
                __Vtemp_10[2U] = 0U;
                __Vtemp_10[3U] = 0U;
                VL_SHIFTL_WWI(116,116,32, __Vtemp_11, __Vtemp_10, 0x0000003cU);
                if ((0x02000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] 
                        = __Vtemp_9[0U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] 
                        = __Vtemp_9[1U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] 
                        = __Vtemp_9[2U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] 
                        = (0x000fffffU & __Vtemp_9[3U]);
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] 
                        = __Vtemp_11[0U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] 
                        = __Vtemp_11[1U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] 
                        = __Vtemp_11[2U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] 
                        = (0x000fffffU & __Vtemp_11[3U]);
                }
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt = 0x39U;
                if (((0x001fffffffffffffULL & (((QData)((IData)(
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
                                                     >> 4U))))) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                        = (0x3fffffffffffffffULL & 
                           ((0x001fffffffffffffULL 
                             & (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                                 << 0x0000001cU) | 
                                ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                 >> 4U))) - (0x001fffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                                 << 0x0000001cU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                   >> 4U)))));
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q = 1ULL;
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                        = (0x001fffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                                >> 4U)));
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q = 0ULL;
                }
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] = 0U;
            }
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run) {
            if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done = 1U;
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt 
                    = (0x0000003fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt) 
                                      - (IData)(1U)));
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt) {
                    VL_SHIFTL_WWI(116,116,32, __Vtemp_15, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad, 2U);
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] 
                        = __Vtemp_15[0U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] 
                        = __Vtemp_15[1U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] 
                        = __Vtemp_15[2U];
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] 
                        = (0x000fffffU & __Vtemp_15[3U]);
                    if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sq_trial 
                                       >> 0x3dU)))) {
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                            = (0x03fffffffffffffeULL 
                               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                                  << 1U));
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem2;
                    } else {
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                            = (1ULL | (0x03fffffffffffffeULL 
                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                                          << 1U)));
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sq_trial;
                    }
                } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__dv_trial 
                                          >> 0x3dU)))) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                        = (0x3ffffffffffffffeULL & 
                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                            << 1U));
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                        = (0x03fffffffffffffeULL & 
                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                            << 1U));
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                        = (1ULL | (0x03fffffffffffffeULL 
                                   & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
                                      << 1U)));
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__dv_trial;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_started = 0U;
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_started = 1U;
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_started = 0U;
    }
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line = 1U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_a = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf = 0U;
    } else {
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__dat_wr_a) 
             | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) 
                & (8U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full = 1U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_a = 0U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
             & (0x28U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_a = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__cmd_send_abort) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_load) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy = 1U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt = 1U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift 
                = ((VL_EXTEND_II(2,1, ([&]() {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__even 
                                    = (1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                                             >> 1U));
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n 
                                    = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_data_n;
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d 
                                    = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf;
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p = 0U;
                                if (VL_LTS_III(32, 0U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d)));
                                }
                                if (VL_LTS_III(32, 1U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                                  >> 1U)));
                                }
                                if (VL_LTS_III(32, 2U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                                  >> 2U)));
                                }
                                if (VL_LTS_III(32, 3U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                                  >> 3U)));
                                }
                                if (VL_LTS_III(32, 4U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                                  >> 4U)));
                                }
                                if (VL_LTS_III(32, 5U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                                  >> 5U)));
                                }
                                if (VL_LTS_III(32, 6U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                                  >> 6U)));
                                }
                                if (VL_LTS_III(32, 7U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p 
                                        = ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p) 
                                           ^ ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__d) 
                                              >> 7U));
                                }
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__Vfuncout 
                                    = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__even)
                                              ? (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p)
                                              : (~ (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__p))));
                            }(), (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_of__128__Vfuncout))) 
                    << 8U) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf));
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits 
                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_data_n) 
                                  + ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4))
                                      ? 1U : 0U)));
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left 
                = ((2U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                                 >> 2U))) ? 3U : ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 2U));
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_a = 1U;
            }
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk))) {
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop) {
                if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt) 
                     == (0x0000007fU & (VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit), 1U) 
                                        - (IData)(1U))))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt = 0U;
                    if ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left))) {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy = 0U;
                    } else {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left 
                            = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left) 
                                     - (IData)(1U)));
                    }
                } else {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt)));
                }
            } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt) 
                        == (0x0000007fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit) 
                                           - (IData)(1U))))) {
                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt = 0U;
                if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop = 1U;
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line = 1U;
                } else {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits 
                        = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits) 
                                          - (IData)(1U)));
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line 
                        = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift));
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift 
                        = (0x00000200U | (0x000001ffU 
                                          & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift) 
                                             >> 1U)));
                }
            } else {
                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt)));
            }
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_resolved = 0U;
    } else if ((1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) 
                      | (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_resolved = 0U;
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_resolved = 1U;
    }
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line = 1U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_b = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf = 0U;
    } else {
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_7) 
              & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                 >> 6U)) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b) 
                            & (8U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full = 1U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_b = 0U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
             & (0x28U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_b = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__cmd_send_abort) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_load) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy = 1U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt = 1U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop = 0U;
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift 
                = ((VL_EXTEND_II(2,1, ([&]() {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__even 
                                    = (1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                                             >> 1U));
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n 
                                    = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_data_n;
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d 
                                    = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf;
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p = 0U;
                                if (VL_LTS_III(32, 0U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d)));
                                }
                                if (VL_LTS_III(32, 1U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                                  >> 1U)));
                                }
                                if (VL_LTS_III(32, 2U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                                  >> 2U)));
                                }
                                if (VL_LTS_III(32, 3U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                                  >> 3U)));
                                }
                                if (VL_LTS_III(32, 4U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                                  >> 4U)));
                                }
                                if (VL_LTS_III(32, 5U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                                  >> 5U)));
                                }
                                if (VL_LTS_III(32, 6U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                                 ^ 
                                                 ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                                  >> 6U)));
                                }
                                if (VL_LTS_III(32, 7U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__n))) {
                                    __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p 
                                        = ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p) 
                                           ^ ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__d) 
                                              >> 7U));
                                }
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__Vfuncout 
                                    = (1U & ((IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__even)
                                              ? (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p)
                                              : (~ (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__p))));
                            }(), (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_of__134__Vfuncout))) 
                    << 8U) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf));
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits 
                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_data_n) 
                                  + ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4))
                                      ? 1U : 0U)));
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left 
                = ((2U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                                 >> 2U))) ? 3U : ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 2U));
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__tx_ip_b = 1U;
            }
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk))) {
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop) {
                if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt) 
                     == (0x0000007fU & (VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit), 1U) 
                                        - (IData)(1U))))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt = 0U;
                    if ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left))) {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy = 0U;
                    } else {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left 
                            = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left) 
                                     - (IData)(1U)));
                    }
                } else {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt)));
                }
            } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt) 
                        == (0x0000007fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit) 
                                           - (IData)(1U))))) {
                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt = 0U;
                if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop = 1U;
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line = 1U;
                } else {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits 
                        = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits) 
                                          - (IData)(1U)));
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line 
                        = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift));
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift 
                        = (0x00000200U | (0x000001ffU 
                                          & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift) 
                                             >> 1U)));
                }
            } else {
                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt)));
            }
        }
    }
    if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
          | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked = 0U;
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_done) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked = 1U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dz = 0U;
    if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)))) {
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) 
                 & (8U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU)))) {
                if ((0U == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dz = 1U;
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_special_held = 0U;
        __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v0 = 1U;
    } else {
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_push) 
             & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_break_char))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break = 1U;
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break = 0U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
             & (0x30U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_special_held = 0U;
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_push) 
             & (~ ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break) 
                     & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_break_char)) 
                    & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))) 
                   & (0x0100U == ((2U >= (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count) 
                                                - (IData)(1U))))
                                   ? vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
                                  [(3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count) 
                                          - (IData)(1U)))]
                                   : 0U)))))) {
            if ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun = 1U;
                __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_framing) 
                        << 8U) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_char));
                __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3 = 1U;
            } else {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT____Vlvbound_h91a52c22__0 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_framing) 
                        << 8U) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_char));
                if ((2U >= (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))) {
                    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 
                        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT____Vlvbound_h91a52c22__0;
                    __VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 
                        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count;
                    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4 = 1U;
                }
                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count)));
            }
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_parity_bad) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err = 1U;
            }
            if (((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_parity_bad) 
                   & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                      >> 2U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_framing)) 
                 | (3U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count)))) {
                if (((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                   >> 3U))) | (3U == 
                                               (3U 
                                                & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                                   >> 3U))))) {
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_special_held = 1U;
                }
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_pop) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count 
                = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count) 
                         - (IData)(1U)));
            __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
                [1U];
            __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5 = 1U;
            __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v6 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
                [2U];
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_special_held = 0U;
        __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v0 = 1U;
    } else {
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_push) 
             & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_break_char))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break = 1U;
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in))) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break = 0U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
             & (0x30U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))))) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err = 0U;
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_special_held = 0U;
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_push) 
             & (~ ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break) 
                     & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_break_char)) 
                    & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))) 
                   & (0x0100U == ((2U >= (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count) 
                                                - (IData)(1U))))
                                   ? vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
                                  [(3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count) 
                                          - (IData)(1U)))]
                                   : 0U)))))) {
            if ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun = 1U;
                __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_framing) 
                        << 8U) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_char));
                __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3 = 1U;
            } else {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT____Vlvbound_h91a52c22__0 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_framing) 
                        << 8U) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_char));
                if ((2U >= (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))) {
                    __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 
                        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT____Vlvbound_h91a52c22__0;
                    __VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 
                        = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count;
                    __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4 = 1U;
                }
                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)));
            }
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_parity_bad) {
                vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err = 1U;
            }
            if (((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_parity_bad) 
                   & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                      >> 2U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_framing)) 
                 | (3U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)))) {
                if (((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                   >> 3U))) | (3U == 
                                               (3U 
                                                & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                                   >> 3U))))) {
                    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_special_held = 1U;
                }
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_pop) {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count 
                = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count) 
                         - (IData)(1U)));
            __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
                [1U];
            __VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5 = 1U;
            __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v6 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
                [2U];
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dsigned = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__qneg = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ovf_pre = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[2U] = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo = 0U;
    } else {
        if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd 
                = (3U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U] 
                          << 1U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] 
                                    >> 0x0000001fU)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)))) {
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) 
                 & (8U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU)))) {
                if ((0U != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dsigned 
                        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                 >> 0x0000000cU));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__qneg 
                        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_neg) 
                           ^ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_neg));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ovf_pre 
                        = ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_abs 
                                    >> 0x20U)) >= vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_abs);
                }
            }
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[0U] 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[0U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[1U] 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[1U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[2U] 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[2U];
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush) {
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun = 0U;
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) 
                    & (8U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                              >> 0x0000001bU)))) {
            if ((0U != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun = 1U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt = 0x20U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num 
                    = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_abs);
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_abs 
                               >> 0x20U));
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo = 0U;
            }
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun) {
            if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone = 1U;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__step__DOT__trial 
                    = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem)) 
                        << 1U) | (QData)((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num 
                                                  >> 0x1fU))));
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt 
                    = (0x0000003fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt) 
                                      - (IData)(1U)));
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num 
                    = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num 
                       << 1U);
                if ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__step__DOT__trial 
                     >= (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__den)))) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo 
                        = (1U | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo 
                                 << 1U));
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem 
                        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__step__DOT__trial) 
                           - vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__den);
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo 
                        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo 
                           << 1U);
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem 
                        = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__step__DOT__trial);
                }
            }
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annulled = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_result = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wdata = 0ULL;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annulled 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_annul_next) 
                   | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot) 
                       & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_16)) 
                      | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul) 
                         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have))));
        }
        if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot)) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annulled = 1U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_result 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wdata 
                = ((0x1cU == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                              >> 0x0000001bU)) ? ((0x00000040U 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[0U])))
                                                   : 
                                                  ((0x00000080U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U])
                                                    ? (QData)((IData)(
                                                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[2U]))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                                         >> 0x0000000aU)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[4U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[3U])))
                                                     : (QData)((IData)(
                                                                       ((0x00400000U 
                                                                         & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])
                                                                         ? 
                                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[3U]
                                                                         : 
                                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[4U]))))))
                    : ((3U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                     >> 0x0000000aU)))
                        ? (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs3v)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs4v)))
                        : (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs3v))));
        }
    }
    if (vlSelfRef.cpu_sim__DOT__rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner_q = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__locked_q = 0U;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner_q 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__owner;
        if ((IData)(((vlSelfRef.cpu_sim__DOT__mr[3U] 
                      >> 0x0000000fU) & (vlSelfRef.cpu_sim__DOT__ms[2U] 
                                         >> 1U)))) {
            if ((IData)((0x1000U == (0x5000U & vlSelfRef.cpu_sim__DOT__mr[3U])))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__locked_q = 1U;
            } else if ((0x00004000U & vlSelfRef.cpu_sim__DOT__mr[3U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__locked_q = 0U;
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ser_commit_q 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst)) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
               & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall))) 
              & ([&]() {
                    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c 
                        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                           >> 0x0000001bU);
                    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__Vfuncout 
                        = (((((((0x16U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c)) 
                                | (0x17U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c))) 
                               | (0x13U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c))) 
                              | (0x0eU == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c))) 
                             | (0x0fU == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c))) 
                            | (0x10U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c))) 
                           | (0x0dU == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__c)));
                }(), (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__6__Vfuncout))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[0U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[1U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[2U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[3U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__error_q = (
                                                   (~ (IData)(vlSelfRef.cpu_sim__DOT__rst)) 
                                                   & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error));
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v0;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1] 
            = ((0xffffffff00000000ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v1)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2] 
            = ((0x00000000ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v2)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v3;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4] 
            = ((0xffffffff00000000ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v4)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5] 
            = ((0x00000000ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs__v5)) 
                  << 0x00000020U));
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U] 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[0U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U] 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[1U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U] 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[2U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U] 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad[3U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem;
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v0)));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5;
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0]) 
               | (IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v0));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break;
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v0) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[2U] = 0U;
    }
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[2U] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v3;
    }
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[__VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v4;
    }
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[0U] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v5;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[1U] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo__v6;
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break;
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v0) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[2U] = 0U;
    }
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[2U] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v3;
    }
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[__VdlyDim0__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v4;
    }
    if (__VdlySet__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5) {
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[0U] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v5;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[1U] 
            = __VdlyVal__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo__v6;
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo;
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[3U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata;
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
    if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any)))) {
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) {
            if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr13 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr12 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en = 
        ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__rst))) 
         && (0x00960000U <= (0x03ffffffU & ((IData)(0x004b0000U) 
                                            + vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc))));
    if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any)))) {
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b) {
            if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr13 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr12 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__den = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__pil = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__wim = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sign = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_fault = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_inst = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_start) {
            if ((7U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__den 
                    = (0x001fffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                                 << 0x0000001cU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                                   >> 4U)));
            }
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sign 
                = ((7U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)) 
                   && (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U]) 
                             >> 7U)));
            if ((7U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp 
                    = (0x00003fffU & ((0x02000000U 
                                       & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])
                                       ? VL_SHIFTRS_III(14,14,32, 
                                                        (0x00003fffU 
                                                         & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                              << 7U) 
                                                             | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                                >> 0x00000019U)) 
                                                            - (IData)(1U))), 1U)
                                       : VL_SHIFTRS_III(14,14,32, 
                                                        (0x00003fffU 
                                                         & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                                             << 7U) 
                                                            | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                                               >> 0x00000019U))), 1U)));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt = 1U;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp 
                    = (0x00003fffU & (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                                        << 7U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                                                  >> 0x00000019U)) 
                                      - ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                                          << 7U) | 
                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                                          >> 0x00000019U))));
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt = 0U;
            }
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)))) {
            if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wy) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_y;
                }
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wicc) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_icc;
                }
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                              >> 0x0000001fU)))) {
                    if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                        if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                            if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                              >> 0x0000001bU)))) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__pil 
                                        = (0x0000000fU 
                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                              >> 8U));
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef 
                                        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                                 >> 0x0cU));
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc 
                                        = (0x0000000fU 
                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                              >> 0x14U));
                                }
                                if ((0x08000000U & 
                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__wim 
                                        = (0x000000ffU 
                                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val);
                                }
                            }
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                          >> 0x0000001cU)))) {
                                if ((0x08000000U & 
                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y 
                                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_fault 
                = (3U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_inst 
                = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                           >> 2U));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc;
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_npc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_npc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_npc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_pc;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid = 1U;
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid = 1U;
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid = 0U;
        }
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
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live 
        = (5U | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break) 
                  << 4U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun) 
                            << 3U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rr8 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))
            ? (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
               [0U]) : 0x000000ffU);
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_push = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_char = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_framing = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_break_char = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1 = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_in_q = 1U;
    } else {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3))) {
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_clk) {
                if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs))) {
                    if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs))) {
                        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt) 
                             == (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit), 1U)))) {
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total 
                                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_data_n) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4))
                                                    ? 1U
                                                    : 0U)));
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_framing 
                                = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in)));
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift;
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_push = 1U;
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 0U;
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = 0U;
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r = 0xffU;
                            if (VL_LTS_III(32, 0U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xfeU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (1U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 1U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xfdU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (2U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 2U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xfbU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (4U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 3U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xf7U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (8U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 4U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xefU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (0x00000010U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 5U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xdfU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (0x00000020U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 6U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0xbfU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (0x00000040U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            if (VL_LTS_III(32, 7U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r 
                                    = ((0x7fU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r)) 
                                       | (0x00000080U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__sh)));
                            }
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__Vfuncout 
                                = __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__r;
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_char 
                                = __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_present__130__Vfuncout;
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_break_char 
                                = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in)) 
                                   & (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift)));
                        } else {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt 
                                = (0x0000007fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt)));
                        }
                    } else {
                        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt) 
                             == (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit), 1U)))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT____Vlvbound_ha1a42892__0 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in;
                            if ((8U >= (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit))) {
                                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit))) 
                                        & (IData)(__Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift)) 
                                       | (0x01ffU & 
                                          ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT____Vlvbound_ha1a42892__0) 
                                           << (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit))));
                            }
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit)));
                        }
                        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt) 
                             == (0x0000007fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit) 
                                                - (IData)(1U))))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = 0U;
                            if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit) 
                                 == (0x0000000fU & 
                                     ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_data_n) 
                                      + ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4))
                                          ? 1U : 0U))))) {
                                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 3U;
                            }
                        } else {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt 
                                = (0x0000007fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt)));
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs))) {
                    if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt) 
                         == (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit), 1U)))) {
                        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 0U;
                        }
                    }
                    if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt) 
                         == (0x0000007fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit) 
                                            - (IData)(1U))))) {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = 0U;
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 2U;
                    } else {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt)));
                    }
                } else if (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in)) 
                            & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_in_q))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 1U;
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = 1U;
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit = 0U;
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift = 0U;
                }
            }
        } else {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_clk) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_in_q 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in;
        }
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live 
        = (5U | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break) 
                  << 4U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun) 
                            << 3U)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rr8 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))
            ? (0x000000ffU & vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
               [0U]) : 0x000000ffU);
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_push = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any) {
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit = 0U;
        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_char = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_framing = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_break_char = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1 = 0U;
        vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_in_q = 1U;
    } else {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3))) {
            if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_clk) {
                if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs))) {
                    if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs))) {
                        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt) 
                             == (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit), 1U)))) {
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total 
                                = (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_data_n) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4))
                                                    ? 1U
                                                    : 0U)));
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_framing 
                                = (1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in)));
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift;
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_push = 1U;
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 0U;
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = 0U;
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r = 0xffU;
                            if (VL_LTS_III(32, 0U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xfeU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (1U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 1U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xfdU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (2U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 2U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xfbU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (4U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 3U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xf7U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (8U & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 4U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xefU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (0x00000010U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 5U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xdfU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (0x00000020U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 6U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0xbfU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (0x00000040U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            if (VL_LTS_III(32, 7U, (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__total))) {
                                __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r 
                                    = ((0x7fU & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r)) 
                                       | (0x00000080U 
                                          & (IData)(__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__sh)));
                            }
                            __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__Vfuncout 
                                = __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__r;
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_char 
                                = __Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_present__136__Vfuncout;
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_break_char 
                                = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in)) 
                                   & (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift)));
                        } else {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt 
                                = (0x0000007fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt)));
                        }
                    } else {
                        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt) 
                             == (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit), 1U)))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT____Vlvbound_ha1a42892__0 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in;
                            if ((8U >= (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit))) {
                                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit))) 
                                        & (IData)(__Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift)) 
                                       | (0x01ffU & 
                                          ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT____Vlvbound_ha1a42892__0) 
                                           << (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit))));
                            }
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit)));
                        }
                        if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt) 
                             == (0x0000007fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit) 
                                                - (IData)(1U))))) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = 0U;
                            if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit) 
                                 == (0x0000000fU & 
                                     ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_data_n) 
                                      + ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4))
                                          ? 1U : 0U))))) {
                                __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 3U;
                            }
                        } else {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt 
                                = (0x0000007fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt)));
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs))) {
                    if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt) 
                         == (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit), 1U)))) {
                        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in) {
                            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 0U;
                        }
                    }
                    if (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt) 
                         == (0x0000007fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit) 
                                            - (IData)(1U))))) {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = 0U;
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 2U;
                    } else {
                        __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt)));
                    }
                } else if (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in)) 
                            & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_in_q))) {
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 1U;
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = 1U;
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit = 0U;
                    __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift = 0U;
                }
            }
        } else {
            __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))) {
                            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1 
                                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_clk) {
            vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_in_q 
                = vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in;
        }
    }
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__dv_trial 
        = (0x3fffffffffffffffULL & (VL_SHIFTL_QQI(62,62,32, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem, 1U) 
                                    - vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__den));
    __Vtemp_19[0U] = (IData)((0x001fffffffffffffULL 
                              & (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                                  << 0x0000001cU) | 
                                 ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                  >> 4U))));
    __Vtemp_19[1U] = (IData)(((0x001fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U])) 
                                   << 0x0000001cU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])) 
                                     >> 4U))) >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    __Vtemp_19[3U] = 0U;
    __Vtemp_20[0U] = (IData)((0x001fffffffffffffULL 
                              & (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                  << 0x0000001cU) | 
                                 ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                  >> 4U))));
    __Vtemp_20[1U] = (IData)(((0x001fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U])) 
                                   << 0x0000001cU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])) 
                                     >> 4U))) >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    VL_MUL_W(4, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[0U] 
        = __Vtemp_21[0U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[1U] 
        = __Vtemp_21[1U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[2U] 
        = __Vtemp_21[2U];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1[3U] 
        = (0x000003ffU & __Vtemp_21[3U]);
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_change 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live) 
            ^ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_prev)) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr15) 
               >> 3U) & (0x00000017U | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun) 
                                        << 3U))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_change 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live) 
            ^ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_prev)) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr15) 
               >> 3U) & (0x00000017U | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun) 
                                        << 3U))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 
        = __Vdly__cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone)
            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3[0U]);
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_annul_next = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__den = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s = 1U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tt = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc = 4U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_annul_next = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving) 
                          & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))))) {
                if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf)))) {
                    if ((1U & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
                               & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving))))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_annul_next = 1U;
                    }
                }
            }
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul = 1U;
            } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul = 1U;
            }
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take) 
             & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = 0U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul = 0U;
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = 1U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect) {
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d) 
                 | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving) 
                              & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))))) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = 0U;
                }
            }
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[0U] 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[0U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[1U] 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[1U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2[2U] 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[2U];
        if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)))) {
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) 
                 & (8U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU)))) {
                if ((0U != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__den 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_abs;
                }
            }
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
                        = (7U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp) 
                                 - (IData)(1U)));
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et = 0U;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tt 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s = 1U;
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error = 1U;
                }
            } else if ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                        >> 0x0000001fU)) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                              >> 0x0000001eU)))) {
                    if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                        if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_newcwp;
                        }
                    } else if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                        if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_newcwp;
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et = 1U;
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps;
                        }
                    }
                }
            } else if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                    if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                      >> 0x0000001bU)))) {
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                         >> 7U));
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                         >> 6U));
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et 
                                = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                         >> 5U));
                            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
                                = (7U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val);
                        }
                    }
                }
            }
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s 
            = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s;
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc;
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = 0U;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc 
                = ((IData)(4U) + vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc);
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect) {
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc 
                = ((IData)(4U) + vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target);
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue) 
                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
                    != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = 1U;
            }
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d) 
                 | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving))) {
                if ((((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving)) 
                      & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending)) 
                     & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                                   >> 0x00000022U))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = 1U;
                }
            } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf) {
                if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending) 
                     & (~ (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                                   >> 0x00000022U))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = 1U;
                }
            } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_pending) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target;
            } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue) 
                        & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
                           == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target;
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target;
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_annul_next = 0U;
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = 0U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul = 0U;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
                = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tba 
                    << 0x0000000cU) | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt) 
                                       << 4U));
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc 
                = ((IData)(4U) + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tba 
                                   << 0x0000000cU) 
                                  | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt) 
                                     << 4U)));
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = 1U;
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc;
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
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit 
        = ((2U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                         >> 6U))) ? 0x20U : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4) 
                                                >> 6U)))
                                              ? 0x40U
                                              : 0x10U));
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
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_a 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count)) 
           & ((vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
               [0U] >> 8U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun) 
                              | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err) 
                                 & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1) 
                                    >> 2U)))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit 
        = ((2U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                         >> 6U))) ? 0x20U : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4) 
                                                >> 6U)))
                                              ? 0x40U
                                              : 0x10U));
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
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__rx_spec_b 
        = ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)) 
           & ((vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
               [0U] >> 8U) | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun) 
                              | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err) 
                                 & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1) 
                                    >> 2U)))));
    VL_EXTENDS_WQ(66,33, __Vtemp_26, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ma);
    __Vtemp_27[0U] = __Vtemp_26[0U];
    __Vtemp_27[1U] = __Vtemp_26[1U];
    __Vtemp_27[2U] = (3U & __Vtemp_26[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_29, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mb);
    __Vtemp_30[0U] = __Vtemp_29[0U];
    __Vtemp_30[1U] = __Vtemp_29[1U];
    __Vtemp_30[2U] = (3U & __Vtemp_29[2U]);
    VL_MULS_WWW(66, __Vtemp_31, __Vtemp_27, __Vtemp_30);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_start = 0U;
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
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[2U] = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_cexc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_fcc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__qne = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fq = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op = 0x0dU;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_dbl = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_data = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tba = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending = 0U;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[0U] 
            = __Vtemp_31[0U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[1U] 
            = __Vtemp_31[1U];
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1[2U] 
            = (3U & __Vtemp_31[2U]);
        if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_fcc 
                = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] 
                         >> 0x0000000bU));
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc 
                = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] 
                                  >> 6U));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_cexc 
                = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] 
                                  >> 1U));
        }
        if ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U])) {
            if ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = 0U;
            }
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__qne = 0U;
        }
        if ((0x00004000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U])) {
            if ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = 2U;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt = 4U;
            }
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex))) {
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 0U;
            } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 0U;
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 0U;
                if ((0x0dU == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt = 3U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fq 
                        = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst)));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__qne = 1U;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = 1U;
                } else if ((0U != ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags) 
                                   & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_tem)))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_cexc 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fq 
                        = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst)));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__qne = 1U;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = 1U;
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt = 0U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_cexc 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags;
                    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_is_cmp) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_fcc 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_fcc;
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr = 1U;
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd;
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_dbl 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_data 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits;
                    }
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc 
                        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc) 
                           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 4U;
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags;
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_bits;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags 
                        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags) 
                           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags));
                }
            } else if ((((6U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)) 
                         | (7U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) 
                        & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct)))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 3U;
                }
            } else if ((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt 
                    = (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt) 
                             - (IData)(1U)));
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex))) {
            if ((0x0dU == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 4U;
            } else if ((((6U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op)) 
                         | (7U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op))) 
                        & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_start = 1U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 2U;
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt = 2U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 2U;
            }
        } else if ((0x00008000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[5U])) {
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd 
                = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                                  >> 0x00000019U));
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst 
                = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[5U] 
                    << 0x00000011U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[4U] 
                                       >> 0x0000000fU));
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc 
                = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[4U] 
                    << 0x00000011U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] 
                                       >> 0x0000000fU));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[0U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[1U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[1U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[2U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a[2U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[0U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[1U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[1U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[2U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b[2U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = 1U;
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)))) {
            if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)))) {
                if ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                     >> 0x0000001fU)) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                  >> 0x0000001eU)))) {
                        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                      >> 0x0000001dU)))) {
                            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                          >> 0x0000001cU)))) {
                                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                              >> 0x0000001bU)))) {
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tba 
                                        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                                           >> 0x0cU);
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending = 1U;
        } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                                  >> 0x00000022U)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending = 0U;
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_y = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wy = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_npc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_icc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wicc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_pc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_y = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wy = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_newcwp = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_icc = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wicc = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_y 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_y;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wy 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wy;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_icc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_icc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wicc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wicc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_newcwp 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_newcwp;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_tt;
            if ((((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap)) 
                  & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem)) 
                 & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_fault)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt 
                    = ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_fault))
                        ? 9U : 0x29U);
            }
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_npc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_pc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_y 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_y;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wy 
                = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wy) 
                    & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap))) 
                   & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap)));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_icc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_icc;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wicc 
                = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wicc) 
                    & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap))) 
                   & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap)));
        }
    }
    if ((1U & (~ (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
                   | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)) 
                  | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go))))) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_done) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata 
                = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[2U])) 
                    << 0x0000003eU) | (((QData)((IData)(
                                                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[1U])) 
                                        << 0x0000001eU) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[0U])) 
                                          >> 2U)));
        }
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc = ((IData)(vlSelfRef.cpu_sim__DOT__rst)
                                                 ? 0U
                                                 : 
                                                (0x01ffffffU 
                                                 & ((0x00960000U 
                                                     <= vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc_next)
                                                     ? 
                                                    (vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc_next 
                                                     - (IData)(0x00960000U))
                                                     : vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc_next)));
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
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_clk 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11) 
                         >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
            : ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11) 
                             >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_tick)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in 
        = (1U & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14) 
                     >> 4U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line)));
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
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_clk 
        = ((0U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11) 
                         >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
            : ((1U == (3U & ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11) 
                             >> 5U))) ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__pclk_en)
                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_tick)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in 
        = (1U & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14) 
                     >> 4U)) | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op;
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc_next = 
        (0x03ffffffU & ((IData)(0x004b0000U) + vlSelfRef.cpu_sim__DOT__u_escc__DOT__acc));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0 
        = ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])
            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits);
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs = 0ULL;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ma = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mb = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_tem = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__i_va = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__i_supv = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_pa = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_cacheable = 0U;
    } else {
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start) 
             & (8U != (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                       >> 0x0000001bU)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ma 
                = (((QData)((IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                      >> 0x0000000cU) 
                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                                        >> 0x0000001fU)))) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a)));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mb 
                = (((QData)((IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                      >> 0x0000000cU) 
                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b 
                                        >> 0x0000001fU)))) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)));
        }
        if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U])) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_tem 
                = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] 
                                  >> 0x00000018U));
        }
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))) {
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0U;
            } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0U;
            } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                    = ((3ULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs) 
                       | (0x0000000400000000ULL | ((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa 
                                                                                >> 2U)))
                                                                     ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata)
                                                                     : (IData)(
                                                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata 
                                                                                >> 0x20U))))) 
                                                   << 2U)));
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                    = ((0x00000007fffffffcULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs) 
                       | (IData)((IData)(((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err)
                                           ? 2U : 0U))));
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))) {
                if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 1U;
                }
            } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_done) 
                        & (2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner)))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_fault) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                        = (0x0000000400000000ULL | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs);
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                        = (1ULL | (0x00000007fffffffcULL 
                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs));
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 1U;
                }
            } else if ((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))) {
            if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r 
                               >> 0x00000027U)))) {
                __Vfunc_cacheable_pa__1__pa = (0x0000000fffffffffULL 
                                               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r 
                                                  >> 1U));
                __Vfunc_cacheable_pa__1__Vfuncout = 
                    ((0U == (0x0000007fU & (IData)(
                                                   (__Vfunc_cacheable_pa__1__pa 
                                                    >> 0x1dU)))) 
                     | (0x0ff0U == (0x00000fffU & (IData)(
                                                          (__Vfunc_cacheable_pa__1__pa 
                                                           >> 0x18U)))));
                __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_pa 
                    = (0x0000000fffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r 
                                                >> 1U));
                __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_cacheable 
                    = __Vfunc_cacheable_pa__1__Vfuncout;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 4U;
            } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r 
                                      >> 0x00000025U)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                    = (0x0000000400000000ULL | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs);
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                    = (1ULL | (0x00000007fffffffcULL 
                               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs));
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__is 
                    = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_i)
                        ? 2U : 3U);
            }
        } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifr 
                                  >> 0x00000021U)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__i_va 
                = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifr 
                           >> 1U));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__i_supv 
                = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifr));
            __Vdly__cpu_sim__DOT__u_cpu__DOT__is = 1U;
        }
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__nan2 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl) 
            == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl))
            ? ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b[0U])
                ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits
                : ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a[0U])
                    ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits
                    : cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0))
            : cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT____VdfgRegularize_h34fd8d38_0_0);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is = __Vdly__cpu_sim__DOT__u_cpu__DOT__is;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits = 0ULL;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_fcc = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_is_cmp = 0U;
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_newcwp = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_tt = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[4U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] = 0U;
    } else {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_inst;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wr_val;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap;
            if ((((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap)) 
                  & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem)) 
                 & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_fault)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap = 1U;
            }
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[1U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[1U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[2U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[2U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[3U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[3U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[4U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[4U];
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U];
        } else if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_newcwp 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_tt 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap)
                    ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tt)
                    : (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt));
        }
    }
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
                                goto __Vlabel2;
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
                                goto __Vlabel2;
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
                            __Vlabel2: ;
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
                        goto __Vlabel3;
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
                        goto __Vlabel3;
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
                    __Vlabel3: ;
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
    if ((1U & (~ (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
                   | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)) 
                  | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go))))) {
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_done) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_fault 
                = (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[0U]);
        }
    }
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) 
         | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_inst = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wr_val = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap = 0U;
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_inst 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_inst;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wr_val 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap) 
               | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap));
    }
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
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
        [(0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                         >> 0x0000000fU))];
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
        [(0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
                         >> 1U))];
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 0U;
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
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = 1U;
                                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst 
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
                if ((0x00000200U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) {
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
                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp 
            = (7U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp) 
                     - (IData)(1U)));
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
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_two_cycles 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
           & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap) 
               & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt))) 
              | (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)) 
                  & (0x00000c00U == (0x00000c00U & 
                                     vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U]))) 
                 & (0xc0000000U == (0xf8000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U])))));
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_done = 0U;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__lz = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__is_zero 
        = (0ULL == (0x03ffffffffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[1U])) 
                                              << 0x0000001fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U])) 
                                                >> 1U))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i = 0x00000039U;
    if (vlSelfRef.cpu_sim__DOT__rst) {
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_we = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_cacheable = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data = 0ULL;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_written = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__single_lock = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata = 0ULL;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err = 0U;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v0 = 1U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur = 0U;
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata = 0ULL;
        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v1 = 1U;
    } else {
        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count 
            = (0x0000000fU & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count) 
                               + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_pushes)) 
                              - (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go)));
        if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
            if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
            } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
            } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
            } else {
                if ((1U & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err)) 
                           & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h0f05b2b3__0 = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc83b63e7__0 = 1U;
                    if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))) {
                        __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__pa 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                        __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__Vfuncout 
                            = (0x0000007fU & (IData)(
                                                     (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__pa 
                                                      >> 5U)));
                        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h0f05b2b3__0;
                        __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 
                            = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__88__Vfuncout;
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5 = 1U;
                        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc83b63e7__0;
                        __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64 = 1U;
                    }
                    if ((0x0000001fU == (0x0000001fU 
                                         & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                             [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                                             | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                             [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set]) 
                                            | ((IData)(1U) 
                                               << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)))))) {
                        if (((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)) 
                             & (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set]))) {
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65 = 1U;
                        }
                        if (((1U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)) 
                             & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                                   >> 1U)))) {
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66 = 1U;
                        }
                        if (((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)) 
                             & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                                   >> 2U)))) {
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67 = 1U;
                        }
                        if (((3U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)) 
                             & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                                   >> 3U)))) {
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68 = 1U;
                        }
                        if (((4U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)) 
                             & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                                   >> 4U)))) {
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69 
                                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69 = 1U;
                        }
                    }
                }
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 1U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err;
            }
        } else if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                    if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 1U;
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
                    }
                } else if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata 
                        = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[0U])));
                    if ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err = 1U;
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 1U;
                    } else {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err = 0U;
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 7U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata 
                        = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[0U])));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err 
                        = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 1U;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
                }
            } else {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_now) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_written = 1U;
                }
                if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err 
                        = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U]);
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 1U;
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
                if ((2U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                    if ((1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U])) {
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err = 1U;
                    }
                    if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat) 
                         == (3U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                           >> 3U))))) {
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data 
                            = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[0U])));
                    }
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat)));
                    if ((1U & ((3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat)) 
                               | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[2U]))) {
                        __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 8U;
                    }
                }
                if ((((IData)((vlSelfRef.cpu_sim__DOT__sn 
                               >> 0x00000023U)) & (
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__sn 
                                                               >> 4U))) 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                               >> 5U))))) 
                     | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_inval) 
                        & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__inval_line 
                           == (0x7fffffffU & (IData)(
                                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                                      >> 5U))))))) {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped = 1U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_present) 
                              & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx) 
                                 == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way)))))) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h9f416de6__0 = 0U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h9f418323__0 = 0U;
                    if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))) {
                        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h9f416de6__0;
                        __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 
                            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set) 
                               << 1U);
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6 = 1U;
                        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h9f418323__0;
                        __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 
                            = (1U | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set) 
                                     << 1U));
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7 = 1U;
                    }
                }
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h27097e52__0 = 0U;
                    if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx))) {
                        __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__pa 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
                        __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__Vfuncout 
                            = (0x0000007fU & (IData)(
                                                     (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__pa 
                                                      >> 5U)));
                        __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h27097e52__0;
                        __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 
                            = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__89__Vfuncout;
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8 = 1U;
                    }
                }
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 6U;
            } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h96397053__0 = 1U;
                if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx))) {
                    __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h96397053__0;
                    __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx;
                    __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                    __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70 = 1U;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata
                        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx];
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_rdata = 0ULL;
                }
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done = 1U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 0U;
                if ((0x0000001fU == (0x0000001fU & 
                                     ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                       [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                                       | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                       [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set]) 
                                      | ((IData)(1U) 
                                         << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx)))))) {
                    if (((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx)) 
                         & (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                            [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set]))) {
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71 = 1U;
                    }
                    if (((1U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx)) 
                         & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                               [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                               >> 1U)))) {
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72 = 1U;
                    }
                    if (((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx)) 
                         & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                               [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                               >> 2U)))) {
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73 = 1U;
                    }
                    if (((3U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx)) 
                         & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                               [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                               >> 3U)))) {
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74 = 1U;
                    }
                    if (((4U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx)) 
                         & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                               [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set] 
                               >> 4U)))) {
                        __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set;
                        __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75 = 1U;
                    }
                }
            } else {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 2U;
            }
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__accept) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_we = 0U;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic = 0U;
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_cacheable) 
                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl 
                    >> 9U))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_cacheable = 1U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be = 0xffU;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata = 0ULL;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_written = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 1U;
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_cacheable = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be = 0xffU;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata = 0ULL;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_err = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_written = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped = 0U;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__single_lock = 0U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = 5U;
            }
        }
        if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go) {
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line
                    [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd];
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs = 2U;
                __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd)));
            }
        } else if ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs))) {
            if (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata
                  [0U]) == (0x00ffffffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
                                           >> 7U)))) {
                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx;
                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9 = 1U;
            }
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs = 0U;
            if (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata
                  [1U]) == (0x00ffffffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
                                           >> 7U)))) {
                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx;
                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10 = 1U;
            }
            if (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata
                  [2U]) == (0x00ffffffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
                                           >> 7U)))) {
                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx;
                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11 = 1U;
            }
            if (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata
                  [3U]) == (0x00ffffffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
                                           >> 7U)))) {
                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx;
                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12 = 1U;
            }
            if (((0x00ffffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata
                  [4U]) == (0x00ffffffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
                                           >> 7U)))) {
                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx;
                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13 = 1U;
            }
        } else {
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs = 0U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_flash_v) {
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v76 = 1U;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_flash_l) {
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v64 = 1U;
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push) 
             & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push2))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 
                = (0x80000000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__inval_line);
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0 = 1U;
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1 
                = (0x7fffffffU & (IData)((vlSelfRef.cpu_sim__DOT__sn 
                                          >> 4U)));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr)));
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr 
                = (7U & ((IData)(2U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr)));
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push) 
                    | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push2))) {
            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push)
                    ? (0x80000000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__inval_line)
                    : (0x7fffffffU & (IData)((vlSelfRef.cpu_sim__DOT__sn 
                                              >> 4U))));
            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr;
            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2 = 1U;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr)));
        }
        if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds))) {
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_data_go) 
                 | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_tag_go))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) {
                    if (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)) 
                         & (5U > (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                        >> 0x0000001aU))))) {
                        if ((2U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001eU))) {
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc03d1fc1__0 
                                = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                 >> 0x38U)));
                            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc03d1582__0 
                                = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                 >> 0x39U)));
                            if ((4U >= (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                              >> 0x0000001aU)))) {
                                __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 
                                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc03d1fc1__0;
                                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 
                                    = (0x0000007eU 
                                       & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                          >> 5U));
                                __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 
                                    = (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                             >> 0x0000001aU));
                                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19 = 1U;
                                __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 
                                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc03d1582__0;
                                __VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 
                                    = (1U | (0x0000007eU 
                                             & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                >> 5U)));
                                __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 
                                    = (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                             >> 0x0000001aU));
                                __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20 = 1U;
                            }
                        } else if ((1U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                           >> 0x0000001eU))) {
                            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 
                                = (0x0000001fU & (IData)(
                                                         (vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                          >> 8U)));
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 
                                = (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                  >> 6U));
                            __VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140 = 1U;
                            __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128 
                                = (0x0000001eU & ((IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i 
                                                           >> 1U)) 
                                                  << 1U));
                            __VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128 
                                = (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                  >> 6U));
                        }
                    }
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 2U;
                } else {
                    __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata = 0ULL;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 2U;
            if ((5U > (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                             >> 0x0000001aU)))) {
                if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
                        = ((4U >= (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                         >> 0x0000001aU)))
                            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata
                           [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                   >> 0x0000001aU))]
                            : 0ULL);
                } else if ((2U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                   >> 0x0000001eU))) {
                    if ((4U >= (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                      >> 0x0000001aU)))) {
                        __Vtemp_35[0U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][0U];
                        __Vtemp_35[1U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][1U];
                        __Vtemp_35[2U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][2U];
                        __Vtemp_35[3U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][3U];
                        __Vtemp_38[0U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][0U];
                        __Vtemp_38[1U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][1U];
                        __Vtemp_38[2U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][2U];
                        __Vtemp_38[3U] = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                            [(7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                    >> 0x0000001aU))][3U];
                    } else {
                        __Vtemp_35[0U] = 0U;
                        __Vtemp_35[1U] = 0U;
                        __Vtemp_35[2U] = 0U;
                        __Vtemp_35[3U] = 0U;
                        __Vtemp_38[0U] = 0U;
                        __Vtemp_38[1U] = 0U;
                        __Vtemp_38[2U] = 0U;
                        __Vtemp_38[3U] = 0U;
                    }
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
                        = (((QData)((IData)((1U & (
                                                   __Vtemp_35[
                                                   (3U 
                                                    & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                       >> 0x0000000aU))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (1U 
                                                       | (0x0000007eU 
                                                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                             >> 5U)))))))) 
                            << 0x00000039U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (__Vtemp_38[
                                                                    (3U 
                                                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                                        >> 0x0000000aU))] 
                                                                    >> 
                                                                    (0x0000001eU 
                                                                     & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                                        >> 5U)))))) 
                                                << 0x00000038U) 
                                               | (QData)((IData)(
                                                                 ((4U 
                                                                   >= 
                                                                   (7U 
                                                                    & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                                       >> 0x0000001aU)))
                                                                   ? 
                                                                  (0x00ffffffU 
                                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata
                                                                   [
                                                                   (7U 
                                                                    & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                                       >> 0x0000001aU))])
                                                                   : 0U)))));
                } else if ((1U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                   >> 0x0000001eU))) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata = 0ULL;
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
                        = ((0xffffffffffffe0ffULL & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata) 
                           | ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                                              [(0x0000003fU 
                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                   >> 6U))])) 
                              << 8U));
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
                        = ((0xffffffffffffffe1ULL & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata) 
                           | ((QData)((IData)((0x0000000fU 
                                               & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck
                                                  [
                                                  (0x0000003fU 
                                                   & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                      >> 6U))] 
                                                  >> 1U)))) 
                              << 1U));
                }
            } else {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata = 0ULL;
            }
        } else if ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_done = 1U;
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 0U;
        } else {
            __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = 0U;
        }
    }
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
                goto __Vlabel4;
            }
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i 
                = (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel4: ;
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second)) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_two_cycles));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval 
        = (((0x18U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                       >> 0x0000001bU)) | (0x1aU == 
                                           (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                            >> 0x0000001bU)))
            ? cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_ldval
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_result);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_cacheable 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_cacheable;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_pa = __Vdly__cpu_sim__DOT__u_cpu__DOT__ic_pa;
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v0;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v1;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line__v2;
    }
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds;
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][3U] = 0U;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v1) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 1U;
        while ((__Vilp2 <= 0x0000003fU)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][3U] = 0U;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v64) {
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x0000003fU)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64] 
            = (((~ ((IData)(1U) << (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64]) 
               | (0x1fU & ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64) 
                           << (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v64))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65] 
            = (0x1eU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v65]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66] 
            = (0x1dU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v66]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67] 
            = (0x1bU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v67]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68] 
            = (0x17U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v68]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69] 
            = (0x0fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v69]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70] 
            = (((~ ((IData)(1U) << (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70]) 
               | (0x1fU & ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70) 
                           << (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v70))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71] 
            = (0x1eU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v71]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72] 
            = (0x1dU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v72]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73] 
            = (0x1bU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v73]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74] 
            = (0x17U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v74]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75] 
            = (0x0fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru
               [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v75]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck__v128;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v76) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x0000003fU)) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__Vilp4] = 0U;
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140] 
            = __VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v140;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5)))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5][
                ((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5) 
                 >> 5U)]) | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5) 
                             << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v5))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6)))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6][
                ((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6) 
                 >> 5U)]) | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6) 
                             << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v6))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7)))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7][
                ((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7) 
                 >> 5U)]) | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7) 
                             << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v7))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8)))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8][
                ((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8) 
                 >> 5U)]) | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8) 
                             << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v8))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9) 
                                                                  >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9)))) 
               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [0U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v9) 
                     >> 5U)]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10) 
                                                                  >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10)))) 
               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [1U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v10) 
                     >> 5U)]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11) 
                                                                  >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11)))) 
               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [2U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v11) 
                     >> 5U)]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12) 
                                                                  >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12)))) 
               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [3U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v12) 
                     >> 5U)]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13) 
                                                                  >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13)))) 
               & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
               [4U][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v13) 
                     >> 5U)]);
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru__v76) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[0U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[1U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[2U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[3U][3U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][0U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][1U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][2U] = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[4U][3U] = 0U;
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19)))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19][
                ((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19) 
                 >> 5U)]) | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19) 
                             << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v19))));
    }
    if (__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20][((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20)))) 
                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits
                [__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20][
                ((IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20) 
                 >> 5U)]) | ((IData)(__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20) 
                             << (0x0000001fU & (IData)(__VdlyLsb__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits__v20))));
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st 
        = __Vdly__cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin = 0x3c02U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n 
            = (0x001fffffffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                                        >> 5U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard_n 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                             >> 4U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_n 
            = (1U & ((0U != (0x0000000fU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn))) 
                     | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]));
        __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__lsb 
            = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin = 0x3f82U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n 
            = ((QData)((IData)((0x00ffffffU & (IData)(
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                                                       >> 0x22U))))) 
               << 0x0000001dU);
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard_n 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                             >> 0x21U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_n 
            = (1U & ((0U != (0x00000001ffffffffULL 
                             & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn)) 
                     | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]));
        __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__lsb 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n 
                             >> 0x1dU)));
    }
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sticky 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_n;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__guard 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard_n;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sgn 
        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                 >> 9U));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__rd 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__Vfuncout 
        = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__rd))
            ? ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__guard) 
               & ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sticky) 
                  | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__lsb)))
            : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__rd))
                ? (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__guard) 
                    | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sticky)) 
                   & (~ (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sgn)))
                : ((3U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__rd)) 
                   && (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__guard) 
                        | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sticky)) 
                       & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__sgn)))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__up_n 
        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__Vfuncout;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry_n 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__up_n) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
               ? (0x001fffffffffffffULL == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n)
               : (0x00ffffffU == (0x00ffffffU & (IData)(
                                                        (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n 
                                                         >> 0x1dU))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__tiny 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__is_zero)) 
           & (VL_LTS_III(14, (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__en), 
                         (0x00003fffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin) 
                                         - (IData)(1U)))) 
              | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__en) 
                  == (0x00003fffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin) 
                                     - (IData)(1U)))) 
                 & (~ (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry_n)))));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_pair;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits 
            = cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_pair;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__sign 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                             >> 0x3fU)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e 
            = (0x000007ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits 
                                      >> 0x34U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f 
            = (0x000fffffffffffffULL & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits);
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
                goto __Vlabel5;
            }
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i 
                = (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel5: ;
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
                goto __Vlabel6;
            }
            cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i 
                = (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel6: ;
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_commit 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx 
        = (0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set 
        = (0x0000003fU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                  >> 6U)));
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__accept 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_done)) 
              & (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go 
        = ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs)) 
           & ((2U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st)) 
              & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count))));
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
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_inval = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_inval = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_flash_v = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_flash_l = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_v = 0U;
    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_l = 0U;
    if (vlSelfRef.cpu_sim__DOT__rst) {
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_pa = 0ULL;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_cacheable = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__inval_line = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_val = 0ULL;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_mask = 0ULL;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_ctl = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_sts = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrv = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrc = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrs = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__action = 0U;
    } else if (vlSelfRef.cpu_sim__DOT__wd_reset) {
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_ctl = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_sts = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__action = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrc = 0U;
        vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrs = 0U;
    } else if ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
        if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
            } else if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 8U;
            }
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_done) 
                 & (1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner)))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_fault) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                        = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
                } else {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 8U;
                }
            } else if ((1U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0x0aU;
            }
        } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                  >> 0x00000027U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__inval_line 
                = (0x7fffffffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                          >> 6U)));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_inval 
                = (1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                            >> 5U)));
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_inval = 1U;
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
        } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                  >> 0x00000025U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
        } else {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_d)
                    ? 9U : 0x0aU);
        }
    } else if ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
        if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
            if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_dg_done) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                        = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                           | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_dg_rdata) 
                              << 2U));
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                        = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_dg_rdata) 
                            >> 0x0000001eU) | ((IData)(
                                                       (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_dg_rdata 
                                                        >> 0x00000020U)) 
                                               << 2U));
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                        = (7U & (4U | ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_dg_rdata 
                                                >> 0x00000020U)) 
                                       >> 0x0000001eU)));
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
                }
            } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_done) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                       | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata) 
                          << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata) 
                        >> 0x0000001eU) | ((IData)(
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
                                                    >> 0x00000020U)) 
                                           << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = (7U & (4U | ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata 
                                            >> 0x00000020U)) 
                                   >> 0x0000001eU)));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_ack) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                       | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata))) 
                          << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                    = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata))) 
                        >> 0x0000001eU) | ((IData)(
                                                   ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata)) 
                                                    >> 0x00000020U)) 
                                           << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = (7U & (4U | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_rdata)) 
                                            >> 0x00000020U)) 
                                   >> 0x0000001eU)));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_fault) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]));
                }
            }
        } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_done) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
            __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__r 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_rdata;
            __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__a 
                = (7U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_pa));
            __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__size 
                = (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U]);
            __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__sh 
                = VL_SHIFTL_QQI(64,64,32, __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__r, 
                                VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__a), 3U));
            __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout 
                = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__size))
                    ? (QData)((IData)((0x000000ffU 
                                       & (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__sh 
                                                  >> 0x38U)))))
                    : ((1U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__size))
                        ? (QData)((IData)((0x0000ffffU 
                                           & (IData)(
                                                     (__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__sh 
                                                      >> 0x30U)))))
                        : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__size))
                            ? (QData)((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__sh 
                                               >> 0x20U)))
                            : __Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__r)));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                   | ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout) 
                      << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                = (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout) 
                    >> 0x0000001eU) | ((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout 
                                                >> 0x00000020U)) 
                                       << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = ((4U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]) 
                   | (7U & ((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__lanes_rdata__4__Vfuncout 
                                     >> 0x00000020U)) 
                            >> 0x0000001eU)));
            if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dc_err) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_masked)))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = (2U | (0xfffffffcU & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
        if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
            if ((0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 1U;
            }
        } else if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_done) 
                    & (1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner)))) {
            if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_fault) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
                if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_masked)))) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]));
                }
            } else {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 1U;
            }
        } else if ((1U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) {
        if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                           >> 0x00000027U)))) {
            __Vfunc_cacheable_pa__5__pa = (0x0000000fffffffffULL 
                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                              >> 1U));
            __Vfunc_cacheable_pa__5__Vfuncout = ((0U 
                                                  == 
                                                  (0x0000007fU 
                                                   & (IData)(
                                                             (__Vfunc_cacheable_pa__5__pa 
                                                              >> 0x1dU)))) 
                                                 | (0x0ff0U 
                                                    == 
                                                    (0x00000fffU 
                                                     & (IData)(
                                                               (__Vfunc_cacheable_pa__5__pa 
                                                                >> 0x18U)))));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_pa 
                = (0x0000000fffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                            >> 1U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_cacheable 
                = __Vfunc_cacheable_pa__5__Vfuncout;
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 4U;
        } else if ((1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                  >> 0x00000025U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0U;
            if ((1U & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__d_masked)))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = (1U | (0xfffffffcU & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]));
            }
        } else {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_d)
                    ? 2U : 3U);
        }
    } else if ((IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                         >> 0x0000000cU) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                                               >> 2U))))) {
        if ((2U == (0x0000003fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
                                   >> 2U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 1U;
        } else if ((2U == (0x0000000fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
                                          >> 4U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_pa 
                = (0x0000000fffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) 
                                             << 0x0000001eU) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U])) 
                                               >> 2U)));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__d_cacheable = 0U;
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 4U;
        } else if (((3U <= (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                           >> 2U))) 
                    & (7U >= (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                             >> 2U))))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 5U;
        } else if ((3U == (0x0000003fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                          >> 4U)))) {
            if ((3U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U]))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = (1U | (0xfffffffcU & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]));
            } else {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds 
                    = ((8U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])
                        ? 7U : 6U);
            }
        } else if (((4U >= (7U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) 
                    & ((2U == (0x0000001fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
                                              >> 3U))) 
                       | (3U == (0x0000001fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi) 
                                                >> 3U)))))) {
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 8U;
            } else {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
            }
        } else if (((0x36U == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                              >> 2U))) 
                    | (0x37U == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                                >> 2U))))) {
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                if ((4U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_v 
                        = (1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                    >> 1U)));
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_l 
                        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                 >> 1U));
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_flash_v 
                        = (1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                    >> 1U)));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ic_flash_l 
                        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                 >> 1U));
                }
            }
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
        } else if ((0x38U == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                             >> 2U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
            if ((3U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U]))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = (1U | (0xfffffffcU & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]));
            } else if ((0U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U] 
                                     >> 0x0000000aU)))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                       | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_val) 
                          << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_val) 
                        >> 0x0000001eU) | ((IData)(
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_val 
                                                    >> 0x00000020U)) 
                                           << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = ((4U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]) 
                       | (7U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_val 
                                         >> 0x00000020U)) 
                                >> 0x0000001eU)));
                if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_val 
                        = (0x0000000fffffffffULL & 
                           (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]))));
                }
            } else if ((1U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U] 
                                     >> 0x0000000aU)))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                       | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_mask) 
                          << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                    = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_mask) 
                        >> 0x0000001eU) | ((IData)(
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_mask 
                                                    >> 0x00000020U)) 
                                           << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = ((4U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]) 
                       | (7U & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_mask 
                                         >> 0x00000020U)) 
                                >> 0x0000001eU)));
                if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_mask 
                        = (0x0000000fffffffffULL & 
                           (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]))));
                }
            } else if ((2U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[2U] 
                                     >> 0x0000000aU)))) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                       | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_ctl))) 
                          << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                    = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_ctl))) 
                        >> 0x0000001eU) | ((IData)(
                                                   ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_ctl)) 
                                                    >> 0x00000020U)) 
                                           << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = ((4U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]) 
                       | (7U & ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_ctl)) 
                                         >> 0x00000020U)) 
                                >> 0x0000001eU)));
                if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                    vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_ctl 
                        = (0x0000007fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]);
                }
            } else {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                    = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                       | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_sts))) 
                          << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                    = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_sts))) 
                        >> 0x0000001eU) | ((IData)(
                                                   ((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_sts)) 
                                                    >> 0x00000020U)) 
                                           << 2U));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                    = ((4U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]) 
                       | (7U & ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__bk_sts)) 
                                         >> 0x00000020U)) 
                                >> 0x0000001eU)));
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_sts 
                    = ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])
                        ? (0x0000000fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U])
                        : 0U);
            }
        } else if ((0x49U == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                             >> 2U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                   | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrv))) 
                      << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrv))) 
                    >> 0x0000001eU) | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrv)) 
                                                >> 0x00000020U)) 
                                       << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (7U & (4U | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrv)) 
                                        >> 0x00000020U)) 
                               >> 0x0000001eU)));
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrv 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U];
            }
        } else if ((0x4aU == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                             >> 2U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                   | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrc))) 
                      << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrc))) 
                    >> 0x0000001eU) | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrc)) 
                                                >> 0x00000020U)) 
                                       << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (7U & (4U | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrc)) 
                                        >> 0x00000020U)) 
                               >> 0x0000001eU)));
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrc 
                    = (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]);
            }
        } else if ((0x4bU == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                             >> 2U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                   | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrs))) 
                      << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrs))) 
                    >> 0x0000001eU) | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrs)) 
                                                >> 0x00000020U)) 
                                       << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (7U & (4U | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ctrs)) 
                                        >> 0x00000020U)) 
                               >> 0x0000001eU)));
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrs 
                    = (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]);
            }
        } else if ((0x4cU == (0x000000ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U] 
                                             >> 2U)))) {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U] 
                = ((3U & vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[0U]) 
                   | ((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__action))) 
                      << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[1U] 
                = (((IData)((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__action))) 
                    >> 0x0000001eU) | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__action)) 
                                                >> 0x00000020U)) 
                                       << 2U));
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (7U & (4U | ((IData)(((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__action)) 
                                        >> 0x00000020U)) 
                               >> 0x0000001eU)));
            if ((0x00000800U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[3U])) {
                vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__action 
                    = (0x00001fffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__dmr[0U]);
            }
        } else {
            vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U] 
                = (4U | vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__dms[2U]);
        }
    }
}

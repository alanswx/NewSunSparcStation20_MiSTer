// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

VL_ATTR_COLD void Vcpu_sim___024root___stl_sequent__TOP__1(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___stl_sequent__TOP__1\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fp_inflight;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fp_inflight = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_hazard;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_hazard = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__add_v;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__add_v = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub_v;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub_v = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v = 0;
    IData/*31:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__c;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__c = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__up_n;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__up_n = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry_n;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry_n = 0;
    SData/*13:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift_s;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift_s = 0;
    CData/*6:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift = 0;
    QData/*57:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 0;
    QData/*52:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry = 0;
    SData/*13:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__inexact;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__inexact = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__of;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__of = 0;
    SData/*10:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ebits;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ebits = 0;
    QData/*51:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__fbits;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__fbits = 0;
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__subnormal_out;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__subnormal_out = 0;
    CData/*0:0*/ cpu_sim__DOT__u_escc__DOT__dat_rd_a;
    cpu_sim__DOT__u_escc__DOT__dat_rd_a = 0;
    CData/*0:0*/ cpu_sim__DOT__u_escc__DOT__dat_rd_b;
    cpu_sim__DOT__u_escc__DOT__dat_rd_b = 0;
    CData/*0:0*/ cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_1;
    cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_1 = 0;
    CData/*0:0*/ cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_3;
    cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_3 = 0;
    CData/*0:0*/ cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_6;
    cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_6 = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__cwp = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__cwp = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__cwp = 0;
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__cwp = 0;
    QData/*36:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__hit;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__hit = 0;
    VlWide<3>/*68:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e;
    VL_ZERO_W(69, __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e);
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__en;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__en = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__boot;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__boot = 0;
    QData/*36:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__hit;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__hit = 0;
    VlWide<3>/*68:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e;
    VL_ZERO_W(69, __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e);
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__en;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__en = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__boot;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__boot = 0;
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
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__rd;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__rd = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sgn;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sgn = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__lsb;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__lsb = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__guard;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__guard = 0;
    CData/*0:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sticky;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sticky = 0;
    // Body
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x16U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x16U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x16U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x16U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x16U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x16U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x16U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x16U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x15U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x15U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x15U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x15U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x15U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x15U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x15U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x15U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x14U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x14U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x14U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x14U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x14U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x14U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x14U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x14U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x13U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x13U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x13U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x13U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x13U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x13U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x13U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x13U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x12U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x12U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x12U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x12U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x12U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x12U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x12U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x12U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x11U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x11U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x11U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x11U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x11U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x11U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x11U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x11U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x10U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x10U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x10U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x10U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x10U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x10U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x10U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x10U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0fU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x0fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0fU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0fU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0fU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x0fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0eU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x0eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0eU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0eU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0eU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x0eU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0dU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x0dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0dU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0dU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0dU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x0dU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0cU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x0cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0cU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0cU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0cU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x0cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0bU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x0bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0bU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0bU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0bU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x0bU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0aU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0x0aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0aU][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0aU][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0x0aU][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0x0aU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [9U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [9U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [9U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 9U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [9U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [9U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [9U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 9U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [8U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [8U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [8U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 8U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [8U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [8U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [8U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 8U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [7U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [7U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [7U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 7U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [7U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [7U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [7U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 7U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [6U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [6U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [6U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 6U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [6U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [6U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [6U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 6U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [5U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [5U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [5U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 5U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [5U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [5U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [5U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 5U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [4U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [4U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [4U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 4U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [4U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [4U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [4U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 4U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [3U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [3U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [3U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 3U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [3U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [3U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [3U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 3U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [2U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [2U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [2U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 2U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [2U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [2U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [2U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 2U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [1U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [1U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [1U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 1U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [1U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [1U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [1U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 1U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = 0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx;
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va 
                    = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                               >> 4U));
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[0U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0U][0U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[1U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0U][1U];
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e[2U] 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                    [0U][2U];
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
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_started)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_is_md) 
              & ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun) 
                     | (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mstage)))) 
                 & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_7))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_7) 
              & (~ ((~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone) 
                        | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mstage) 
                            >> 3U) | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dz)))) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_is_md)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] = (
                                                   (0xfffffffeU 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U]) 
                                                   | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_commit) 
                                                      & ((0x1cU 
                                                          == 
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                           >> 0x0000001bU)) 
                                                         & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                                                            >> 6U))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U] = (
                                                   (1U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[0U]) 
                                                   | ((IData)(
                                                              (((QData)((IData)(
                                                                                ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_15) 
                                                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                                                                                >> 7U)))) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata)))) 
                                                      << 1U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U] = (
                                                   (0xfffffffcU 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U]) 
                                                   | (((IData)(
                                                               (((QData)((IData)(
                                                                                ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_15) 
                                                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                                                                                >> 7U)))) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata)))) 
                                                       >> 0x0000001fU) 
                                                      | ((IData)(
                                                                 ((((QData)((IData)(
                                                                                ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_15) 
                                                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                                                                                >> 7U)))) 
                                                                    << 0x00000020U) 
                                                                   | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata))) 
                                                                  >> 0x00000020U)) 
                                                         << 1U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U] = (
                                                   (3U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[1U]) 
                                                   | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata) 
                                                      << 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[2U] = (
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata) 
                                                    >> 0x0000001eU) 
                                                   | ((IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata 
                                                               >> 0x00000020U)) 
                                                      << 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] = (
                                                   (0xfffffffcU 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U]) 
                                                   | ((IData)(
                                                              (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata 
                                                               >> 0x00000020U)) 
                                                      >> 0x0000001eU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] = (
                                                   (0xffff8003U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U]) 
                                                   | ((((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush) 
                                                          & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et) 
                                                             & (8U 
                                                                == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt)))) 
                                                         << 0x0000000cU) 
                                                        | (((0x0000003eU 
                                                             & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                                                >> 0x00000015U)) 
                                                            | ((~ 
                                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                                                                 >> 7U)) 
                                                               & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_15))) 
                                                           << 6U)) 
                                                       | ((0x0000003eU 
                                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                              >> 0x00000015U)) 
                                                          | (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[0U] 
                                                                 >> 0x0000000aU))))) 
                                                      << 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] = (
                                                   (0x00007fffU 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U]) 
                                                   | ((IData)(
                                                              (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc)))) 
                                                      << 0x0000000fU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[4U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc)))) 
                                                    >> 0x00000011U) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc))) 
                                                               >> 0x00000020U)) 
                                                      << 0x0000000fU));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[5U] = (
                                                   (0x00008000U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[5U]) 
                                                   | (0x0000ffffU 
                                                      & ((IData)(
                                                                 ((((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst)) 
                                                                    << 0x00000020U) 
                                                                   | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc))) 
                                                                  >> 0x00000020U)) 
                                                         >> 0x00000011U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[5U] = (
                                                   (0x00007fffU 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[5U]) 
                                                   | (0x0000ffffU 
                                                      & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_commit) 
                                                          & (0x11U 
                                                             == 
                                                             (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                                              >> 0x0000001bU))) 
                                                         << 0x0000000fU)));
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
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__124__lsb 
        = (1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                  ? (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n)
                  : (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n 
                             >> 0x1dU))));
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata = 0ULL;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat_now) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr 
            = ((0x000001fcU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                        >> 5U)) << 2U)) 
               | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
            = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_d_r[0U])));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_way))));
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_now) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr 
            = (0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa 
                                      >> 3U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx))));
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_data_go) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr 
            = (0x000001ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                              >> 3U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i;
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way 
                = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way) 
                   | (0x0fU & ((IData)(1U) << (3U & 
                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                >> 0x0000001aU)))));
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata = 0ULL;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way = 0U;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat_now) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr 
            = ((0x000001fcU & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                        >> 5U)) << 2U)) 
               | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
            = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_i_r[0U])));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h85a776eb__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way)) 
                   | (0x1fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h85a776eb__0) 
                               << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way))));
        }
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_now) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr 
            = (0x000001ffU & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa 
                                      >> 3U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hd7a1735f__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx))) 
                    & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way)) 
                   | (0x1fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hd7a1735f__0) 
                               << (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx))));
        }
    } else if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_data_go) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr 
            = (0x000001ffU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                              >> 3U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i;
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
             & (5U > (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                            >> 0x0000001aU))))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6799c03d__0 = 1U;
            if ((4U >= (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                              >> 0x0000001aU)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way 
                    = (((~ ((IData)(1U) << (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                                  >> 0x0000001aU)))) 
                        & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way)) 
                       | (0x1fU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6799c03d__0) 
                                   << (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result 
                                             >> 0x0000001aU)))));
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h4af1c392_0_2 = (IData)(
                                                       ((0U 
                                                         == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)) 
                                                        & (0xc0U 
                                                           == 
                                                           (0xc0U 
                                                            & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte)))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_0 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__access) 
           & (vlSelfRef.cpu_sim__DOT__esc_req[2U] >> 1U));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_8 
        = ((~ (vlSelfRef.cpu_sim__DOT__esc_req[2U] 
               >> 1U)) & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__access));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wy = 0U;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__c 
        = (1U & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub)
                  ? (((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                          >> 0x0000001fU)) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 
                                              >> 0x0000001fU)) 
                     | ((~ ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                             ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
                            >> 0x0000001fU)) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
                                                >> 0x0000001fU)))
                  : (((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                       & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
                      >> 0x0000001fU) | ((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
                                             >> 0x0000001fU)) 
                                         & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                                             | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
                                            >> 0x0000001fU)))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum;
    if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_logic) 
           & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged))) 
          & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc))) 
         & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_shift)))) {
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__c = 0U;
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r 
            = ((0x04000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                ? ((0x02000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                    ? ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                        ? (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                              ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b))
                        : (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                           | (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)))
                    : ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                        ? (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                           & (~ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b))
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum))
                : ((0x02000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                    ? ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                        ? (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                           ^ vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)
                        : (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                           | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b))
                    : ((0x01000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U])
                        ? (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                           & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum)));
    }
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__add_v 
        = (1U & ((((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
                   >> 0x1fU) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
                                   >> 0x1fU))) | ((
                                                   (~ 
                                                    (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                                                     >> 0x1fU)) 
                                                   & (~ 
                                                      (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 
                                                       >> 0x1fU))) 
                                                  & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
                                                     >> 0x1fU))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub_v 
        = (1U & ((((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                    >> 0x1fU) & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 
                                    >> 0x1fU))) & (~ 
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
                                                    >> 0x1fU))) 
                 | (((~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                         >> 0x1fU)) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 
                                       >> 0x1fU)) & 
                    (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
                     >> 0x1fU))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v 
        = ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub)
              ? (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub_v)
              : (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__add_v)) 
            | (0U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a))) 
           | (0U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b)));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__boot 
        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl 
                 >> 0x0000000dU));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__en 
        = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx][0U];
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx][1U];
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx][2U];
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__hit 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a = 0;
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_shift) {
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__c = 0U;
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r 
            = ((1U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                             >> 0x00000018U))) ? (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b))
                : ((2U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                 >> 0x00000018U))) ? 
                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a 
                    >> (0x0000001fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b))
                    : VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a, 
                                     (0x0000001fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b))));
    }
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                  >> 0x0000001fU)))) {
        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                      >> 0x0000001eU)))) {
            if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wy 
                        = ((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                  >> 0x0000001bU)) 
                           || (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc));
                }
            }
        }
    }
    {
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a = 0ULL;
        if ((1U & (~ (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                              >> 0x00000024U))))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a;
            goto __Vlabel0;
        }
        if (((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                      >> 2U)) & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__boot))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                = (0x0000008000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a);
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                = ((0x000000e000000001ULL & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a) 
                   | (0x0000001fe0000000ULL | ((QData)((IData)(
                                                               (0x0fffffffU 
                                                                & (IData)(
                                                                          (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                                                                           >> 4U))))) 
                                               << 1U)));
        } else if (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__en) {
            if (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__hit) {
                if ((0U != ([&]() {
                                vlSelfRef.__Vfunc_acc_fault__36__acc 
                                    = (7U & (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[0U] 
                                             >> 3U));
                                vlSelfRef.__Vfunc_acc_fault__36__at 
                                    = (7U & (IData)(
                                                    (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                                                     >> 1U)));
                                vlSelfRef.__Vfunc_acc_fault__36__Vfuncout 
                                    = ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                        ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                      ? 0U
                                                      : 2U)
                                                     : 2U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 0U
                                                    : 2U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 0U
                                                     : 2U))))
                                        : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                                ? (
                                                   (((0U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc)) 
                                                     || (1U 
                                                         == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))) 
                                                    || (5U 
                                                        == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc)))
                                                    ? 2U
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                      ? 2U
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                     ? 0U
                                                     : 2U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__36__at))
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 2U
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc))
                                                    ? 2U
                                                    : 
                                                   (((6U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc)) 
                                                     || (7U 
                                                         == (IData)(vlSelfRef.__Vfunc_acc_fault__36__acc)))
                                                     ? 3U
                                                     : 0U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_acc_fault__36__Vfuncout)))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                        = (0x0000002000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a);
                } else if ((1U & ((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                                           >> 3U)) 
                                  & (~ (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[0U] 
                                        >> 7U))))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                        = (0x0000004000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a);
                } else {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                        = (0x0000008000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a);
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__va 
                        = (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                                   >> 4U));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[0U];
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[1U] 
                        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[1U];
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[2U] 
                        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[2U];
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__Vfuncout 
                        = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                         >> 1U))) ? 
                           (((QData)((IData)((0x00ffffffU 
                                              & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[1U] 
                                                  << 0x00000017U) 
                                                 | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                                    >> 9U))))) 
                             << 0x0000000cU) | (QData)((IData)(
                                                               (0x00000fffU 
                                                                & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__va))))
                            : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                             >> 1U)))
                                ? (((QData)((IData)(
                                                    (0x0003ffffU 
                                                     & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[1U] 
                                                         << 0x00000011U) 
                                                        | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                                           >> 0x0000000fU))))) 
                                    << 0x00000012U) 
                                   | (QData)((IData)(
                                                     (0x0003ffffU 
                                                      & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__va))))
                                : ((1U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                                 >> 1U)))
                                    ? (((QData)((IData)(
                                                        (0x00000fffU 
                                                         & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[1U] 
                                                             << 0x0000000bU) 
                                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                                               >> 0x00000015U))))) 
                                        << 0x00000018U) 
                                       | (QData)((IData)(
                                                         (0x00ffffffU 
                                                          & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__va))))
                                    : (((QData)((IData)(
                                                        (0x0000000fU 
                                                         & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[1U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e[0U] 
                                                               >> 0x0000001dU))))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__va))))));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                        = ((0x000000e000000000ULL & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a) 
                           | ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__Vfuncout 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__e[0U] 
                                                            >> 8U))))));
                }
            } else {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                    = (0x0000004000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a);
            }
        } else {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                = (0x0000008000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a);
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a 
                = ((0x000000e000000001ULL & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a) 
                   | ((QData)((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                                       >> 4U))) << 1U));
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__Vfuncout 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a;
        __Vlabel0: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__boot 
        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl 
                 >> 0x0000000dU));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__en 
        = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl);
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[0U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx][0U];
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[1U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx][1U];
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[2U] 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
        [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx][2U];
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__hit 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a = 0;
    {
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a = 0ULL;
        if ((1U & (~ (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                              >> 0x00000024U))))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a;
            goto __Vlabel1;
        }
        if (((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                      >> 2U)) & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__boot))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                = (0x0000008000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a);
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                = ((0x000000e000000001ULL & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a) 
                   | (0x0000001fe0000000ULL | ((QData)((IData)(
                                                               (0x0fffffffU 
                                                                & (IData)(
                                                                          (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                                                                           >> 4U))))) 
                                               << 1U)));
        } else if (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__en) {
            if (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__hit) {
                if ((0U != ([&]() {
                                vlSelfRef.__Vfunc_acc_fault__39__acc 
                                    = (7U & (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[0U] 
                                             >> 3U));
                                vlSelfRef.__Vfunc_acc_fault__39__at 
                                    = (7U & (IData)(
                                                    (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                                                     >> 1U)));
                                vlSelfRef.__Vfunc_acc_fault__39__Vfuncout 
                                    = ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                        ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                      ? 0U
                                                      : 2U)
                                                     : 2U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 0U
                                                    : 2U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 0U
                                                     : 2U))))
                                        : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                                ? (
                                                   (((0U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc)) 
                                                     || (1U 
                                                         == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))) 
                                                    || (5U 
                                                        == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc)))
                                                    ? 2U
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                      ? 2U
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                     ? 0U
                                                     : 2U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.__Vfunc_acc_fault__39__at))
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 2U
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc))
                                                    ? 2U
                                                    : 
                                                   (((6U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc)) 
                                                     || (7U 
                                                         == (IData)(vlSelfRef.__Vfunc_acc_fault__39__acc)))
                                                     ? 3U
                                                     : 0U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_acc_fault__39__Vfuncout)))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                        = (0x0000002000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a);
                } else if ((1U & ((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                                           >> 3U)) 
                                  & (~ (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[0U] 
                                        >> 7U))))) {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                        = (0x0000004000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a);
                } else {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                        = (0x0000008000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a);
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__va 
                        = (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                                   >> 4U));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[0U];
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[1U] 
                        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[1U];
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[2U] 
                        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[2U];
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__Vfuncout 
                        = ((3U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                         >> 1U))) ? 
                           (((QData)((IData)((0x00ffffffU 
                                              & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[1U] 
                                                  << 0x00000017U) 
                                                 | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                                    >> 9U))))) 
                             << 0x0000000cU) | (QData)((IData)(
                                                               (0x00000fffU 
                                                                & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__va))))
                            : ((2U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                             >> 1U)))
                                ? (((QData)((IData)(
                                                    (0x0003ffffU 
                                                     & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[1U] 
                                                         << 0x00000011U) 
                                                        | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                                           >> 0x0000000fU))))) 
                                    << 0x00000012U) 
                                   | (QData)((IData)(
                                                     (0x0003ffffU 
                                                      & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__va))))
                                : ((1U == (3U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                                 >> 1U)))
                                    ? (((QData)((IData)(
                                                        (0x00000fffU 
                                                         & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[1U] 
                                                             << 0x0000000bU) 
                                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                                               >> 0x00000015U))))) 
                                        << 0x00000018U) 
                                       | (QData)((IData)(
                                                         (0x00ffffffU 
                                                          & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__va))))
                                    : (((QData)((IData)(
                                                        (0x0000000fU 
                                                         & ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[1U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e[0U] 
                                                               >> 0x0000001dU))))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__va))))));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                        = ((0x000000e000000000ULL & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a) 
                           | ((vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__Vfuncout 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & (__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__e[0U] 
                                                            >> 8U))))));
                }
            } else {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                    = (0x0000004000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a);
            }
        } else {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                = (0x0000008000000000ULL | vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a);
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a 
                = ((0x000000e000000001ULL & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a) 
                   | ((QData)((IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__r 
                                       >> 4U))) << 1U));
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__Vfuncout 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a;
        __Vlabel1: ;
    }
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub)
            ? (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub_v)
            : (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__add_v));
    if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_logic) 
           & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged))) 
          & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc))) 
         & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_shift)))) {
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v = 0U;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_shift) {
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v = 0U;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__Vfuncout;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[0U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[1U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[2U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[3U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[4U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U] = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U] = (
                                                   (1U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U]) 
                                                   | (6U 
                                                      & ((((0U 
                                                            != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex)) 
                                                           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr)) 
                                                          << 2U) 
                                                         | ((1U 
                                                             == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state)) 
                                                            << 1U))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[3U] = (IData)(
                                                          vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
                                                          [
                                                          (0x0000000fU 
                                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] 
                                                              >> 0x0000000aU))]);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[4U] = (IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs
                                                           [
                                                           (0x0000000fU 
                                                            & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fpr[3U] 
                                                               >> 0x0000000aU))] 
                                                           >> 0x00000020U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U] = (
                                                   (6U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U]) 
                                                   | (7U 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[2U] = (
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd) 
                                                    << 0x0000001eU) 
                                                   | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_tem) 
                                                       << 0x00000017U) 
                                                      | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt) 
                                                          << 0x0000000eU) 
                                                         | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__qne) 
                                                             << 0x0000000dU) 
                                                            | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_fcc) 
                                                                << 0x0000000aU) 
                                                               | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc) 
                                                                   << 5U) 
                                                                  | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_cexc)))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[0U] = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fq);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[1U] = (IData)(
                                                          (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fq 
                                                           >> 0x00000020U));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__tiny) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift_s 
            = (0x00003fffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin) 
                              - (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__en)));
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin;
    } else {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift_s = 0U;
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__en;
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift 
        = (VL_LTS_III(14, 0x003fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift_s))
            ? 0x0000003fU : (0x0000007fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift_s)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms 
        = (0x03ffffffffffffffULL & VL_SHIFTR_QQI(58,58,7, vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s 
        = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]);
    if ((VL_LTS_III(32, 0U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 1U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 1U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 2U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 2U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 3U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 3U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 4U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 4U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 5U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 5U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 6U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 6U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 7U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 7U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 8U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 8U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 9U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 9U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000aU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x0aU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000bU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x0bU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000cU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x0cU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000dU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x0dU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000eU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x0eU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000000fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x0fU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000010U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x10U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000011U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x11U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000012U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x12U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000013U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x13U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000014U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x14U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000015U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x15U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000016U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x16U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000017U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x17U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000018U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x18U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000019U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x19U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001aU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x1aU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001bU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x1bU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001cU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x1cU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001dU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x1dU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001eU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x1eU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000001fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x1fU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000020U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x20U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000021U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x21U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000022U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x22U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000023U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x23U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000024U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x24U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000025U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x25U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000026U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x26U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000027U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x27U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000028U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x28U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000029U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x29U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002aU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x2aU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002bU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x2bU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002cU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x2cU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002dU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x2dU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002eU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x2eU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x0000002fU, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x2fU)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000030U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x30U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000031U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x31U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000032U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x32U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000033U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x33U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000034U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x34U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000035U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x35U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000036U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x36U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000037U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x37U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000038U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x38U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if ((VL_LTS_III(32, 0x00000039U, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__shift)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn 
                    >> 0x39U)))) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s = 1U;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept 
            = (0x001fffffffffffffULL & (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms 
                                        >> 5U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard 
            = (1U & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms 
                             >> 4U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky 
            = ((0U != (0x0000000fU & (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms))) 
               | (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s));
        __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__lsb 
            = (1U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept 
            = ((QData)((IData)((0x00ffffffU & (IData)(
                                                      (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms 
                                                       >> 0x22U))))) 
               << 0x0000001dU);
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard 
            = (1U & (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms 
                             >> 0x21U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky 
            = ((0U != (0x00000001ffffffffULL & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ms)) 
               | (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_s));
        __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__lsb 
            = (1U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept 
                             >> 0x1dU)));
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__inexact 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sticky 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__guard 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sgn 
        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                 >> 9U));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__rd 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__Vfuncout 
        = ((0U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__rd))
            ? ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__guard) 
               & ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sticky) 
                  | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__lsb)))
            : ((2U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__rd))
                ? (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__guard) 
                    | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sticky)) 
                   & (~ (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sgn)))
                : ((3U == (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__rd)) 
                   && (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__guard) 
                        | (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sticky)) 
                       & (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__sgn)))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up 
        = __Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up_f__125__Vfuncout;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry 
        = (1U & (IData)((1ULL & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept 
                                  + ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up)
                                      ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                          ? 1ULL : 0x0000000020000000ULL)
                                      : 0ULL)) >> 0x00000035U))));
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r 
        = (0x001fffffffffffffULL & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept 
                                    + ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__round_up)
                                        ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                            ? 1ULL : 0x0000000020000000ULL)
                                        : 0ULL)));
    if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__carry) {
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r 
            = (0x0010000000000000ULL | (0x000fffffffffffffULL 
                                        & (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r 
                                           >> 1U)));
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r 
            = (0x00003fffU & ((IData)(1U) + (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r)));
    }
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__of 
        = (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__is_zero)) 
            & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__tiny))) 
           & VL_GTS_III(14, (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r), 
                        ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                          ? 0x03ffU : 0x007fU)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way) 
              >> 1U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way) 
              >> 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way) 
              >> 3U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way) 
              >> 1U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way) 
              >> 2U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way) 
              >> 3U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__4__KET____DOT__u_data__b_we 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way) 
              >> 4U));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_7 
        = ((~ (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
               >> 7U)) & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_0));
    cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_1 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_0) 
           & (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 7U));
    cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_3 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_8) 
           & (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 7U));
    cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_6 
        = ((~ (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
               >> 7U)) & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_8));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged) {
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v 
            = cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v;
    }
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tv) 
           & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_i = 
        ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is)) 
         & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r 
                     >> 0x00000026U)) & (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_d = 
        (((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds)) 
          | (8U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ds))) 
         & ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                     >> 0x00000026U)) & (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_owner))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar;
    if (vlSelfRef.cpu_sim__DOT__wd_reset) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = (0x00020000U | vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n);
    }
    if ((IData)(((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                  >> 0x00000024U) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r 
                                     >> 0x00000025U)))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__at 
                        = (7U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                                         >> 1U)));
                    vlSelfRef.__Vfunc_acc_fault__44__acc 
                        = (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                 [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx][0U] 
                                 >> 3U));
                    vlSelfRef.__Vfunc_acc_fault__44__at 
                        = (7U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                                         >> 1U)));
                    vlSelfRef.__Vfunc_acc_fault__44__Vfuncout 
                        = ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                            ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                                    ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                        ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                            ? 0U : 2U)
                                        : 2U) : ((4U 
                                                  & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                                    ? 0U
                                                    : 2U)
                                                   : 2U)))
                                : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                                    ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                        ? 0U : 2U) : 
                                   ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                     ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                         ? 3U : 2U)
                                     : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                         ? 0U : 2U))))
                            : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                                    ? ((((0U == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc)) 
                                         || (1U == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))) 
                                        || (5U == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc)))
                                        ? 2U : 0U) : 
                                   ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                     ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                         ? 3U : ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                                  ? 2U
                                                  : 0U))
                                     : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                         ? 0U : 2U)))
                                : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__44__at))
                                    ? ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                        ? 2U : 0U) : 
                                   ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc))
                                     ? 2U : (((6U == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc)) 
                                              || (7U 
                                                  == (IData)(vlSelfRef.__Vfunc_acc_fault__44__acc)))
                                              ? 3U : 0U)))));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__ft 
                        = vlSelfRef.__Vfunc_acc_fault__44__Vfuncout;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__cur 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
                    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc = 0;
                    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc = 0;
                    {
                        if ((0U == (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__cur 
                                          >> 2U)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                            goto __Vlabel2;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__inst 
                            = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__cur 
                                     >> 6U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__ft 
                            = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__cur 
                                     >> 2U));
                        {
                            if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__ft))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__Vfuncout = 2U;
                                goto __Vlabel3;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__inst)
                                    ? 0U : 1U);
                            __Vlabel3: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__Vfuncout;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__inst 
                            = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__at) 
                                     >> 1U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__ft 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__ft;
                        {
                            if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__ft))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__Vfuncout = 2U;
                                goto __Vlabel4;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__inst)
                                    ? 0U : 1U);
                            __Vlabel4: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__Vfuncout;
                        if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc) 
                             == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                            goto __Vlabel2;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                            goto __Vlabel2;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc)) 
                             & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                        __Vlabel2: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
                = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                           >> 4U));
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__to = 0U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__fav = 1U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__l 
            = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                     [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx][0U] 
                     >> 1U));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__at 
            = (7U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                             >> 1U)));
        vlSelfRef.__Vfunc_acc_fault__48__acc = (7U 
                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx][0U] 
                                                   >> 3U));
        vlSelfRef.__Vfunc_acc_fault__48__at = (7U & (IData)(
                                                            (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd 
                                                             >> 1U)));
        vlSelfRef.__Vfunc_acc_fault__48__Vfuncout = 
            ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
              ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
                  ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
                      ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                          ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                              ? 0U : 2U) : 2U) : ((4U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)))
                  : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
                      ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                          ? 0U : 2U) : ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                         ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                             ? 3U : 2U)
                                         : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                             ? 0U : 2U))))
              : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
                  ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
                      ? ((((0U == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc)) 
                           || (1U == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))) 
                          || (5U == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc)))
                          ? 2U : 0U) : ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                         ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                             ? 3U : 
                                            ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                              ? 2U : 0U))
                                         : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                             ? 0U : 2U)))
                  : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__48__at))
                      ? ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                          ? 2U : 0U) : ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc))
                                         ? 2U : (((6U 
                                                   == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc)) 
                                                  || (7U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__48__acc)))
                                                  ? 3U
                                                  : 0U)))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ft 
            = vlSelfRef.__Vfunc_acc_fault__48__Vfuncout;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n = 0;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ow = 0;
        {
            if ((1U & (~ ([&]() {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__at 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__at;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__ft 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ft;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__cur 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc = 0;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc = 0;
                                {
                                    if ((0U == (7U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__cur 
                                                   >> 2U)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                        goto __Vlabel6;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__inst 
                                        = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__cur 
                                                 >> 6U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__ft 
                                        = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__cur 
                                                 >> 2U));
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__Vfuncout = 2U;
                                            goto __Vlabel7;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel7: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__Vfuncout;
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__inst 
                                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__at) 
                                                 >> 1U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__ft 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__ft;
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__Vfuncout = 2U;
                                            goto __Vlabel8;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel8: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                        goto __Vlabel6;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                        goto __Vlabel6;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                    __Vlabel6: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur;
                goto __Vlabel5;
            }
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ow 
                = ((0U != (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur 
                                 >> 2U))) & (([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__inst 
                                = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur 
                                         >> 6U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__ft 
                                = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur 
                                         >> 2U));
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__Vfuncout = 2U;
                                    goto __Vlabel9;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__inst)
                                        ? 0U : 1U);
                                __Vlabel9: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__Vfuncout)) 
                                             == ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__inst 
                                = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__at) 
                                         >> 1U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__ft 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ft;
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__Vfuncout = 2U;
                                    goto __Vlabel10;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__inst)
                                        ? 0U : 1U);
                                __Vlabel10: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__Vfuncout))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n = 0U;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n 
                = ((0x0001ffffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n) 
                   | (0x00020000U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n 
                = ((0x0003f7ffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n) 
                   | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__to) 
                      << 0x0000000bU));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n 
                = ((0x0003fc00U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n) 
                   | ((((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__l) 
                        << 8U) | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__at) 
                                  << 5U)) | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ft) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__fav) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ow)))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n;
            __Vlabel5: ;
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__Vfuncout;
    }
    if (((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__is)) 
         & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi_r 
                    >> 0x00000025U)))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__at 
                        = (7U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                                         >> 1U)));
                    vlSelfRef.__Vfunc_acc_fault__55__acc 
                        = (7U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                 [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx][0U] 
                                 >> 3U));
                    vlSelfRef.__Vfunc_acc_fault__55__at 
                        = (7U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                                         >> 1U)));
                    vlSelfRef.__Vfunc_acc_fault__55__Vfuncout 
                        = ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                            ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                                    ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                        ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                            ? 0U : 2U)
                                        : 2U) : ((4U 
                                                  & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                                    ? 0U
                                                    : 2U)
                                                   : 2U)))
                                : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                                    ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                        ? 0U : 2U) : 
                                   ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                     ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                         ? 3U : 2U)
                                     : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                         ? 0U : 2U))))
                            : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                                    ? ((((0U == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc)) 
                                         || (1U == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))) 
                                        || (5U == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc)))
                                        ? 2U : 0U) : 
                                   ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                     ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                         ? 3U : ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                                  ? 2U
                                                  : 0U))
                                     : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                         ? 0U : 2U)))
                                : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__55__at))
                                    ? ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                        ? 2U : 0U) : 
                                   ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc))
                                     ? 2U : (((6U == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc)) 
                                              || (7U 
                                                  == (IData)(vlSelfRef.__Vfunc_acc_fault__55__acc)))
                                              ? 3U : 0U)))));
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__ft 
                        = vlSelfRef.__Vfunc_acc_fault__55__Vfuncout;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__cur 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
                    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc = 0;
                    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc = 0;
                    {
                        if ((0U == (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__cur 
                                          >> 2U)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                            goto __Vlabel11;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__inst 
                            = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__cur 
                                     >> 6U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__ft 
                            = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__cur 
                                     >> 2U));
                        {
                            if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__ft))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__Vfuncout = 2U;
                                goto __Vlabel12;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__inst)
                                    ? 0U : 1U);
                            __Vlabel12: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__Vfuncout;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__inst 
                            = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__at) 
                                     >> 1U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__ft 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__ft;
                        {
                            if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__ft))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__Vfuncout = 2U;
                                goto __Vlabel13;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__inst)
                                    ? 0U : 1U);
                            __Vlabel13: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__Vfuncout;
                        if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc) 
                             == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                            goto __Vlabel11;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                            goto __Vlabel11;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 0U;
                            goto __Vlabel11;
                        }
                        if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc)) 
                             & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 0U;
                            goto __Vlabel11;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                        __Vlabel11: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
                = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                           >> 4U));
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__to = 0U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__fav = 1U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__l 
            = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                     [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx][0U] 
                     >> 1U));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__at 
            = (7U & (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                             >> 1U)));
        vlSelfRef.__Vfunc_acc_fault__59__acc = (7U 
                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb
                                                   [vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx][0U] 
                                                   >> 3U));
        vlSelfRef.__Vfunc_acc_fault__59__at = (7U & (IData)(
                                                            (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xi 
                                                             >> 1U)));
        vlSelfRef.__Vfunc_acc_fault__59__Vfuncout = 
            ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
              ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
                  ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
                      ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                          ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                              ? 0U : 2U) : 2U) : ((4U 
                                                   & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)))
                  : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
                      ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                          ? 0U : 2U) : ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                         ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                             ? 3U : 2U)
                                         : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                             ? 0U : 2U))))
              : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
                  ? ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
                      ? ((((0U == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc)) 
                           || (1U == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))) 
                          || (5U == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc)))
                          ? 2U : 0U) : ((4U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                         ? ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                             ? 3U : 
                                            ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                              ? 2U : 0U))
                                         : ((2U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                             ? 0U : 2U)))
                  : ((1U & (IData)(vlSelfRef.__Vfunc_acc_fault__59__at))
                      ? ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                          ? 2U : 0U) : ((4U == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc))
                                         ? 2U : (((6U 
                                                   == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc)) 
                                                  || (7U 
                                                      == (IData)(vlSelfRef.__Vfunc_acc_fault__59__acc)))
                                                  ? 3U
                                                  : 0U)))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ft 
            = vlSelfRef.__Vfunc_acc_fault__59__Vfuncout;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n = 0;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ow = 0;
        {
            if ((1U & (~ ([&]() {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__at 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__at;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__ft 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ft;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__cur 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc = 0;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc = 0;
                                {
                                    if ((0U == (7U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__cur 
                                                   >> 2U)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                        goto __Vlabel15;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__inst 
                                        = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__cur 
                                                 >> 6U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__ft 
                                        = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__cur 
                                                 >> 2U));
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__Vfuncout = 2U;
                                            goto __Vlabel16;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel16: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__Vfuncout;
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__inst 
                                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__at) 
                                                 >> 1U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__ft 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__ft;
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__Vfuncout = 2U;
                                            goto __Vlabel17;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel17: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                        goto __Vlabel15;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                        goto __Vlabel15;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                    __Vlabel15: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur;
                goto __Vlabel14;
            }
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ow 
                = ((0U != (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur 
                                 >> 2U))) & (([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__inst 
                                = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur 
                                         >> 6U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__ft 
                                = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur 
                                         >> 2U));
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__Vfuncout = 2U;
                                    goto __Vlabel18;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__inst)
                                        ? 0U : 1U);
                                __Vlabel18: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__Vfuncout)) 
                                             == ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__inst 
                                = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__at) 
                                         >> 1U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__ft 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ft;
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__Vfuncout = 2U;
                                    goto __Vlabel19;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__inst)
                                        ? 0U : 1U);
                                __Vlabel19: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__Vfuncout))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n = 0U;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n 
                = ((0x0001ffffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n) 
                   | (0x00020000U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n 
                = ((0x0003f7ffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n) 
                   | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__to) 
                      << 0x0000000bU));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n 
                = ((0x0003fc00U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n) 
                   | ((((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__l) 
                        << 8U) | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__at) 
                                  << 5U)) | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ft) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__fav) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ow)))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n;
            __Vlabel14: ;
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__Vfuncout;
    }
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_valid) {
        if ((([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__at 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_at;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__ft = 5U;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__cur 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
                        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc = 0;
                        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc = 0;
                        {
                            if ((0U == (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__cur 
                                              >> 2U)))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                                goto __Vlabel20;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__inst 
                                = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__cur 
                                         >> 6U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__ft 
                                = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__cur 
                                         >> 2U));
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__Vfuncout = 2U;
                                    goto __Vlabel21;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__inst)
                                        ? 0U : 1U);
                                __Vlabel21: ;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__Vfuncout;
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__inst 
                                = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__at) 
                                         >> 1U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__ft 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__ft;
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__Vfuncout = 2U;
                                    goto __Vlabel22;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__inst)
                                        ? 0U : 1U);
                                __Vlabel22: ;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__Vfuncout;
                            if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc) 
                                 == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                                goto __Vlabel20;
                            }
                            if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                                goto __Vlabel20;
                            }
                            if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 0U;
                                goto __Vlabel20;
                            }
                            if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc)) 
                                 & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc)))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 0U;
                                goto __Vlabel20;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                            __Vlabel20: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout)) 
             & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_at) 
                   >> 1U)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__to = 1U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__fav 
            = (1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_at) 
                        >> 1U)));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__l = 0U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__at 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__be_at;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ft = 5U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n = 0;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ow = 0;
        {
            if ((1U & (~ ([&]() {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__at 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__at;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__ft 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ft;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__cur 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc = 0;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc = 0;
                                {
                                    if ((0U == (7U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__cur 
                                                   >> 2U)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                        goto __Vlabel24;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__inst 
                                        = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__cur 
                                                 >> 6U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__ft 
                                        = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__cur 
                                                 >> 2U));
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__Vfuncout = 2U;
                                            goto __Vlabel25;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel25: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__Vfuncout;
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__inst 
                                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__at) 
                                                 >> 1U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__ft 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__ft;
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__Vfuncout = 2U;
                                            goto __Vlabel26;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel26: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                        goto __Vlabel24;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                        goto __Vlabel24;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 0U;
                                        goto __Vlabel24;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 0U;
                                        goto __Vlabel24;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                    __Vlabel24: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur;
                goto __Vlabel23;
            }
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ow 
                = ((0U != (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur 
                                 >> 2U))) & (([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__inst 
                                = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur 
                                         >> 6U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__ft 
                                = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur 
                                         >> 2U));
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__Vfuncout = 2U;
                                    goto __Vlabel27;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__inst)
                                        ? 0U : 1U);
                                __Vlabel27: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__Vfuncout)) 
                                             == ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__inst 
                                = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__at) 
                                         >> 1U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__ft 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ft;
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__Vfuncout = 2U;
                                    goto __Vlabel28;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__inst)
                                        ? 0U : 1U);
                                __Vlabel28: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__Vfuncout))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n = 0U;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n 
                = ((0x0001ffffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n) 
                   | (0x00020000U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n 
                = ((0x0003f7ffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n) 
                   | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__to) 
                      << 0x0000000bU));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n 
                = ((0x0003fc00U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n) 
                   | ((((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__l) 
                        << 8U) | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__at) 
                                  << 5U)) | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ft) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__fav) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ow)))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n;
            __Vlabel23: ;
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__Vfuncout;
    }
    if (((((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws)) 
           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[2U] 
              >> 1U)) & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_probe))) 
         & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft)))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__at 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__ft 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__cur 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
                    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc = 0;
                    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc = 0;
                    {
                        if ((0U == (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__cur 
                                          >> 2U)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                            goto __Vlabel29;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__inst 
                            = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__cur 
                                     >> 6U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__ft 
                            = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__cur 
                                     >> 2U));
                        {
                            if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__ft))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__Vfuncout = 2U;
                                goto __Vlabel30;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__inst)
                                    ? 0U : 1U);
                            __Vlabel30: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__Vfuncout;
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__inst 
                            = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__at) 
                                     >> 1U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__ft 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__ft;
                        {
                            if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__ft))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__Vfuncout = 2U;
                                goto __Vlabel31;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__inst)
                                    ? 0U : 1U);
                            __Vlabel31: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__Vfuncout;
                        if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc) 
                             == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                            goto __Vlabel29;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                            goto __Vlabel29;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 0U;
                            goto __Vlabel29;
                        }
                        if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc)) 
                             & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 0U;
                            goto __Vlabel29;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                        __Vlabel29: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__to 
            = (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__mem_w_r[2U]);
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__fav = 1U;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__l 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__at 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ft 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft;
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n = 0;
        vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ow = 0;
        {
            if ((1U & (~ ([&]() {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__at 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__at;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__ft 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ft;
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__cur 
                                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc = 0;
                                vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc = 0;
                                {
                                    if ((0U == (7U 
                                                & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__cur 
                                                   >> 2U)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                        goto __Vlabel33;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__inst 
                                        = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__cur 
                                                 >> 6U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__ft 
                                        = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__cur 
                                                 >> 2U));
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__Vfuncout = 2U;
                                            goto __Vlabel34;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel34: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__Vfuncout;
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__inst 
                                        = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__at) 
                                                 >> 1U));
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__ft 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__ft;
                                    {
                                        if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__ft))) {
                                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__Vfuncout = 2U;
                                            goto __Vlabel35;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel35: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                        goto __Vlabel33;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                        goto __Vlabel33;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 0U;
                                        goto __Vlabel33;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 0U;
                                        goto __Vlabel33;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                    __Vlabel33: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur;
                goto __Vlabel32;
            }
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ow 
                = ((0U != (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur 
                                 >> 2U))) & (([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__inst 
                                = (1U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur 
                                         >> 6U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__ft 
                                = (7U & (vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur 
                                         >> 2U));
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__Vfuncout = 2U;
                                    goto __Vlabel36;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__inst)
                                        ? 0U : 1U);
                                __Vlabel36: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__Vfuncout)) 
                                             == ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__inst 
                                = (1U & ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__at) 
                                         >> 1U));
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__ft 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ft;
                            {
                                if ((4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__ft))) {
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__Vfuncout = 2U;
                                    goto __Vlabel37;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__inst)
                                        ? 0U : 1U);
                                __Vlabel37: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__Vfuncout))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n = 0U;
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n 
                = ((0x0001ffffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n) 
                   | (0x00020000U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n 
                = ((0x0003f7ffU & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n) 
                   | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__to) 
                      << 0x0000000bU));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n 
                = ((0x0003fc00U & vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n) 
                   | ((((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__l) 
                        << 8U) | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__at) 
                                  << 5U)) | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ft) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__fav) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ow)))));
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n;
            __Vlabel32: ;
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__Vfuncout;
    }
    if (((~ ((2U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U] 
                           >> 0x0000000aU))) | (3U 
                                                == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)))) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__reg_go))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n = 0U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = ((0x0000ffffU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n) 
               | (0x00010000U | (0x00020000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = ((0x0003ff01U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n) 
               | (0x0000001aU | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we)
                                   ? 5U : 1U) << 5U)));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result;
    } else if ((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__reg_go) 
                 & (0x00000800U == (0x00000c00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U]))) 
                & (4U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi)))) {
        if (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we)) 
             & (0x00000300U == (0x00001f00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n = 0U;
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
             & (0x00001300U == (0x00001f00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
                = (0x0003ffffU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i));
        }
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we) 
             & (0x00001400U == (0x00001f00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n 
                = (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i);
        }
    }
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fp_inflight 
        = (1U & (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
                    & ([&]() {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__c 
                                    = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                       >> 0x0000001bU);
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__Vfuncout 
                                    = ((((0x11U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__c)) 
                                         | (4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__c))) 
                                        | (0x1bU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__c))) 
                                       | (0x1cU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__c)));
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__Vfuncout))) 
                   | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid) 
                      & ([&]() {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__c 
                                    = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[5U] 
                                       >> 0x0000001bU);
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__Vfuncout 
                                    = ((((0x11U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__c)) 
                                         | (4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__c))) 
                                        | (0x1bU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__c))) 
                                       | (0x1cU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__c)));
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__Vfuncout)))) 
                  | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
                     & ([&]() {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__c 
                                = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec[5U] 
                                   >> 0x0000001bU);
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__Vfuncout 
                                = ((((0x11U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__c)) 
                                     | (4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__c))) 
                                    | (0x1bU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__c))) 
                                   | (0x1cU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__c)));
                        }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__Vfuncout)))) 
                 | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U] 
                    >> 2U)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_bits = 0ULL;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ebits = 0U;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__fbits = 0ULL;
    cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__subnormal_out 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__tiny) 
           & (~ (IData)((cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r 
                         >> 0x34U))));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__is_zero) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags 
            = ((0x1eU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags)) 
               | (1U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[0U]));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_bits 
            = ((QData)((IData)((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                      >> 9U)))) << 0x0000003fU);
    } else if (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__of) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags 
            = (8U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags 
            = (1U | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_bits 
            = ((1U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd))
                ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                    ? (0x7fefffffffffffffULL | ((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                                                    >> 9U)))) 
                                                << 0x0000003fU))
                    : ((QData)((IData)((0x7f7fffffU 
                                        | (0x80000000U 
                                           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                              << 0x00000016U))))) 
                       << 0x00000020U)) : ((2U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd))
                                            ? ((0x00000200U 
                                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U])
                                                ? ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                                    ? 0xffefffffffffffffULL
                                                    : 0xff7fffff00000000ULL)
                                                : ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                                    ? 0x7ff0000000000000ULL
                                                    : 0x7f80000000000000ULL))
                                            : ((3U 
                                                == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd))
                                                ? (
                                                   (0x00000200U 
                                                    & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U])
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                                     ? 0xfff0000000000000ULL
                                                     : 0xff80000000000000ULL)
                                                    : 
                                                   ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                                     ? 0x7fefffffffffffffULL
                                                     : 0x7f7fffff00000000ULL))
                                                : ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                                    ? 
                                                   (0x7ff0000000000000ULL 
                                                    | ((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                                                           >> 9U)))) 
                                                       << 0x0000003fU))
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7f800000U 
                                                                     | (0x80000000U 
                                                                        & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                                                           << 0x00000016U))))) 
                                                    << 0x00000020U)))));
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags 
            = ((0x1eU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags)) 
               | (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__inexact));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags 
            = ((0x1bU & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags)) 
               | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__tiny) 
                   & ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__inexact) 
                      | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_tem) 
                         >> 2U))) << 2U));
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ebits 
            = ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__subnormal_out)
                ? 0U : (0x000007ffU & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                                        ? ((IData)(0x03ffU) 
                                           + (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r))
                                        : ((IData)(0x007fU) 
                                           + (IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__e_r)))));
        cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__fbits 
            = (0x000fffffffffffffULL & cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_r);
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_bits 
            = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl)
                ? (((QData)((IData)((1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                           >> 9U)))) 
                    << 0x0000003fU) | (((QData)((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ebits)) 
                                        << 0x00000034U) 
                                       | cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__fbits))
                : ((QData)((IData)(((0x80000000U & 
                                     (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide[2U] 
                                      << 0x00000016U)) 
                                    | ((0x7f800000U 
                                        & ((IData)(cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__ebits) 
                                           << 0x00000017U)) 
                                       | (0x007fffffU 
                                          & (IData)(
                                                    (cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__fbits 
                                                     >> 0x1dU))))))) 
                   << 0x00000020U));
    }
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b = 
        ((~ (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 6U)) 
         & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_7));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__dat_wr_a = 
        ((IData)(cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_1) 
         & (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 6U));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a = 
        ((~ (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 6U)) 
         & (IData)(cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_1));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_rd_a = 
        ((~ (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 6U)) 
         & (IData)(cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_3));
    cpu_sim__DOT__u_escc__DOT__dat_rd_a = ((IData)(cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_3) 
                                           & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                              >> 6U));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_rd_b = 
        ((~ (vlSelfRef.cpu_sim__DOT__esc_req[1U] >> 6U)) 
         & (IData)(cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_6));
    cpu_sim__DOT__u_escc__DOT__dat_rd_b = ((IData)(cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_6) 
                                           & (vlSelfRef.cpu_sim__DOT__esc_req[1U] 
                                              >> 6U));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_icc 
        = ((((2U & (cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r 
                    >> 0x0000001eU)) | (0U == cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r)) 
            << 2U) | (((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v) 
                       << 1U) | (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__c)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wicc = 0U;
    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                  >> 0x0000001fU)))) {
        if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x0000001dU)))) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                              >> 0x0000001cU)))) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                  >> 0x0000001bU)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_icc 
                            = ((((2U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r 
                                        >> 0x0000001eU)) 
                                 | (0U == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r)) 
                                << 2U) | (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone) 
                                           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf)) 
                                          << 1U));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wicc 
                            = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                     >> 0x0000000dU));
                    }
                }
            }
        } else if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_icc 
                        = ((8U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r 
                                  >> 0x0000001cU)) 
                           | ((0U == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r) 
                              << 2U));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wicc 
                        = (1U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                 >> 0x0000000dU));
                } else {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wicc 
                        = (1U & ((~ (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap)) 
                                 & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cc)));
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap)
            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a
            : cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__r);
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned = 0U;
    if ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
         >> 0x0000001fU)) {
        if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                              >> 0x0000001cU)))) {
                    if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                  >> 0x0000001bU)))) {
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr;
                        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned 
                            = (1U & ((1U == (3U & (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                                   >> 0x0000000aU)))
                                      ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr
                                      : ((2U == (3U 
                                                 & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                                    >> 0x0000000aU)))
                                          ? (0U != 
                                             (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr))
                                          : ((3U == 
                                              (3U & 
                                               (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                                >> 0x0000000aU))) 
                                             && (0U 
                                                 != 
                                                 (7U 
                                                  & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr))))));
                    }
                }
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr;
                cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned 
                    = (1U & ((1U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                           >> 0x0000000aU)))
                              ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr
                              : ((2U == (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                               >> 0x0000000aU)))
                                  ? (0U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr))
                                  : ((3U == (3U & (
                                                   vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                                   >> 0x0000000aU))) 
                                     && (0U != (7U 
                                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr))))));
            }
        } else if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr;
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp 
                    = (7U & ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])
                              ? ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp))
                              : ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp) 
                                 - (IData)(1U))));
            }
        } else if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x0000001bU)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc;
            }
            cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken = 1U;
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr;
            cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned 
                = (0U != (3U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr));
        } else if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                             >> 0x0000001bU)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval;
        }
    } else {
        if ((0x40000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])
                        ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval
                        : ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])
                            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval
                            : ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tba 
                                << 0x0000000cU) | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tt) 
                                                   << 4U))));
            } else if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__wim;
                } else {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__c 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__ev 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__pv 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__sv 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__p 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__pil;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__e 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__i 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc;
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__Vfuncout 
                        = (0x40000000U | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__i) 
                                           << 0x00000014U) 
                                          | ((((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__e) 
                                               << 0x0000000cU) 
                                              | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__p) 
                                                  << 8U) 
                                                 | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__sv) 
                                                     << 7U) 
                                                    | ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__pv) 
                                                       << 6U)))) 
                                             | (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__ev) 
                                                 << 5U) 
                                                | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__c)))));
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__Vfuncout;
                }
            } else {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])
                        ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y
                        : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r);
            }
        } else if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r;
                }
            } else if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc;
            }
        } else if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
            if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x0000001bU)))) {
                vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result 
                    = ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[1U] 
                        << 0x00000011U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                           >> 0x0000000fU));
            }
        }
        if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                      >> 0x0000001eU)))) {
            if ((0x20000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((1U & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                              >> 0x0000001cU)))) {
                    if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken = 1U;
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target 
                            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc 
                               + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[3U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[2U] 
                                     >> 0x0000000fU)));
                    } else {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fcc 
                            = (3U & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[2U] 
                                     >> 0x0000000aU));
                        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target 
                            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc 
                               + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[2U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[1U] 
                                     >> 0x0000000fU)));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c 
                            = (0x0000000fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                                              >> 7U));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fe 
                            = (0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fcc));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fl 
                            = (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fcc));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fg 
                            = (2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fcc));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fu 
                            = (3U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fcc));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__r 
                            = ((4U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                ? ((2U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                    ? ((1U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                        ? (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fu)
                                        : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fg))
                                    : ((1U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                        ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fu) 
                                           | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fg))
                                        : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fl)))
                                : ((2U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                    ? ((1U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                        ? ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fu) 
                                           | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fl))
                                        : ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fl) 
                                           | (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fg)))
                                    : ((1U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c)) 
                                       && (1U & (~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fe))))));
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__Vfuncout 
                            = (1U & ((8U & (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c))
                                      ? (~ (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__r))
                                      : (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__r)));
                        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__Vfuncout;
                        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul 
                            = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                                      >> 6U) & ((~ (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken)) 
                                                | (8U 
                                                   == 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                                                       >> 7U))))));
                    }
                }
            } else if ((0x10000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                if ((0x08000000U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U])) {
                    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__br_cond;
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target 
                        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc 
                           + ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[2U] 
                               << 0x00000011U) | (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[1U] 
                                                  >> 0x0000000fU)));
                    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul 
                        = (1U & ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                                  >> 6U) & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__br_cond)) 
                                            | (8U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[4U] 
                                                   >> 7U))))));
                }
            }
        }
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 0U;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 0U;
    if ((0x13U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                   >> 0x0000001bU))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp)));
    }
    if (((0x13U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                    >> 0x0000001bU)) & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 2U;
    } else if (((0x0eU == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU)) & (8U <= 
                                               (0x0000001fU 
                                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 2U;
    } else if (((0x16U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU)) & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__wim) 
                                               >> (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 5U;
    } else if ((((0x17U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                            >> 0x0000001bU)) | (0x13U 
                                                == 
                                                (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                                 >> 0x0000001bU))) 
                & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__wim) 
                   >> (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 6U;
    } else if (cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_misaligned) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 7U;
    } else if ((([&]() {
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__c 
                        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU);
                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__Vfuncout 
                        = ((((0x11U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__c)) 
                             | (4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__c))) 
                            | (0x1bU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__c))) 
                           | (0x1cU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__c)));
                }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__Vfuncout)) 
                & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U] 
                   >> 1U))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 8U;
    } else if ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[5U] 
                & (((0x11U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                               >> 0x0000001bU)) | (4U 
                                                   == 
                                                   (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                                    >> 0x0000001bU))) 
                   | (0x1bU == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                                >> 0x0000001bU))))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 8U;
    } else if ((((0x1cU == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                            >> 0x0000001bU)) & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[0U] 
                                                >> 6U)) 
                & (~ (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__fps[2U] 
                      >> 0x0000000dU)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 8U;
    } else if (((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap) 
                & (6U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                          >> 0x0000001bU)))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 0x0aU;
    } else if (((8U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                        >> 0x0000001bU)) & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dz))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = 0x2aU;
    } else if (((0x14U == (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec[5U] 
                           >> 0x0000001bU)) & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__br_cond))) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = 1U;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt 
            = (0x000000ffU & ((IData)(0x80U) + (0x0000007fU 
                                                & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr)));
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_start 
        = (((((((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we)) 
                & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__reg_go)) 
               & (3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) 
              & (0x00000800U == (0x00000c00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U]))) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_done))) 
            & (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws))) 
           & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_d) 
                 | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_i))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_hazard = 
        (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid) 
          & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_trap))) 
         & (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e) 
             | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ser_inflight)) 
            | (([&]() {
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__c 
                            = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec[5U] 
                               >> 0x0000001bU);
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__Vfuncout 
                            = ((((0x11U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__c)) 
                                 | (4U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__c))) 
                                | (0x1bU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__c))) 
                               | (0x1cU == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__c)));
                    }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__Vfuncout)) 
               & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fp_inflight))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_a) 
                                                   | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr_b));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_pop 
        = (((IData)(cpu_sim__DOT__u_escc__DOT__dat_rd_a) 
            | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_rd_a) 
               & (8U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_special_held)) 
              & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_pop 
        = (((IData)(cpu_sim__DOT__u_escc__DOT__dat_rd_b) 
            | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_rd_b) 
               & (8U == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)))) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_special_held)) 
              & (0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_5 
        = ((0x00000080U & vlSelfRef.cpu_sim__DOT__esc_req[1U])
            ? ((IData)(cpu_sim__DOT__u_escc__DOT__dat_rd_a)
                ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rr8)
                : ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                    ? ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                        ? ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)
                            : ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                                ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr13)
                                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr12)))
                        : ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)
                            : ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                                ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr13)
                                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rr8))))
                    : ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                        ? 0U : ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                                 ? (6U | (((((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count)) 
                                             & (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo
                                                [0U] 
                                                >> 8U)) 
                                            << 6U) 
                                           | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err) 
                                                 << 4U))) 
                                          | (1U & (
                                                   (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy)) 
                                                   & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full))))))
                                 : ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched)
                                       ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_held)
                                       : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live)) 
                                     << 3U) | ((4U 
                                                & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full)) 
                                                   << 2U)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count))))))))
            : ((IData)(cpu_sim__DOT__u_escc__DOT__dat_rd_b)
                ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rr8)
                : ((8U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                    ? ((4U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                        ? ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)
                            : ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                                ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr13)
                                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr12)))
                        : ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)
                            : ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                                ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr13)
                                : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rr8))))
                    : ((2U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                        ? 0U : ((1U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr))
                                 ? (6U | (((((0U != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)) 
                                             & (vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo
                                                [0U] 
                                                >> 8U)) 
                                            << 6U) 
                                           | (((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err) 
                                                 << 4U))) 
                                          | (1U & (
                                                   (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy)) 
                                                   & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full))))))
                                 : ((((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched)
                                       ? (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_held)
                                       : (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live)) 
                                     << 3U) | ((4U 
                                                & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full)) 
                                                   << 2U)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count)))))))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_resolved)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap)) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go 
        = ((~ (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go)) 
                & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid)) 
               | (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_hazard))) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__cmd_send_abort 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
           & (0x18U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__cmd_send_abort 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
           & (0x18U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr) 
                                                & (9U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now) 
           & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now) 
           & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_a 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
           & (0x80U == (0xc0U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_b 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
           & (0x40U == (0xc0U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      & (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte)))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annul_now 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annulled) 
           | ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take 
        = (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have) 
            | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid)) 
           & ((~ ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go)) 
                  & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid))) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)) 
                 & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error)) 
                    & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect) 
                          & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc 
                             != vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc)))))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_a) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_b) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue 
        = (1U & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error)) 
                 & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush)) 
                    & (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending)) 
                        | (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                                   >> 0x00000022U))) 
                       & ((~ ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)) 
                              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid))) 
                          & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have)) 
                             | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))))));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__src_inst 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)
            ? vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_inst
            : vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst);
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifr = (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue)) 
                                                << 0x00000021U) 
                                               | (((QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc)) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s))));
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__cwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r 
        = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__src_inst 
                          >> 0x0000000eU));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__w = 0;
    {
        if ((8U > (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__Vfuncout 
                = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r;
            goto __Vlabel38;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__w)));
        __Vlabel38: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra1 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__cwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r 
        = (0x0000001fU & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__src_inst);
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__w = 0;
    {
        if ((8U > (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__Vfuncout 
                = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r;
            goto __Vlabel39;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__w)));
        __Vlabel39: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra2 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__cwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r 
        = (0x0000001fU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__src_inst 
                          >> 0x00000019U));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__w = 0;
    {
        if ((8U > (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__Vfuncout 
                = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r;
            goto __Vlabel40;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__w)));
        __Vlabel40: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra3 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__Vfuncout;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__cwp 
        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r 
        = (1U | (0x0000001eU & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__src_inst 
                                >> 0x00000019U)));
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__w = 0;
    {
        if ((8U > (IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__Vfuncout 
                = __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r;
            goto __Vlabel41;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__w)));
        __Vlabel41: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra4 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__Vfuncout;
}

VL_ATTR_COLD void Vcpu_sim___024root___stl_sequent__TOP__0(Vcpu_sim___024root* vlSelf);

VL_ATTR_COLD void Vcpu_sim___024root___eval_stl(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_stl\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcpu_sim___024root___stl_sequent__TOP__0(vlSelf);
        Vcpu_sim___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vcpu_sim___024root___eval_triggers__stl(Vcpu_sim___024root* vlSelf);
VL_ATTR_COLD bool Vcpu_sim___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vcpu_sim___024root___eval_phase__stl(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___eval_phase__stl\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_sim___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcpu_sim___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcpu_sim___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcpu_sim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_sim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_sim___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu_sim.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_sim___024root___ctor_var_reset(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___ctor_var_reset\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->cpu_sim__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15756746925417090610ull);
    vlSelf->cpu_sim__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9482991311254579034ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->cpu_sim__DOT__mr, __VscopeHash, 16117488295320971804ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__ms, __VscopeHash, 10901842423925230300ull);
    vlSelf->cpu_sim__DOT__sn = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 6685700704207698267ull);
    vlSelf->cpu_sim__DOT__wd_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9567733424612964361ull);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->cpu_sim__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14598735101665651020ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->cpu_sim__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2870051182640127413ull);
    }
    VL_SCOPED_RAND_RESET_W(67, vlSelf->cpu_sim__DOT__esc_req, __VscopeHash, 2628546428655386415ull);
    vlSelf->cpu_sim__DOT__esc_rsp = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15495064512942827941ull);
    vlSelf->cpu_sim__DOT__lat = 0;
    vlSelf->cpu_sim__DOT__gaps = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7391629456361926051ull);
    vlSelf->cpu_sim__DOT__mst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3375039488668167401ull);
    vlSelf->cpu_sim__DOT__m_cnt = 0;
    vlSelf->cpu_sim__DOT__beat = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15769641224940401159ull);
    vlSelf->cpu_sim__DOT__gap_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3930813406911037121ull);
    vlSelf->cpu_sim__DOT__bpa = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16130132712641126182ull);
    vlSelf->cpu_sim__DOT__esc_started = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6391478618869099397ull);
    vlSelf->cpu_sim__DOT__cyc = 0;
    vlSelf->cpu_sim__DOT__last8 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8654859671921988016ull);
    vlSelf->cpu_sim__DOT__quiet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6093033842659936991ull);
    vlSelf->cpu_sim__DOT__keep_wd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 68221659946494785ull);
    vlSelf->cpu_sim__DOT__budget = 0;
    vlSelf->cpu_sim__DOT__trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9587041539387436443ull);
    vlSelf->cpu_sim__DOT__dbg_from = 0;
    vlSelf->cpu_sim__DOT__dbg_to = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ifr = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14939670229464195843ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ifs = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4475387836559644514ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->cpu_sim__DOT__u_cpu__DOT__dmr, __VscopeHash, 9546920662608607038ull);
    VL_SCOPED_RAND_RESET_W(67, vlSelf->cpu_sim__DOT__u_cpu__DOT__dms, __VscopeHash, 10839890486374254558ull);
    VL_SCOPED_RAND_RESET_W(176, vlSelf->cpu_sim__DOT__u_cpu__DOT__fpr, __VscopeHash, 17107334099544751898ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->cpu_sim__DOT__u_cpu__DOT__fps, __VscopeHash, 12867227952641371344ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__iu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5229694561921172588ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15970064850677901946ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__rg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016510277548094213ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__rg_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10620573867167095812ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__rg_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12903804517764890612ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__rg_asi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11589029379385148862ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__rg_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12598529461174039506ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__xi = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 8333445908785914960ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__xd = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 8264143245869937129ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__xi_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3907025658587470204ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__xd_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5955626437592736670ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__wk_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3983137801296593012ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__wk_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11003719889473098998ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__wk_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1694535301122021427ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__wk_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13375586632123638548ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__wk_masked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5269440376569766540ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__wk_owner = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6501706086903627846ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__be_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15782811737652381772ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__be_at = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7145313745058358809ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__u_cpu__DOT__mem_w_r, __VscopeHash, 4088429926013895523ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16535776631162338911ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15852535535448405713ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_pa = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13287993276830452354ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_cacheable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12758548530666628091ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15641967365629334880ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5253841093121698317ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12430780418853253615ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__inval_line = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 1407646769826182813ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_flash_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16358462381782167526ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_flash_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11611945025580929405ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_flash_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6475588076007753648ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_flash_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3889830898590528457ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_dg_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14962837365675809662ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_dg_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12490409850909089602ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5154103108390003282ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_dg_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15712815113745200540ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->cpu_sim__DOT__u_cpu__DOT__mem_i, __VscopeHash, 7905161138271143830ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__u_cpu__DOT__mem_i_r, __VscopeHash, 12379120182626478106ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__u_cpu__DOT__mem_d_r, __VscopeHash, 9576987873436112553ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8749673126102522648ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1241778792070646098ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14921384283942563146ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10635020915349606568ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__dc_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16280246647990759636ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT____Vcellinp__u_dc__diag_wdata_i = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__owner_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4099765189398361464ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__owner = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6988952753623781374ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__locked_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370961644365741060ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__is = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15042526760636821847ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__i_va = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10027773254902768615ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__i_supv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15537525789009302829ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ds = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16493853341369861725ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__d_pa = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 10297530949965000912ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__d_cacheable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3020283461000212202ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__bk_val = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 1121136148831399691ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__bk_mask = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2575891198010205484ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__bk_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15674204903265473502ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__bk_sts = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 489534677712072215ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ctrv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15955048310255528526ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ctrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7121327488021244696ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__ctrs = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7773135684371130540ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__action = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13458972952777846552ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__d_masked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3164742468975032392ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4407300020513100981ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ef = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16156338765891711495ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13218047299125514875ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ps = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7015885768689734443ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__et = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5093814246534355658ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__pil = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1680066540062874192ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__cwp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3966581302571465751ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__wim = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15952820313418996632ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tba = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12629903239607564631ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__tt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17290135432721851296ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8888490249195976564ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12749879558890285272ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1702100276850778873ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3149644539704564663ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17241602871928058277ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1221974669331924669ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_tt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2876568534705185428ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10018731023945574089ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annulled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15123653716471659772ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10480918861768337248ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_dec, __VscopeHash, 6087580081782240264ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9281231103152533615ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1717986727432823230ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1260780972742578818ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1465727650612050826ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9932690770596131110ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8924837854049399428ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1341400619110401497ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18021526643658642586ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_rs4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13256272660775078437ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4546231083561629400ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec, __VscopeHash, 2654398545822310547ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8138263117593596482ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10135549968447908971ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18331448364207264003ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2978348848835601460ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_tt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18350254011611346157ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16071623094194407708ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8209620170569827827ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_icc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10787692104708495193ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wicc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10858005704573458334ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15461470600917104556ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2031563415716409197ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_wr_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13407054814857347339ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_newcwp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8370383534726957736ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15510800744574763244ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_dec, __VscopeHash, 3550579020065369601ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12245870530377229290ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9411482550869480870ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15748924170786969475ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6889481871996714888ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_tt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9663658593351192104ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8297879638519473301ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1664010796541948180ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_icc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1397729188350326745ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wicc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17208360179983429140ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5031814549497774733ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15621245765170998676ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_wr_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15104602664241885915ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_newcwp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11334438781395109608ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11066042658893702200ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17789547871565365709ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12456469559385168995ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11798606756300954696ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3531420108513623372ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5105163928878764975ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3501045025912037331ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17045746399699104666ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2230129495018684711ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15373873691381245516ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8354488047037804708ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9077068260816799450ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17296810774799323912ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 219388150639557159ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4580517253809459787ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7823849637803873207ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7156126624123023262ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11792760298313167ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8021206952810437926ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_fault = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1235967974782433475ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_annul_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13988938276366296010ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_annul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 743645270318992699ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6884220118144308479ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__can_issue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12390944129658887263ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10616620111384457651ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3152863650101679147ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_fault = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18309554655165661429ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1234248538024920758ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1978734815248832750ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8525185429610285425ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17581509959315738345ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_dec, __VscopeHash, 4333271204281789402ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8429044173082244530ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 327098817386564640ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wcwp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6239358941685816093ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rf_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1930309313602779228ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__src_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7876531908393469243ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ser_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17706241449695773838ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ser_commit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8574127315512828768ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_uses_rd_of_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1165934549620635532ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_annul_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17145985112081257429ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_rdval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5988147234771184711ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1940853317174085859ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16246563705976151627ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__a_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 424427265706061842ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__b_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6547519069007999259ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs3v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4327560977041607152ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs4v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8699430080698874949ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__icc_fwd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 553862014424878904ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6234804006997015024ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_started = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2496185676485493255ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__md_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1082002513213234702ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_is_md = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1996940523349894411ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14152315684446364199ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13684761115127648457ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_newcwp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8168866312126362906ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9127871071248076550ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_tt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13220444275210758555ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__br_cond = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2986180029196953884ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wrval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1978587399088173432ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14336689849880314131ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wicc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10867954607098698547ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_icc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1558529234059279084ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6556723241301860647ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_wy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15079518244169715055ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_resolved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10480394183851909529ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_is_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12317454240553841428ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1589591828842984174ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_acked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6200984412454754463ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4661311638394377005ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_fault = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5469833727883168187ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_two_cycles = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8018244766387936572ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_commit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2866340410040338954ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_7 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_15 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_16 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_17 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_h06e81a67__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_ha830843f__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_h9e4664c8__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT____Vlvbound_hcea681a3__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10362775850389980681ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9519338809253173586ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13699876363917700184ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8723445016104141781ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3026514654139009977ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12743340137719832704ull);
    for (int __Vi0 = 0; __Vi0 < 136; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 938110187921221845ull);
    }
    for (int __Vi0 = 0; __Vi0 < 136; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13935056230090156978ull);
    }
    for (int __Vi0 = 0; __Vi0 < 136; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2481211918896614290ull);
    }
    for (int __Vi0 = 0; __Vi0 < 136; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10803440450715713953ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__q1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13844826611140114298ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__q2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4943691252086800685ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__q3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7958623942428441636ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__q4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4446697287958516343ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__fwd1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199242277369939879ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__fwd2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8953226411623187702ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__fwd3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13963154187713417728ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__fwd4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14222455065220219856ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__z1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18405091779345505819ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__z2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17347354681856016872ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__z3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9924472026809106252ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__z4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1409809775376917187ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10112108170269328045ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5668248667674062085ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 745714842913901910ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337837830254138103ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7080239951569147223ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768548805899774645ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14715315784663549035ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_mulscc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5264940318775750964ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_logic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5952660469557716539ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_shift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11189591725457404845ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11114038890002438842ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ma = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1179447083355303680ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mb = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16929363585832891325ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p1, __VscopeHash, 6949220254558846485ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p2, __VscopeHash, 5439023854349155787ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__p3, __VscopeHash, 8019774943278577365ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__mstage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5079744663235032555ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__drun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14699673221753369215ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dcnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 255816407723787284ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10685187039493630570ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__den = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11675841345900649245ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11220017492203506286ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__quo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9624815306389650590ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__qneg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15845489135380774830ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ovf_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5503534789225069821ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dsigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1535071364128746268ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__ddone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9106200539827385424ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5207921800231670562ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_abs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16849234611117485516ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_abs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16524265556515805908ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__n_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4667633351728781255ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__d_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3096097648437123047ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dres = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6928358452818732917ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__dovf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 788394378504906691ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_md__DOT__step__DOT__trial = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1172993234608671762ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mcntl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9218545325383795184ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctpr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10418987025749869270ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__trcr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12052106061318222965ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6403010361118930469ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4804560635831599172ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 464829367144688628ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11904944669201199574ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfar_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7979158277065068037ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wd_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 452454264515903133ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__nf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4842912583984778016ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(69, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb[__Vi0], __VscopeHash, 11786996582096432431ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14325054068998131852ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14365845609963183976ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1632892011782385274ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hi_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 446971367579902231ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__hd_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1454267807905813580ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__victim = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14472224156938509454ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6123310096944534423ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_probe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8545847555931428509ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440556792965559028ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_ptype = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 270655876603036464ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6095195631871658630ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13119131761126812312ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_no_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12244511377631227207ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18121807755336563835ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_addr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 10838190980408122597ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_entry = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7875338661752990651ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11684823147843818443ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234045261720693773ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3154573188166458303ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__mem_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10078889991249031711ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ft = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12113724149383742470ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_ptd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14122290591051431173ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__wk_rm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2728442242246121416ull);
    VL_SCOPED_RAND_RESET_W(69, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__new_entry, __VscopeHash, 15910247014610092963ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__reg_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7604641118706759337ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11464332045712830379ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc03d1582__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc03d1fc1__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hc83b63e7__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h0f05b2b3__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h9f418323__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h9f416de6__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h96397053__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h27097e52__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h8578f7c8__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h63936532__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h6799c03d__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_hd7a1735f__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vlvbound_h85a776eb__0 = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5353720673381733472ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17691420316749509935ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14401865193588190764ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8313324170939013336ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__da_rdata[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14595025667089754828ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_rdata[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12109482320360257367ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__db_we_way = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5211058781747986590ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17531642038533593875ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15907597175388409115ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12106937555667079668ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ta_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10704327993768725306ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1642126954061067989ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tb_we_way = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17421261846526324620ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vbits[__Vi0], __VscopeHash, 4644583330398613191ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__mru[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10505273053905883647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__lck[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13014118720287406885ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9845740074482182438ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1821023989330754377ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_atomic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15213496721688989580ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_cacheable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11177077948183694487ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_pa = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16102689848183558938ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8420582479503639026ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2049061763776890174ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__r_set = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1064943440226654010ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5554792742320572269ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2748443734465400386ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5362347494612005224ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_snooped = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14668737419764507855ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6064338674560064772ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_written = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4604676458607115153ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__single_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8321568822665295739ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1985903603185727190ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__hit_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12473306435732774687ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_present = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5489526935136834464ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__tag_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10692176164922870353ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__victim = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10353968190897721933ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_line[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3247709115725299140ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_wr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15014729055398344286ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_rd = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3041443643759727463ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1512824301503606980ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16736128330868246992ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_push2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5465106460106679086ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__sq_pushes = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3913977374852867259ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__qs = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7892537249813932030ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16150938157090487048ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__q_vidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16406592143780538607ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__ds = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4830459352648538799ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__fill_beat_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2921301905918885997ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__st_hit_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15158372379020126412ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_data_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199552279460821712ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__dg_tag_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4030663002590941677ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__snoop_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15644026789861750470ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15065388909732279798ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__4__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellinp__g_way__BRA__4__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT____Vcellout__g_way__BRA__4__KET____DOT__u_tag__a_rdata = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14623831272299200328ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16001580418264529117ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13084112576728544694ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16080246275524091725ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16085936098977284878ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14193497761223067654ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6004335249460220705ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2434514148496204159ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2241652209681853299ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__g_way__BRA__4__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10432243421030719133ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2033682033571971491ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14466074076917225702ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9258912382350328437ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18423901803593936621ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__da_rdata[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9624662011812347979ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_rdata[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17200099608469845793ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__db_we_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6569857939316092129ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_addr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4590547550909969003ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1868928249966529493ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4253973453844143321ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ta_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8950842094477690696ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12579571626135542501ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__tb_we_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2989108554600946429ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits[__Vi0], __VscopeHash, 14198177735353262951ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__mru[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16884565603778847524ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__lck[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5835503550408544892ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15608935972551954318ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13034036688908962070ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_atomic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1716200822906590919ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_cacheable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12321245256291984881ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15045320175804026941ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2544666872603044431ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11683604786829289655ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_set = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8126607546026601347ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16959787091994944440ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7867978387065790776ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16720789653061106524ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_snooped = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7300771990240974651ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12641595773987899918ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_written = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4226792193529075066ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__single_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15132089400537536320ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3015072968482514880ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__hit_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14409153325458215262ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__victim = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12052257991601009781ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_line[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 376332081644934110ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_wr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18397679609675073839ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_rd = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1099579651099811804ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2588744213500114928ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6338349826269554477ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_push2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5236537017333781722ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_pushes = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3199542840053029082ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__qs = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8787323118249038779ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8331666602175314803ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_vidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 455777148845566818ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ds = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17800341204119285285ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4264102297636474463ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st_hit_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7833282105778160420ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_data_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5119279978684902630ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__dg_tag_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13579578802077258325ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__snoop_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10238747572654237567ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13588756095994672387ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__0__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__0__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__1__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__1__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__2__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__2__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_data__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_data__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__b_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellinp__g_way__BRA__3__KET____DOT__u_tag__b_we = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT____Vcellout__g_way__BRA__3__KET____DOT__u_tag__a_rdata = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__unnamedblk13__DOT__i = 0;
    vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__unnamedblk14__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16841118901840216280ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1684067604769266494ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1883336026513850289ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__1__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15063885935773736174ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13751324140736480094ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__2__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8328236951864975562ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9153190445816904834ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__g_way__BRA__3__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9249470205265718046ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12287254420194108234ull);
    }
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7528548260270990472ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12651438341631893664ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2501066790094206231ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dp_wr_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13578131821508406717ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_rd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1177623390597685804ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_tem = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4447103229673911053ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_aexc = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3138467262936659368ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_cexc = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11591546244057966417ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_ftt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12440590049607148537ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fsr_fcc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8236685743848117655ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2263413600452576437ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__qne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6420561096765228938ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1805937755311985998ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8946287273001804371ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12537943317084965795ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__src_dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3735032819279792998ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__dst_dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13114245825058433164ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18187358630107260025ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16406130272282331296ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__a, __VscopeHash, 9272024629528372064ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__b, __VscopeHash, 14386162250602225063ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16121648350901813104ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_src_dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4787114320931261648ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_dst_dbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2039621918776427135ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15012075465890351044ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10289443902297613566ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16769288326799103185ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a, __VscopeHash, 4063344686090928469ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b, __VscopeHash, 1491442429049624891ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_a_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8367607918460390574ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__c_b_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18247174924354645885ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wide, __VscopeHash, 532657436433837009ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14695044260764095481ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1439702538019405050ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_direct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15290803302168521658ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_fcc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12779108494323334005ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__res_is_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10772844467773773751ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6824756761726647539ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__rnd_flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2951370955466198693ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8692953814441882963ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__ds_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5764918767004357399ull);
    VL_SCOPED_RAND_RESET_W(106, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p1, __VscopeHash, 3887372689771625908ull);
    VL_SCOPED_RAND_RESET_W(106, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__mul_p2, __VscopeHash, 11484337405119211139ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__m_small_al = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 15198134117510170794ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15504469110603610840ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__fin_flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8651265835179593164ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__wait_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1969564805859693927ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3037909763744955862ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__e = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4627513139991946812ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ua__DOT__f = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 2777645492055100378ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1814954056076020755ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__e = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15619973181918582787ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ub__DOT__f = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 6260128471620107628ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__mn = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 16854104707060190260ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__en = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14713460208592585239ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__is_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6989390259557638284ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__emin = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9468431021005323470ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept_n = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 392702509268977928ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18233183735565035574ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10871309243240424826ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__tiny = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15478978374416317751ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__kept = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 10817674389707206603ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15276897523715838545ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_round__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9864965935105516176ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2676365825035949998ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__is_sqrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11522100450744607615ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10699565737770542598ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem = VL_SCOPED_RAND_RESET_Q(62, __VscopeHash, 4700709021803640602ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rad, __VscopeHash, 13774525097773319413ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__q = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 4831802594005721174ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8801574677174578599ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__exp = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5900853319368804457ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__den = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 501803568122576335ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__rem2 = VL_SCOPED_RAND_RESET_Q(62, __VscopeHash, 16268816518757005052ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__sq_trial = VL_SCOPED_RAND_RESET_Q(62, __VscopeHash, 13930564819811609132ull);
    vlSelf->cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__u_ds__DOT__dv_trial = VL_SCOPED_RAND_RESET_Q(62, __VscopeHash, 3823976234398437658ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__acc = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14409688695902701969ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__acc_next = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14371650672525511951ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__pclk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18344688324443144780ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11580881532529770058ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__wbyte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1491340130489530754ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ctl_wr_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5162295570075058981ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ctl_rd_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1933455853039298396ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__dat_wr_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1312058265227547704ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ctl_wr_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11348194844927995882ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ctl_rd_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18028349398147687215ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ctl_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334983154947025344ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 610472370753619255ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__wr2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 742805813832991270ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__wr9 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4968766978878697561ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__hw_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10462703362980931327ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chn_rst_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1433793679418599549ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chn_rst_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14232399424484475247ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__rx_spec_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2032094096261937636ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__tx_ip_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14536375907091778722ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ext_ip_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13756685217664962748ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__rx_spec_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12393015828260486386ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__tx_ip_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4746985483586243863ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ext_ip_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7548584238535777350ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__ip = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2537988671909255499ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__code = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9507026663612024146ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_0 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_5 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_7 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT____VdfgRegularize_h7c4390af_0_8 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT____Vlvbound_h91a52c22__0 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT____Vlvbound_ha1a42892__0 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11247588408411737273ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15337967832676179360ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2685584500938871574ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 189519967316562538ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr11 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12693407120350867517ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr12 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6209990762080674804ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr13 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 247125817188319404ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr14 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 352575036301367608ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__wr15 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8993562092852066035ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__cmd_send_abort = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3391077737933383249ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8654756712644155779ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14020111187141287755ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1559568483951239237ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__brg_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5520738284917981967ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7564064291898212484ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5979858044735347541ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__clks_per_bit = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14771496302863020884ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17436551405604521213ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_buf_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1451895047662484761ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_shift = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12374025001517272430ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_nbits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9118385804687985852ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12020954357539435703ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_clk_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9585823398442171609ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_stop_left = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8636213243825627138ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_phase_stop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3940856882363473639ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10311215418948862349ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 910044821437529338ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_data_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17104505720318408894ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8552309971223689339ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12796181701181238288ull);
    }
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14703394609195390938ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2707462087972892488ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646080968349521082ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_parity_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5292609327602777437ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_break = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 286025293862288533ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_first_armed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 366181591205093941ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_special_held = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9718523170269732710ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rx_data_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7263313471974478477ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2854951982378282234ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11107956697927265743ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_bit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6158454721496424597ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_shift = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17534285996318377830ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_in_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6870192479615276255ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_framing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17184677986881318850ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_char = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13759408641754888715ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 841573132864239427ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_break_char = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2927964907505848908ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rs_parity_bad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6868132577056594738ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__tx_underrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16733428623195206643ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 252864433567142030ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_live = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16183769087039195664ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_held = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2505910777341286982ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_prev = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5950141835279581293ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__ext_change = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17128820984590656623ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rr8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12013604045726931912ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT____Vlvbound_h91a52c22__0 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT____Vlvbound_ha1a42892__0 = 0;
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2746101966658917792ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3365891373500449676ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17502773459538697503ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9311667011550088798ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr11 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5551670669824638717ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr12 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11995223994226564169ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr13 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6144010731731733286ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr14 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 226762456245708684ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__wr15 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 891417862539562730ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__cmd_send_abort = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10769985815942751001ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18269312788836260713ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4919188103830574160ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3842273129041017550ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__brg_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11244430726426995098ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3542690720937739416ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13204381463494033944ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__clks_per_bit = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17475822050659806193ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17168661431852621816ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_buf_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8977471826098439104ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_shift = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8579574590834263725ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_nbits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16990492384340155936ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1652832064278107872ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_clk_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7194809992623279836ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_stop_left = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13375414121896778793ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_phase_stop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12495433545941583082ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4383620219350323771ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14159864632002332842ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_data_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13010995092680353200ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656216271295630667ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3686836593658448494ull);
    }
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12358513433434406304ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7225246348134692618ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7197725334456209824ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_parity_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9272041153234980686ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_break = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1615825575574816130ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_first_armed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15779233422758758263ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_special_held = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8690275094189771103ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rx_data_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11353499703141892278ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5553621306502885486ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3441497893128567341ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_bit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9643845178711488666ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_shift = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17884687938413634674ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_in_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9083449510782568452ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_framing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9311417010987198754ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_char = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18150807932194732536ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6184856718996144704ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_break_char = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13022341571598823690ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rs_parity_bad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5805972105846465600ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__tx_underrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16864044782733308555ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16541318683181480209ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_live = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 858329767224033054ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_held = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4000670327128292780ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_prev = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8652778581822059018ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__ext_change = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5987756107451888669ull);
    vlSelf->cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rr8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10116093474566420046ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_2 = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__7__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__8__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__serialising__9__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__10__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__11__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__12__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__13__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__15__m_is_ld = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__size = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__sgn = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__16__d = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__17__m_is_ld = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__size = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__sgn = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__18__d = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__19__m_is_ld = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__size = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__sgn = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__20__d = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__m_is_ld = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__size = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__sgn = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__ld_extend__22__d = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fcc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fe = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fg = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__fu = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fcond_true__24__r = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__is_fp__25__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__i = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__e = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__p = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__sv = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__pv = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__ev = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__psr_word__26__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__w = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__w = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__w = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__w = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__w = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__Vfuncout = 0;
    VL_ZERO_RESET_W(69, vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__e);
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__33__va_ok = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__Vfuncout = 0;
    VL_ZERO_RESET_W(69, vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__e);
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__c = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb_hit__34__va_ok = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a = 0;
    vlSelf->__Vfunc_acc_fault__36__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__36__at = 0;
    vlSelf->__Vfunc_acc_fault__36__acc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__Vfuncout = 0;
    VL_ZERO_RESET_W(69, vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__e);
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__37__va = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__a = 0;
    vlSelf->__Vfunc_acc_fault__39__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__39__at = 0;
    vlSelf->__Vfunc_acc_fault__39__acc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__Vfuncout = 0;
    VL_ZERO_RESET_W(69, vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__e);
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__pte_pa__40__va = 0;
    vlSelf->__Vfunc_acc_fault__41__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__41__at = 0;
    vlSelf->__Vfunc_acc_fault__41__acc = 0;
    vlSelf->__Vfunc_tlb_pte_image__42__Vfuncout = 0;
    VL_ZERO_RESET_W(69, vlSelf->__Vfunc_tlb_pte_image__42__e);
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc = 0;
    vlSelf->__Vfunc_acc_fault__44__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__44__at = 0;
    vlSelf->__Vfunc_acc_fault__44__acc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__l = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__fav = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__to = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__n = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__ow = 0;
    vlSelf->__Vfunc_acc_fault__48__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__48__at = 0;
    vlSelf->__Vfunc_acc_fault__48__acc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc = 0;
    vlSelf->__Vfunc_acc_fault__55__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__55__at = 0;
    vlSelf->__Vfunc_acc_fault__55__acc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__l = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__fav = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__to = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__n = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__ow = 0;
    vlSelf->__Vfunc_acc_fault__59__Vfuncout = 0;
    vlSelf->__Vfunc_acc_fault__59__at = 0;
    vlSelf->__Vfunc_acc_fault__59__acc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__l = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__fav = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__to = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__n = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__ow = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__l = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__fav = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__to = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__n = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__ow = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__cur = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__at = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__ft = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__inst = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_ic__DOT__vidx__87__pa = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vidx__90__pa = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__93__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__sd = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__94__dd = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__95__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__96__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__96__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__97__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__98__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__98__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__99__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__100__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__100__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__101__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__102__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__102__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__103__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__104__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__104__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__105__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__sd = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__conv_nan__106__dd = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__107__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__107__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__108__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__109__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__109__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__110__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__111__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__111__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__112__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__113__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__114__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__115__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__115__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__116__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__116__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__bits = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__quiet__117__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__118__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__default_nan__118__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__119__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__120__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__inf_of__121__dbl = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__122__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__122__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__123__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_cpu__DOT__g_fpu__DOT__u_fpu__DOT__zero_of__123__s = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__five_or_less__126__d = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__nbits__127__sel = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__sh = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__total = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__even = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_a__DOT__parity_bad_f__131__p = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__five_or_less__132__d = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__nbits__133__sel = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__Vfuncout = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__sh = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__total = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__even = 0;
    vlSelf->__Vfunc_cpu_sim__DOT__u_escc__DOT__chan_b__DOT__parity_bad_f__137__p = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__Vdly__cpu_sim__DOT__mst = 0;
    vlSelf->__Vdly__cpu_sim__DOT__m_cnt = 0;
    vlSelf->__Vdly__cpu_sim__DOT__beat = 0;
    vlSelf->__Vdly__cpu_sim__DOT__gap_q = 0;
    VL_ZERO_RESET_W(67, vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__dms);
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_inval = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_v = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__dc_flash_l = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__ds = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__d_pa = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__d_cacheable = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__inval_line = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_val = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_mask = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_ctl = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__bk_sts = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrv = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrc = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__ctrs = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__action = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctpr = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ctx = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__used = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_probe = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_ptype = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_va = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_at = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_no_fault = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_level = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__w_fault = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_done = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_done = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__ic_dg_rdata = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__st = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_atomic = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__r_pa = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_beat = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_data = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_err = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_snooped = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__fill_way = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_wr = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_rd = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_count = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__qs = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__q_cur = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__ds = 0;
    vlSelf->__Vdly__cpu_sim__DOT__u_escc__DOT__ptr = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v1 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v2 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v3 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v4 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v5 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v6 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__ram__v7 = 0;
    vlSelf->__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 = 0;
    vlSelf->__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0 = 0;
    vlSelf->__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 = 0;
    vlSelf->__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0 = 0;
    vlSelf->__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 = 0;
    vlSelf->__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0 = 0;
    vlSelf->__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 = 0;
    vlSelf->__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v1 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v64 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v65 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v66 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v67 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v68 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v69 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v70 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v71 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v72 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v73 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v74 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v75 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v76 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v77 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v78 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v79 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v80 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v81 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v82 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v83 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v84 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v85 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v86 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v87 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v88 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v89 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v90 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v91 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v92 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v93 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v94 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v95 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v96 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v97 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v98 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v99 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v100 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v101 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v102 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v103 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v104 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v105 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v106 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v107 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v108 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v109 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v110 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v111 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v112 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v113 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v114 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v115 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v116 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v117 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v118 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v119 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v120 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v121 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v122 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v123 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v124 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v125 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v126 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v127 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v128 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v129 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v193 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v194 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v200 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__tlb__v201 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v1 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v4 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v5 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v6 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v7 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v8 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v9 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v10 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v11 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v12 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_line__v0 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__sq_line__v2 = 0;
    vlSelf->__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_dc__DOT__vbits__v15 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu_sim__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

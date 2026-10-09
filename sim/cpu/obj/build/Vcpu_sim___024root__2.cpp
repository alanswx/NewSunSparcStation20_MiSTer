// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

void Vcpu_sim___024root___nba_sequent__TOP__2(Vcpu_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_sim___024root___nba_sequent__TOP__2\n"); );
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
    CData/*0:0*/ cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin;
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin = 0;
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
    CData/*4:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r = 0;
    CData/*2:0*/ __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp;
    __Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp = 0;
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
    // Body
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rs4v 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__fwd__21__Vfuncout;
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
    if (vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1[vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0] 
            = vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem1__v0;
    }
    if (vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2[vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0] 
            = vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem2__v0;
    }
    if (vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3[vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0] 
            = vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem3__v0;
    }
    if (vlSelfRef.__VdlySet__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4[vlSelfRef.__VdlyDim0__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0] 
            = vlSelfRef.__VdlyVal__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__mem4__v0;
    }
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
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__w)));
        __Vlabel0: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__wa 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__32__Vfuncout;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have 
        = vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__flush 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_valid) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_second) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__w_trap)));
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sum 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__sub)
            ? ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                - vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
               - (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin))
            : ((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op1 
                + vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__op2) 
               + (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__cin)));
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
    {
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a = 0ULL;
        if ((1U & (~ (IData)((__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__r 
                              >> 0x00000024U))))) {
            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__Vfuncout 
                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__35__a;
            goto __Vlabel1;
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
        __Vlabel1: ;
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
            goto __Vlabel2;
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
        __Vlabel2: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__xd_r = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__answer__38__Vfuncout;
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
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_fault 
            = (3U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_fault));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_inst 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_inst;
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc;
    } else {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_fault 
            = (3U & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_inst 
            = (IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                       >> 2U));
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc 
            = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_pc;
    }
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
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst) {
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_npc = 0U;
    } else {
        if (((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take)))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_npc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc;
        }
        if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d) 
                          | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving))))) {
                if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf) {
                    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_npc 
                        = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target;
                }
            }
        }
        if (((((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid) 
               & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_take))) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect)) 
             & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving))) {
            vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_npc 
                = vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_target;
        }
    }
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
                            goto __Vlabel3;
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
                                goto __Vlabel4;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__45__inst)
                                    ? 0U : 1U);
                            __Vlabel4: ;
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
                                goto __Vlabel5;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__inst)
                                    ? 0U : 1U);
                            __Vlabel5: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__46__Vfuncout;
                        if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc) 
                             == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                            goto __Vlabel3;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                            goto __Vlabel3;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__nc)) 
                             & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__pc)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__43__Vfuncout = 1U;
                        __Vlabel3: ;
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
                                        goto __Vlabel7;
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
                                            goto __Vlabel8;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__50__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel8: ;
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
                                            goto __Vlabel9;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel9: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__51__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                        goto __Vlabel7;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                        goto __Vlabel7;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 0U;
                                        goto __Vlabel7;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 0U;
                                        goto __Vlabel7;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout = 1U;
                                    __Vlabel7: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__49__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__47__cur;
                goto __Vlabel6;
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
                                    goto __Vlabel10;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__52__inst)
                                        ? 0U : 1U);
                                __Vlabel10: ;
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
                                    goto __Vlabel11;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__53__inst)
                                        ? 0U : 1U);
                                __Vlabel11: ;
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
            __Vlabel6: ;
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
                            goto __Vlabel12;
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
                                goto __Vlabel13;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__56__inst)
                                    ? 0U : 1U);
                            __Vlabel13: ;
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
                                goto __Vlabel14;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__inst)
                                    ? 0U : 1U);
                            __Vlabel14: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__57__Vfuncout;
                        if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc) 
                             == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                            goto __Vlabel12;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                            goto __Vlabel12;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 0U;
                            goto __Vlabel12;
                        }
                        if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__nc)) 
                             & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__pc)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 0U;
                            goto __Vlabel12;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__54__Vfuncout = 1U;
                        __Vlabel12: ;
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
                                        goto __Vlabel16;
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
                                            goto __Vlabel17;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__61__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel17: ;
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
                                            goto __Vlabel18;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel18: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__62__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                        goto __Vlabel16;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                        goto __Vlabel16;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 0U;
                                        goto __Vlabel16;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 0U;
                                        goto __Vlabel16;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout = 1U;
                                    __Vlabel16: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__60__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__58__cur;
                goto __Vlabel15;
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
                                    goto __Vlabel19;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__63__inst)
                                        ? 0U : 1U);
                                __Vlabel19: ;
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
                                    goto __Vlabel20;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__64__inst)
                                        ? 0U : 1U);
                                __Vlabel20: ;
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
            __Vlabel15: ;
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
                                goto __Vlabel21;
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
                                    goto __Vlabel22;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__66__inst)
                                        ? 0U : 1U);
                                __Vlabel22: ;
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
                                    goto __Vlabel23;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__inst)
                                        ? 0U : 1U);
                                __Vlabel23: ;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc 
                                = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__67__Vfuncout;
                            if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc) 
                                 == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                                goto __Vlabel21;
                            }
                            if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                                goto __Vlabel21;
                            }
                            if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 0U;
                                goto __Vlabel21;
                            }
                            if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__nc)) 
                                 & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__pc)))) {
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 0U;
                                goto __Vlabel21;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__65__Vfuncout = 1U;
                            __Vlabel21: ;
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
                                        goto __Vlabel25;
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
                                            goto __Vlabel26;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__70__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel26: ;
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
                                            goto __Vlabel27;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel27: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__71__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                        goto __Vlabel25;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                        goto __Vlabel25;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout = 1U;
                                    __Vlabel25: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__69__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__68__cur;
                goto __Vlabel24;
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
                                    goto __Vlabel28;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__72__inst)
                                        ? 0U : 1U);
                                __Vlabel28: ;
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
                                    goto __Vlabel29;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__73__inst)
                                        ? 0U : 1U);
                                __Vlabel29: ;
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
            __Vlabel24: ;
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
                            goto __Vlabel30;
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
                                goto __Vlabel31;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__75__inst)
                                    ? 0U : 1U);
                            __Vlabel31: ;
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
                                goto __Vlabel32;
                            }
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__inst)
                                    ? 0U : 1U);
                            __Vlabel32: ;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc 
                            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__76__Vfuncout;
                        if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc) 
                             == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                            goto __Vlabel30;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                            goto __Vlabel30;
                        }
                        if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 0U;
                            goto __Vlabel30;
                        }
                        if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__nc)) 
                             & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__pc)))) {
                            vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 0U;
                            goto __Vlabel30;
                        }
                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__74__Vfuncout = 1U;
                        __Vlabel30: ;
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
                                        goto __Vlabel34;
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
                                            goto __Vlabel35;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__79__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel35: ;
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
                                            goto __Vlabel36;
                                        }
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__inst)
                                                ? 0U
                                                : 1U);
                                        __Vlabel36: ;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc 
                                        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__80__Vfuncout;
                                    if (((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc) 
                                         == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                        goto __Vlabel34;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                        goto __Vlabel34;
                                    }
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 0U;
                                        goto __Vlabel34;
                                    }
                                    if (((0U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__nc)) 
                                         & (1U == (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__pc)))) {
                                        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 0U;
                                        goto __Vlabel34;
                                    }
                                    vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout = 1U;
                                    __Vlabel34: ;
                                }
                            }(), (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__recorded__78__Vfuncout))))) {
                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__Vfuncout 
                    = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__cur;
                goto __Vlabel33;
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
                                    goto __Vlabel37;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__81__inst)
                                        ? 0U : 1U);
                                __Vlabel37: ;
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
                                    goto __Vlabel38;
                                }
                                vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__fclass_of__82__inst)
                                        ? 0U : 1U);
                                __Vlabel38: ;
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
            __Vlabel33: ;
        }
        vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__sfsr_n 
            = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__record__77__Vfuncout;
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_16 
        = (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc 
           == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__take_pc);
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc 
        = vlSelfRef.__Vdly__cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_npc;
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid) 
           & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_pc 
              == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__iu_rst = ((IData)(vlSelfRef.cpu_sim__DOT__rst) 
                                                  | (IData)(vlSelfRef.cpu_sim__DOT__wd_reset));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid 
        = ((IData)((vlSelfRef.cpu_sim__DOT__u_cpu__DOT__ifs 
                    >> 0x00000022U)) & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard)) 
                                        & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending)));
    if (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tagged) {
        cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__v 
            = cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v;
    }
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__alu_tag_trap 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__is_tv) 
           & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_alu__DOT__tag_v));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__cmd_send_abort 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
           & (0x18U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__cmd_send_abort 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
           & (0x18U == (0x38U & (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__wbyte))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ctl_wr) 
                                                & (9U 
                                                   == (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__ptr)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_start 
        = (((((((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_we)) 
                & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__reg_go)) 
               & (3U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__rg_asi))) 
              & (0x00000800U == (0x00000c00U & vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__m_dec[0U]))) 
             & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__probe_done))) 
            & (0U == (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_mmu__DOT__ws))) 
           & (~ ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_d) 
                 | (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__wk_req_i))));
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_have) 
              & (vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_npc 
                 == vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_buf_pc)));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_arriving 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid) 
              & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_17)));
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
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_pending 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_d)) 
           & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__slot_in_buf)) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pend_discard)) 
                 & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__f_pending) 
                    & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__rsp_valid)) 
                       & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT____VdfgRegularize_heca796df_0_17))))));
    cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now 
        = ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_resolved)) 
           & ((IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid) 
              & ((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_trap)) 
                 & (~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_tag_trap)))));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_a__DOT__rst_any 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_a) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
    vlSelfRef.cpu_sim__DOT__u_escc__DOT__chan_b__DOT__rst_any 
        = ((IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__chn_rst_b) 
           | (IData)(vlSelfRef.cpu_sim__DOT__u_escc__DOT__hw_rst));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_go 
        = ((~ (((~ (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_go)) 
                & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_valid)) 
               | (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_hazard))) 
           & (IData)(vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__d_valid));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__annul_slot 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now) 
           & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_annul));
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__redirect 
        = ((IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_ctl_now) 
           & (IData)(cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__e_taken));
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
            goto __Vlabel39;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__28__w)));
        __Vlabel39: ;
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
            goto __Vlabel40;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__29__w)));
        __Vlabel40: ;
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
            goto __Vlabel41;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__30__w)));
        __Vlabel41: ;
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
            goto __Vlabel42;
        }
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__w 
            = (0x0000007fU & (((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__cwp) 
                               << 4U) + ((IData)(__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__r) 
                                         - (IData)(8U))));
        vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__Vfuncout 
            = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__w)));
        __Vlabel42: ;
    }
    vlSelfRef.cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__ra4 
        = vlSelfRef.__Vfunc_cpu_sim__DOT__u_cpu__DOT__u_iu__DOT__u_rf__DOT__phys__31__Vfuncout;
}

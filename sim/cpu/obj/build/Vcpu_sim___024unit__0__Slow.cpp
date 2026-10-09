// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_sim.h for the primary calling header

#include "Vcpu_sim__pch.h"

VL_ATTR_COLD void Vcpu_sim___024unit___ctor_var_reset(Vcpu_sim___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcpu_sim___024unit___ctor_var_reset\n"); );
    Vcpu_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Venumtab_enum_name29.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name29.at(0) = "C_ILLEGAL"s;
    vlSelf->__Venumtab_enum_name29.at(1) = "C_NOP"s;
    vlSelf->__Venumtab_enum_name29.at(2) = "C_SETHI"s;
    vlSelf->__Venumtab_enum_name29.at(3) = "C_BICC"s;
    vlSelf->__Venumtab_enum_name29.at(4) = "C_FBFCC"s;
    vlSelf->__Venumtab_enum_name29.at(5) = "C_CALL"s;
    vlSelf->__Venumtab_enum_name29.at(6) = "C_ALU"s;
    vlSelf->__Venumtab_enum_name29.at(7) = "C_MUL"s;
    vlSelf->__Venumtab_enum_name29.at(8) = "C_DIV"s;
    vlSelf->__Venumtab_enum_name29.at(9) = "C_RDY"s;
    vlSelf->__Venumtab_enum_name29.at(10) = "C_RDPSR"s;
    vlSelf->__Venumtab_enum_name29.at(11) = "C_RDWIM"s;
    vlSelf->__Venumtab_enum_name29.at(12) = "C_RDTBR"s;
    vlSelf->__Venumtab_enum_name29.at(13) = "C_WRY"s;
    vlSelf->__Venumtab_enum_name29.at(14) = "C_WRPSR"s;
    vlSelf->__Venumtab_enum_name29.at(15) = "C_WRWIM"s;
    vlSelf->__Venumtab_enum_name29.at(16) = "C_WRTBR"s;
    vlSelf->__Venumtab_enum_name29.at(17) = "C_FPOP"s;
    vlSelf->__Venumtab_enum_name29.at(18) = "C_JMPL"s;
    vlSelf->__Venumtab_enum_name29.at(19) = "C_RETT"s;
    vlSelf->__Venumtab_enum_name29.at(20) = "C_TICC"s;
    vlSelf->__Venumtab_enum_name29.at(21) = "C_FLUSH"s;
    vlSelf->__Venumtab_enum_name29.at(22) = "C_SAVE"s;
    vlSelf->__Venumtab_enum_name29.at(23) = "C_RESTORE"s;
    vlSelf->__Venumtab_enum_name29.at(24) = "C_LOAD"s;
    vlSelf->__Venumtab_enum_name29.at(25) = "C_STORE"s;
    vlSelf->__Venumtab_enum_name29.at(26) = "C_ATOMIC"s;
    vlSelf->__Venumtab_enum_name29.at(27) = "C_FPLOAD"s;
    vlSelf->__Venumtab_enum_name29.at(28) = "C_FPSTORE"s;
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name79[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name79[0] = "I_IDLE"s;
    vlSelf->__Venumtab_enum_name79[1] = "I_XLAT"s;
    vlSelf->__Venumtab_enum_name79[2] = "I_WALK"s;
    vlSelf->__Venumtab_enum_name79[3] = "I_WALK_WAIT"s;
    vlSelf->__Venumtab_enum_name79[4] = "I_CACHE"s;
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_name80[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name80[0] = "D_IDLE"s;
    vlSelf->__Venumtab_enum_name80[1] = "D_XLAT"s;
    vlSelf->__Venumtab_enum_name80[2] = "D_WALK"s;
    vlSelf->__Venumtab_enum_name80[3] = "D_WALK_WAIT"s;
    vlSelf->__Venumtab_enum_name80[4] = "D_CACHE"s;
    vlSelf->__Venumtab_enum_name80[5] = "D_REG"s;
    vlSelf->__Venumtab_enum_name80[6] = "D_DIAG_I"s;
    vlSelf->__Venumtab_enum_name80[7] = "D_DIAG_D"s;
    vlSelf->__Venumtab_enum_name80[8] = "D_FLUSH_XLAT"s;
    vlSelf->__Venumtab_enum_name80[9] = "D_FLUSH_WALK"s;
    vlSelf->__Venumtab_enum_name80[10] = "D_FLUSH_WAIT"s;
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name73[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name73[0] = "W_IDLE"s;
    vlSelf->__Venumtab_enum_name73[1] = "W_READ"s;
    vlSelf->__Venumtab_enum_name73[2] = "W_WAIT"s;
    vlSelf->__Venumtab_enum_name73[3] = "W_WRITE"s;
    vlSelf->__Venumtab_enum_name73[4] = "W_WRITE_WAIT"s;
    vlSelf->__Venumtab_enum_name73[5] = "W_DONE"s;
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_name65[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name65[0] = "S_IDLE"s;
    vlSelf->__Venumtab_enum_name65[1] = "S_LOOKUP"s;
    vlSelf->__Venumtab_enum_name65[2] = "S_FILL_START"s;
    vlSelf->__Venumtab_enum_name65[3] = "S_FILL"s;
    vlSelf->__Venumtab_enum_name65[4] = "S_WRITE_WAIT"s;
    vlSelf->__Venumtab_enum_name65[5] = "S_SINGLE"s;
    vlSelf->__Venumtab_enum_name65[6] = "S_ATOMIC_RD"s;
    vlSelf->__Venumtab_enum_name65[7] = "S_ATOMIC_WR"s;
    vlSelf->__Venumtab_enum_name65[8] = "S_DONE"s;
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_name81[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name81[0] = "S_IDLE"s;
    vlSelf->__Venumtab_enum_name81[1] = "S_LOOKUP"s;
    vlSelf->__Venumtab_enum_name81[2] = "S_FILL_START"s;
    vlSelf->__Venumtab_enum_name81[3] = "S_FILL"s;
    vlSelf->__Venumtab_enum_name81[4] = "S_WRITE_WAIT"s;
    vlSelf->__Venumtab_enum_name81[5] = "S_SINGLE"s;
    vlSelf->__Venumtab_enum_name81[6] = "S_ATOMIC_RD"s;
    vlSelf->__Venumtab_enum_name81[7] = "S_ATOMIC_WR"s;
    vlSelf->__Venumtab_enum_name81[8] = "S_DONE"s;
}

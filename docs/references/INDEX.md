# SPARCstation 20 core: reference library index

This is the reference library for the rewrite (`docs/VERILOG-PLAN.md` §8).

- **Authoritative:** the datasheets, specifications and Sun documents listed below.
- **Functional reference:** Grabulosaure's TEMLIB "TEM/TS" VHDL (the current `rtl/`, upstream
  `scratch/reference/grabulosaure/ss`) and the emulators (QEMU, MAME, the BSD and Linux drivers). Use them to check
  behaviour, register maps and quirks, never as text to copy.

Local paths below are under `scratch/reference/` (gitignored, local only; see `scratch/README.md`).
Re-fetch them from the source URLs listed here if they are missing.
Treat every downloaded file as untrusted data: nothing in `scratch/reference/` has been built or executed.

Fetched 2026-10-08. Pinned source revisions:

| Tree | Commit |
|---|---|
| QEMU | `f9587d4045c67cd0d8d8bdcd5d0bb5b6b395b63c` |
| MAME | `31e52312c59e4d60d70235118bcbccd220f5232e` |
| NetBSD src | `802400f6437f275628ea0f934d99c967450352aa` |
| OpenBSD src | `896fef95f254ad4a5ff07e37e02f2fac2dabf509` |
| Linux | `6c377d19d4a5116d9bec5203aa3c6c11523e7898` |
| OpenBIOS | `e5ac46dd24e6216c36aa80462af25457e7029440` |
| Grabulosaure/ss | `ef5ef213f6626ea401d53ba055c50fa244ee8836` |
| Grabulosaure/ss_openbios | `6f3c0b7832084fc65adfb2be53b012abc01d01fb` |
| Grabulosaure/lance | `45dfc0236152492b267bb4fab92453e39b84cfc7` |

**Source abbreviations used in the tables:**

| Abbreviation | Base URL |
|---|---|
| BS | `https://bitsavers.org/pdf/sun/sparc/` |
| BSC | `https://bitsavers.org/components/` (bitsavers blocks curl's default user agent; a browser UA works) |
| TL | `https://temlib.org/pub/` (Grabulosaure's own public reference collection; vendor copyrights apply) |
| DM | `https://dogemicrosystems.ca/pub/Sun/docs/E19127-01%20Workstations/` |
| OFW | `https://www.devicetree.org/open-firmware/` (the archived IEEE 1275 working-group site) |

**License column codes:**

| Code | Meaning |
|---|---|
| V | Vendor copyright. A historical document archived for reference; do not redistribute. |
| S08 | Sun's 2008 "Products Rights Notice": released as-is through the OpenSPARC / FOSS hardware wiki, "not prepared for public release". Read it freely; do not redistribute. |
| SI | SPARC International publication, free to download from sparc.org. |
| GPL / LGPL / BSD / MIT / ISC | The open-source license of that source file. |

**RTL column:** the current files in this repo that each reference governs.
The RTL is in `rtl/cpu`, `rtl/sun4m`, `rtl/peri`, `rtl/plomb` and `rtl/mister`.

---

## 1. CPU (integer unit, FPU, SuperSPARC / microSPARC)

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| The SPARC Architecture Manual, Version 8 (SAV080SI9308) | `scratch/reference/cpu/sparcv8.pdf` | https://sparc.org/wp-content/uploads/2014/01/v8.pdf.gz (gunzipped) | 1.1 MB | SI | **Primary ISA spec.** Instructions, traps, PSR/WIM/TBR, ASIs, the memory model (TSO/PSO), the FP chapter, and **Appendix H, the SPARC Reference MMU (SRMMU)** | `iu_pipe5.vhd`, `iu_pack.vhd`, `iu_muldiv.vhd`, `iu_regs_2r1w.vhd`, `asi_pack.vhd`, `fpu_*.vhd`, `mcu_*.vhd` (App. H) |
| The Viking Microprocessor (TI TMS390Z50) User Documentation, 800-4510-02, Nov 1990 | `scratch/reference/cpu/800-4510-02_The_Viking_Microprocessor_TI_TMS390Z50_User_Documentation_Nov1990.pdf` | BS | 20.9 MB | V | SuperSPARC (Viking) IU pipeline, MMU/cache control registers (MCNTL, ASIs), MBus and CC (MXCC) modes, BIST. **This is the closest available stand-in for the SuperSPARC User's Guide.** | `mcu_multi.vhd`, `mcu_multi_ext.vhd`, `mcu_mp.vhd`, `mcu_tw.vhd`, `smpmux.vhd`, `cpu_conf_pack.vhd` |
| STP1020A SuperSPARC data sheet | `scratch/reference/cpu/STP1020A_SuperSPARC_datasheet.pdf` | TL `SparcStation/Hardware/Sparc32/SuperSparc.pdf` | 1.5 MB | V | SuperSPARC pinout, modes, and a summary of the MMU and cache | SS20 build of `mcu_multi*.vhd` |
| STP1021A SuperSPARC-II data sheet | `scratch/reference/cpu/STP1021A_SuperSPARC-II_datasheet.pdf` | TL `.../Sparc32/SuperSPARC2.pdf` | 1.3 MB | V | SuperSPARC-II differences and the STP1091 MXCC system view | as above |
| SuperSPARC II user's guide appendix (STP1021UG) | `scratch/reference/cpu/STP1021UG.pdf` | TL `.../Sparc32/STP1021UG.pdf` | 219 KB | V | SuperSPARC-II IU pipeline, register file, PSR, trap handling | `iu_pipe5.vhd`, `mcu_multi.vhd` |
| STP5022B SuperSPARC MBus module data sheet | `scratch/reference/cpu/STP5022B_SuperSPARC_MBus_module_datasheet.pdf` | TL `.../Sparc32/STP50_DataSheet.pdf` | 1.7 MB | V | SS20 MBus module: SuperSPARC plus STP1090 MXCC, Level-2 MBus | `smpmux.vhd`, `mcu_mp.vhd` |
| The SuperSPARC Microprocessor technical white paper (1992) | `scratch/reference/cpu/supersparcwhitepaper.pdf` | TL `.../Sparc32/supersparcwhitepaper.pdf` | 107 KB | V | An architectural overview of the superscalar issue, caches and MBus | background |
| microSPARC-II User's Manual, Rev 1.1, Jul 1994 (text PDF, 231 pp) | `scratch/reference/cpu/microSPARC-II-UsersManual2.pdf` | TL `.../Sparc32/microSPARC-II-UsersManual2.pdf` | 8.4 MB | S08 | microSPARC-II (SS5) IU, MMU, caches, memory controller and SBus controller. Covers the SS5 build. | `mcu_simple.vhd`, `mcu_tagram.vhd`, `iu_pipe5.vhd` (SS5 config) |
| microSPARC-II User's Manual (scan) | `scratch/reference/cpu/microSPARC-II-UsersManual.pdf` | TL `.../Sparc32/microSPARC-II-UsersManual.pdf` | 68.8 MB | V | Same manual as a scan. **The PDF xref is damaged** and poppler has to rebuild it; use the text version above. | as above |
| STP1012 microSPARC-II data sheet, Jul 1997 | `scratch/reference/cpu/MicroSparcII.pdf` | TL `.../Sparc32/MicroSparcII.pdf` | 192 KB | V | The microSPARC-II summary and its MMU/cache parameters | SS5 config |
| microSPARC-IIep User's Manual, 802-7100-01, Apr 1997 | `scratch/reference/cpu/802-7100-01_microSPARC-IIep_Users_Manual.pdf` | https://www.ece.lsu.edu/ee4720/microsparc-IIep.pdf | 972 KB | V | microSPARC-II core details (IIep is a PCI variant). The `msiiepreg.h` / `timer_msiiep.c` files are the matching driver side. | SS5 config |
| SPARCclassic Engine OEM Tech. Manual, Part 2: microSPARC reference (App. K, L) | `scratch/reference/cpu/801-3137-10_SPARCclassic_Engine_OEM_Technical_Manual_Part_Two_microSPARC_Reference_Apr1993.pdf` | BS | 22.3 MB | V | microSPARC-I (TMS390S10) IU, MMU and caches. The ancestor of microSPARC-II. | `mcu_simple.vhd` |
| IEEE 1754 implementation characteristics (SPARC Intl, 1999) | `scratch/reference/cpu/v8.ieee.p1754.pdf` | TL `SparcStation/Standards/v8.ieee.p1754.pdf` | 72 KB | SI | Implementation-dependent V8 choices (IEEE 1754 = SPARC V8) | `iu_pack.vhd`, `fpu_pack.vhd` |
| SPARC-V8E embedded supplement v1.0 | `scratch/reference/cpu/v8e.pdf` | TL `SparcStation/Standards/v8e.pdf` | 186 KB | SI | Optional V8E instructions (SMUL/UMAC etc.). Useful for knowing what *not* to implement. | `iu_pipe5.vhd` |
| SPARC Compliance Definition 2.4.1 (ABI) | `scratch/reference/cpu/SCD.2.4.1.pdf` | https://sparc.org/wp-content/uploads/2014/01/SCD.2.4.1.pdf.gz (gunzipped) | 1.4 MB | SI | The SPARC V8/V9 ABI (calling convention, ELF). Optional; for test software. | tests/ |

### 1a. FPU / IEEE 754 (`scratch/reference/cpu/fpu/`, all from TL `fpu/`)

| Title | Local path | Size | Lic. | Notes | RTL |
|---|---|---|---|---|---|
| IEEE 754r base document draft | `scratch/reference/cpu/fpu/754.pdf` | 50 KB | draft | IEEE 754-1985 is not freely available. This draft restates its technical content. | `fpu_calc.vhd`, `fpu_div.vhd`, `fpu_mul.vhd`, `fpu_pack.vhd` |
| IEEE 754 tutorial notes | `scratch/reference/cpu/fpu/ieee754.pdf` | 685 KB | V | Formats, rounding, exceptions | same |
| Goldberg, "What Every Computer Scientist Should Know About FP" (Sun reprint) | `scratch/reference/cpu/fpu/goldberg.pdf` | 256 KB | V | Background; includes Sun's SPARC appendix | same |
| Sun Numerical Computation Guide: "SPARC Behavior and Implementation" | `scratch/reference/cpu/fpu/SPARC_Behavior_and_Implementation.htm` | 45 KB | V | SPARC FP trap behaviour, FSR, the unimplemented-FPop cases that kernels emulate | `fpu_simple.vhd`, `fpu_multi.vhd` |
| Paranoia (Kahan) and a reference output | `scratch/reference/cpu/fpu/paranoia.c`, `paranoia.out` | 58 + 7 KB | PD | FP correctness test (validation suite) | tests |
| IeeeCC754 test suite | `scratch/reference/cpu/fpu/IeeeCC754.tgz` | 655 KB | research | IEEE compliance vectors | tests |
| Berkeley TestFloat-2a / SoftFloat-2b | `scratch/reference/cpu/fpu/TestFloat-2a.zip`, `SoftFloat-2b.zip` | 99 + 112 KB | BSD-like (Hauser) | A bit-exact reference model and test generator | tests, sim |
| UCBTEST (Sun/Berkeley FP tests) | `scratch/reference/cpu/fpu/ucbtest.tgz` | 998 KB | research | libm/FP tests | tests |
| systemBugs.txt | `scratch/reference/cpu/fpu/systemBugs.txt` | 16 KB | ? | Known FP bugs in various systems | — |

---

## 2. MMU / cache / bus

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| **SPARC Reference MMU**: Appendix H of the V8 manual | `scratch/reference/cpu/sparcv8.pdf` (App. H) | see §1 | — | SI | PTD/PTE format, context table, table walk, fault status/address registers, ASI 0x3/0x4 probe and flush | `mcu_tw.vhd`, `mcu_simple.vhd`, `mcu_multi.vhd`, `mcu_pack.vhd`, `ts_iommu.vhd` (shares the PTE flavour) |
| SPARC MBus Interface Specification, Rev 1.2, Apr 1991 | `scratch/reference/mmu-cache-bus/SPARC_MBus_Interface_Specification_Rev_1.2_199104.pdf` | BS | 3.0 MB | V | MBus Level 1/2 transactions, the coherency (MOESI-style) protocol, arbitration, the module ID / address map | `smpmux.vhd`, `mcu_mp.vhd`, `mcu_multi_ext.vhd`, `plomb_*.vhd` (the internal bus replaces MBus) |
| MBus Interface Spec / MBus Module Design Guide (SPARC Intl, 1997) | `scratch/reference/mmu-cache-bus/MBUS.pdf` | TL `SparcStation/Standards/MBUS.pdf` | 597 KB | SI | A later edition of the MBus spec plus the module design guide | as above |
| SBus Specification B.0, 800-5922-10, Dec 1990 | `scratch/reference/mmu-cache-bus/800-5922-10_SBus_Specification_B.0_Dec90.pdf` | BS | 6.6 MB | V | SBus cycles, DVMA, interrupts, slot address map, FCode PROM requirements (an early form of IEEE 1496) | `ts_iommu.vhd`, `ts_dmaux.vhd`, `ts_decode.vhd`, `ts_fcode_pack.vhd` |
| STP2000 Master I/O (MACIO) data sheet | `scratch/reference/mmu-cache-bus/stp2000.pdf` | TL `.../Chips/stp2000.pdf` | 164 KB | V | MACIO: DMA2, ESP, LANCE, parallel port | `ts_dmaux.vhd`, `ts_esp.vhd`, `ts_lance.vhd` |
| STP2001 Slave I/O (SLAVIO) data sheet | `scratch/reference/mmu-cache-bus/stp2001.pdf` | TL `.../Chips/stp2001.pdf` | 237 KB | V | SLAVIO: SCC, keyboard/mouse, floppy, timers, interrupts, EPROM and NVRAM interface | `ts_sport.vhd`, `ts_fdc.vhd`, `ts_timer.vhd`, `ts_inter.vhd`, `ts_io.vhd` |
| SuperSPARC MXCC (TMS390Z55 / STP1090/1091) | — | **not found** (see Gaps) | — | — | Use the Viking doc's CC-mode chapter, the STP1021A/5022B data sheets and `scratch/reference/emulators/linux/arch/sparc/include/asm/mxcc.h` | `mcu_multi_ext.vhd` |

---

## 3. sun4m chipset

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| **Sun-4M System Architecture**, spec 950-1373-01 Rev 50 | `scratch/reference/chipset/Sun4M_SystemArchitecture_edited2.pdf` | TL `SparcStation/Hardware/Sun4M_SystemArchitecture_edited2.pdf` | 786 KB | S08 | **Primary sun4m spec.** The physical address map, the IOMMU, interrupt controller (processor and system), counter/timers, ECC memory, MSI/MBus-SBus, Aux registers, the reset model | `ts_iommu.vhd`, `ts_inter.vhd`, `ts_timer.vhd`, `ts_decode.vhd`, `ts_io.vhd`, `ts_dmaux.vhd` (AuxIO), `ts_core.vhd` |
| sun4m Architecture Porting Guide (H. Stern) | `scratch/reference/chipset/sun4m-guide.pdf` | TL `SparcStation/Hardware/sun4m-guide.pdf` | 36 KB | V | A short software-view overview of sun4m vs sun4c | background |
| SLAVIO-1 (NCR89C105) chip specification | `scratch/reference/chipset/slavio-1_NCR89C105.pdf` | TL `.../Chips/slavio-1_NCR89C105.pdf` | 28.7 MB | S08 | **SLAVIO registers:** interrupt controller, counters/timers, SCC wrapper, keyboard/mouse, floppy (82077 core), EPROM/NVRAM decode, Aux1/Aux2, system control/reset | `ts_inter.vhd`, `ts_timer.vhd`, `ts_sport.vhd`, `ts_kms.vhd`, `ts_fdc.vhd`, `ts_io.vhd`, `ts_rtc.vhd`, `ts_dmaux.vhd` |
| NCR89C105 text extract | `scratch/reference/chipset/NCR89C105.txt` | TL `.../Chips/NCR89C105.txt` | 71 KB | S08 | Greppable text of the SLAVIO spec | same |
| MACIO-1 (NCR89C100) chip specification | `scratch/reference/chipset/macio-1_NCR89C100.pdf` | TL `.../Chips/macio-1_NCR89C100.pdf` | 23.3 MB | S08 | **MACIO:** the SBus interface, DMA2 core, ESP (53C9x) core, LANCE core and parallel port | `ts_dmaux.vhd`, `ts_esp.vhd`, `ts_lance.vhd` |
| NCR89C100 text extract | `scratch/reference/chipset/NCR89C100.txt` | TL `.../Chips/NCR89C100.txt` | 31 KB | S08 | Greppable text | same |
| **DMA2 core** specification (text) | `scratch/reference/chipset/dma2.txt` | TL `.../Chips/dma2.txt` | 147 KB | S08 | **DMA2 / DMA+ registers** (D_CSR, D_ADDR, D_BCNT, E_CSR, burst modes, the ENET cache, the SCSI FIFO, the parallel port). Compatible with L64854. | **`ts_dmaux.vhd`** (plus the DMA side of `ts_esp.vhd` and `ts_lance.vhd`) |
| LSI L64853A SBus DMA (DMA+) data sheet | `scratch/reference/chipset/L64853A.pdf` | TL `.../Chips/L64853A.pdf` | 10.1 MB | V | The DMA+ ancestor of DMA2 (default compatibility mode) | `ts_dmaux.vhd` |
| LSI L64853 SBus DMA Controller Technical Manual, 1989 | `scratch/reference/chipset/LSI_Logic_L64853_SBus_DMA_Controller_Technical_Manual_1989.pdf` | BSC `lsiLogic/sparc/` | 3.9 MB | V | The original SBus DMA (sun4c) | `ts_dmaux.vhd` |
| SPARCclassic OEM Tech. Manual, Part 3: I/O chipset (App. M) | `scratch/reference/chipset/801-3137-10_SPARCclassic_Engine_OEM_Technical_Manual_Part_Three_IO_Chipset_Apr1993.pdf` | BS | 31.6 MB | V | The sun4m (Classic/LX) I/O chipset reference: MACIO/SLAVIO-era DMA, ESP, LANCE, SCC, interrupt and timer registers. A good scan cross-check for the S08 specs. | `ts_*.vhd` |
| SPARCclassic OEM Tech. Manual, Part 1 | `scratch/reference/chipset/801-3137-10_SPARCclassic_Engine_OEM_Technical_Manual_Part_One_Apr1993.pdf` | BS | 11.8 MB | V | sun4m board-level address map, boot, OBP environment | `ts_decode.vhd`, `ts_core.vhd` |
| SPARCstation 20 Service Manual, 801-6189-12 | `scratch/reference/chipset/801-6189-12_SPARCstation_20_Service_Manual.pdf` | DM `SPARCstation%2020%20Workstation/...` (also TL `SparcStation/Manuals/SS20_801-6189-12.pdf`) | 2.8 MB | V | SS20 configuration: slots, MBus modules, memory, jumpers, NVRAM, POST/OBP diagnostics | `ss_core.vhd`, `nvram_sd.vhd` |
| SS10SX / SS20 System Configuration Guide, 806-2222-10 | `scratch/reference/chipset/806-2222-10_SS10SX_SS20_System_Configuration_Guide.pdf` | DM `SPARCstation%2010%20Workstation/...` | 248 KB | V | Valid CPU-module, memory and SBus combinations | `cpu_conf_pack.vhd` |
| SPARCstation 5 Service Manual, 801-6396-11 | `scratch/reference/chipset/SS5_801-6396-11.pdf` | TL `SparcStation/Manuals/SS5_801-6396-11.pdf` | 2.2 MB | V | SS5 configuration (the SS5 build mode) | SS5 config |
| Sun-4D Architecture, Jun 1992 | `scratch/reference/chipset/Sun4D_Architecture_Jun1992.pdf` | BS | 18.4 MB | V | sun4d (not sun4m). Useful only for its XBus/MBus SMP background. | — |

---

## 4. SCSI

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| NCR 53C90A/53C90B Advanced SCSI Controller, 1991 | `scratch/reference/scsi/53C90A-53C90B_Advanced_SCSI_Controller_1991.pdf` | BSC `ncr_symbios/scsi/53C90/` | 4.2 MB | V | **The ESP register set and command set** (the 53C90 family) | **`ts_esp.vhd`**, `dl_scsi.vhd`, `scsi_targets.vhd` |
| NCR 53C90 A/B (data manual, alternate scan) | `scratch/reference/scsi/NCR53C90ab.pdf` | BSC `ncr_symbios/scsi/53C90/NCR53C90ab.pdf` | 3.2 MB | V | same | same |
| NCR 53C94/95/96 Data Sheet, Feb 1990 | `scratch/reference/scsi/NCR_53C94_53C95_53C96_Data_Sheet_Feb90.pdf` | BSC `ncr_symbios/scsi/53C94/` | 2.9 MB | V | ESP-236 class: Config 2/3, the FIFO, DMA handshake | `ts_esp.vhd` |
| NCR 53CF94/96-2 Fast SCSI Data Manual, Apr 1993 | `scratch/reference/scsi/53CF94_96-2_Fast_SCSI_Controller_Data_Manual_Apr1993.pdf` | BSC `ncr_symbios/scsi/53CF94/` | 7.8 MB | V | FAS216/236-class Fast SCSI, Config 3 and the chip ID (the ESP version probed by drivers) | `ts_esp.vhd` |
| NCR 53CF9x-2 (alternate scan) | `scratch/reference/scsi/NCR53CF9x-2.pdf` | BSC `ncr_symbios/scsi/53CF94/NCR53CF9x-2.pdf` | 8.5 MB | V | same | same |
| AMD Am53C94/96 data sheet | `scratch/reference/scsi/am53c94.pdf` | TL `.../Chips/am53c94.pdf` | 437 KB | V | Second source for the 53C94 | `ts_esp.vhd` |
| Emulex FAS216 data sheet | `scratch/reference/scsi/Emulex_FAS216.pdf` | TL `.../Chips/Emulex%20FAS216.pdf` | 1.1 MB | V | FAS216 (ESP family). Also the FAS236/366 lineage used in Sun ESP/FAS. | `ts_esp.vhd` |
| Emulex ESP SCSI processor data sheet | `scratch/reference/scsi/Emulex_ESP_SCSI_processor.pdf` | TL `.../Chips/Emulex%20scsi%20processor-3.pdf` | 1.9 MB | V | The original Emulex ESP | `ts_esp.vhd` |
| ANSI X3.131-1994 SCSI-2 (published standard, scan) | `scratch/reference/scsi/SCSI-2_Standard_1994.pdf` | BSC `ncr_symbios/scsi/SCSI-2_Standard_1994.pdf` | 34.5 MB | V (ANSI) | **SCSI-2 phases, messages and the command sets** (disk, CD-ROM group 1/2). Used instead of draft rev 10L. | `scsi_targets.vhd`, `rtl/mister` SCSI HPS side |

---

## 5. Ethernet

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| Am7990 LANCE Technical Manual, 1986 | `scratch/reference/ethernet/1986_Am7990_Local_Area_Network_Controller_LANCE_Technical_Manual.pdf` | BSC `amd/Am7990/` | 3.6 MB | V | **The LANCE register set (CSR0-3, RAP/RDP), init block, descriptor rings and their semantics** | **`ts_lance.vhd`**, `ts_lance.vhs`, `asm_lance.rb`, `eth_hps.vhd` |
| Am7990 data sheet | `scratch/reference/ethernet/Am7990.pdf` | BSC `amd/Am7990/Am7990.pdf` | 1.7 MB | V | same, data-sheet form | same |
| Am7990 Reference Guide 08496A, 1986 | `scratch/reference/ethernet/08496A_Am7990_Reference_Guide_Aug1986.pdf` | BSC `amd/Am7990/` | 3.1 MB | V | Software and design considerations | same |
| Am79C90 C-LANCE data sheet (bitsavers) | `scratch/reference/ethernet/Am79c90.pdf` | BSC `amd/Am7990/Am79c90.pdf` | 431 KB | V | The CMOS LANCE (NCR92C990 in MACIO is compatible) | same |
| Am79C90 C-LANCE data sheet (temlib copy) | `scratch/reference/ethernet/LANCE.pdf` | TL `.../Chips/LANCE.pdf` | 437 KB | V | Same document, a different file | same |
| STP2002 FEPS user's guide, 1996 | `scratch/reference/ethernet/STP2002QFP-FEPs_UG.pdf` | TL `.../Chips/STP2002QFP-FEPs_UG.pdf` | 493 KB | V | Later Sun SBus Fast Ethernet / Parallel / SCSI ASIC. Background only. | — |

---

## 6. Serial, keyboard, mouse

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| AMD Am8530H/Am85C30 SCC Technical Manual, 1992 (text PDF) | `scratch/reference/serial-kbd-mouse/85c30.pdf` | TL `.../Chips/85c30.pdf` | 799 KB | V | **SCC WR0-WR15 / RR0-RR15, interrupt vectoring, async mode, BRG** | **`ts_sport.vhd`**, `ts_aciamux.vhd`, `ts_kms.vhd` |
| Am85C30 data sheet | `scratch/reference/serial-kbd-mouse/85c30-amd.pdf` | TL `.../Chips/85c30-amd.pdf` | 528 KB | V | Timing and pinout | same |
| Zilog SCC/ESCC User's Manual (Z8530/Z85C30/Z85230/Z85233) | `scratch/reference/serial-kbd-mouse/z85233.pdf` | TL `.../Chips/z85233.pdf` | 3.1 MB | V | The Zilog-authored SCC programming manual | same |
| Zilog PS0117 Z80C30/Z85C30 Product Specification | `scratch/reference/serial-kbd-mouse/Zilog_PS0117_Z80C30_Z85C30_Product_Spec.pdf` | TL `.../Chips/ps0117.pdf` | 5.0 MB | V | Current Zilog data sheet | same |
| SPARC Keyboard Specification, Version 1 (SPARC Intl) | `scratch/reference/serial-kbd-mouse/SPARC_Keyboard_Specification_Ver_1_1999.pdf` | BS | 163 KB | SI | **Sun Type-5 keyboard serial protocol:** 1200 baud, commands (reset/bell/click/LED/layout), responses, key codes | **`ts_sunkb.vhd`**, `ts_ps2sun.vhd`, `ts_beep.vhd` |
| Sun Type-5c keyboard code table (Grabulosaure's chart) | `scratch/reference/serial-kbd-mouse/keyboard.pdf` | TL `sun/keyboard.pdf` | 1.8 MB | ? | The power-up/reset sequence and a key-code layout chart | `ts_ps2sun.vhd` |
| Sun mouse protocol | — | no standalone doc; see `scratch/reference/emulators/netbsd/sys/dev/sun/sunms.c`, `ms.c` and `scratch/reference/emulators/mame/src/devices/bus/sunmouse/hlemouse.cpp` | — | BSD | The 5-byte Mouse Systems-style protocol at 1200 baud | `ts_ps2sun.vhd` (mouse side), `ts_kms.vhd` |

---

## 7. RTC / NVRAM / IDPROM

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| ST M48T08/M48T08Y/M48T18 TIMEKEEPER SRAM, Doc 2411 | `scratch/reference/rtc-nvram/m48t08.pdf` | TL `.../Chips/m48t08.pdf` | 513 KB | V | **The clock registers at 0x1FF8-0x1FFF, the W/R/stop bits, calibration** | **`ts_rtc.vhd`**, `iram_rtc.vhd`, `nvram_sd.vhd` |
| ST M48T02/M48T12 TIMEKEEPER SRAM | `scratch/reference/rtc-nvram/m48t02.pdf` | TL `.../Chips/m48t02.pdf` | 200 KB | V | The 2 KB part (sun4c-era) | `ts_rtc.vhd` |
| ST AN923, TIMEKEEPER and Y2K | `scratch/reference/rtc-nvram/AN_TimeKeeper.pdf` | TL `.../Chips/AN%20TimeKeeper.pdf` | 20 KB | V | Century handling | `ts_rtc.vhd` |
| Sun IDPROM notes (bitsavers, one handwritten page) | `scratch/reference/rtc-nvram/IDPROMS.pdf` | https://bitsavers.org/pdf/sun/IDPROMS.pdf | 44 KB | V | Historical machine-type bytes only. For the real format see `scratch/reference/emulators/linux/arch/sparc/include/asm/idprom.h` and the OpenBIOS sources. | `iram_rtc.vhd` (IDPROM at 0x1FD8) |

---

## 8. Audio

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| Crystal CS4231A data sheet | `scratch/reference/audio/CS4231A.pdf` | BSC `crystalSemiconductor/_dataSheets/CS4231A.pdf` | 2.5 MB | V | **Indirect registers I0-I31, mode 2, the capture/playback formats** | **`ts_cs4231a.vhd`**, `ts_fcode_cs4231_pack.vhd` |
| APC DMA (SS5/SS20 "SUNW,CS4231" APC) | — | no Sun spec found; see `scratch/reference/emulators/netbsd/sys/dev/ic/apcdmareg.h`, `scratch/reference/emulators/netbsd/sys/dev/sbus/cs4231_sbus.c`, `scratch/reference/emulators/openbsd/sys/dev/sbus/cs4231.c`, `scratch/reference/emulators/linux/sound/sparc/cs4231.c` | — | BSD / ISC / GPL | APC CSR / CVA / CC / CNVA / CNC registers and pipelining | `ts_cs4231a.vhd` |

---

## 9. Video

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| Brooktree 1991 Product Databook (includes **Bt458**, Bt459, Bt463, Bt468) | `scratch/reference/video/1991_Brooktree_Product_Databook.pdf` | BSC `brooktree/_dataBooks/` | 50.6 MB | V | **The Bt458 RAMDAC used by TCX (8-bit) and CG6:** address/colour-map/overlay/control registers | **`ts_tcx.vhd`** (DAC side), `vid.vhd` |
| LSI L64845 SGX SBus Graphics Accelerator Technical Manual, 1992 | `scratch/reference/video/M14015_L64845_SGX_SBus_Graphics_Accelerator_Technical_Manual_1992.pdf` | BSC `lsiLogic/sparc/GX/` | 6.4 MB | V | CG6 / GX (FBC, TEC, THC). TCX reuses a THC-like block. | `ts_tcx.vhd` (THC regs) |
| Sun GX FBC spec, 1988 | `scratch/reference/video/Sun_GX_FBC_Jan1988.pdf` | BSC `lsiLogic/sparc/GX/` | 2.2 MB | V | The GX framebuffer controller (an accelerator model for TCX blit/stip) | `ts_tcx.vhd` |
| Sun GX TEC spec, 1988 | `scratch/reference/video/Sun_GX_TEC_Jan1988.pdf` | BSC `lsiLogic/sparc/GX/` | 1.6 MB | V | The GX transform engine | — |
| TCX / S24 register maps | — | no Sun doc found; see `scratch/reference/emulators/netbsd/sys/dev/sbus/tcxreg.h`, `tcx.c`, `scratch/reference/emulators/qemu/hw/display/tcx.c`, `scratch/reference/emulators/linux/drivers/video/fbdev/tcx.c` | — | BSD / MIT / GPL | TCX THC/TEC/DHC/ALT/blit/stip space. Notes that the S24 uses an AT&T 20C567 DAC. | `ts_tcx.vhd`, `ts_fcode_pack.vhd` |
| CG3 / CG6 register maps | — | `scratch/reference/emulators/qemu/hw/display/cg3.c`, `scratch/reference/emulators/mame/src/devices/bus/sbus/cgthree.cpp`, `cgsix.cpp`, `scratch/reference/emulators/netbsd/sys/dev/sun/cgthreereg.h`, `cgsixreg.h`, `btreg.h` | — | MIT / BSD | An alternative framebuffer target | — |

---

## 10. Floppy

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| Intel 82077AA CHMOS Single-Chip FDC, 290166-007 | `scratch/reference/floppy/290166-007_82077AA_Floppy_Controller_Datasheet.pdf` | https://mirror.cs.msu.ru/oldlinux.org/Linux.old/study/hardware/Floppy/82077AA_FloppyControllerDatasheet.pdf | 586 KB | V | **SRA/SRB/DOR/TDR/MSR/DSR/FIFO/DIR/CCR, the command set, PS/2 vs AT modes** (the SLAVIO FDC core) | **`ts_fdc.vhd`** |
| Intel 82077SL data sheet, 290410-001 | `scratch/reference/floppy/290410-001_82077SL_Floppy_Disk_Controller_May91.pdf` | BSC `intel/_dataSheets/` | 4.4 MB | V | The power-managed variant | `ts_fdc.vhd` |
| Intel 82078 data sheet, Jan 1994 | `scratch/reference/floppy/82078_CHMOS_Single-Chip_Floppy_Disk_Controller_Jan94.pdf` | BSC `intel/_dataSheets/` | 7.5 MB | V | The successor, with a fuller command-set description | `ts_fdc.vhd` |

---

## 11. Firmware (OpenBoot / IEEE 1275 / OpenBIOS)

| Title | Local path | Source | Size | Lic. | Authoritative for | RTL |
|---|---|---|---|---|---|---|
| IEEE 1275.1 SPARC binding, draft 14a | `scratch/reference/firmware/IEEE1275.1_SPARC_binding_d14a.ps` | OFW `bindings/sparc/d14a/12751d1a.ps` | 174 KB | draft | The SPARC client interface and properties | `bios/`, `ts_fcode_pack.vhd` |
| IEEE 1275.2 SBus binding, draft 14a | `scratch/reference/firmware/IEEE1275.2_SBus_binding_d14a.ps` | OFW `bindings/sbus/d14a/12752d1a.ps` | 107 KB | draft | SBus FCode PROM probing, `reg`/`intr` properties | `ts_fcode_pack.vhd`, `ts_fcode_cs4231_pack.vhd` |
| IEEE 1275 core errata, draft 4 | `scratch/reference/firmware/IEEE1275.7_core_errata_d4.ps` | OFW `bindings/errata/12757d4.ps` | 527 KB | draft | Corrections to the core standard | — |
| OF Device Support Extensions 1.0a | `scratch/reference/firmware/OF_Device_Support_Extensions_1.0a.ps` | OFW `practice/devicex/dse1_0a.ps` | 207 KB | WG | Network, RTC, keyboard and sound device types | — |
| OF Generic Names 1.4a | `scratch/reference/firmware/OF_Generic_Names_v14a.ps` | OFW `practice/gnames/` | 118 KB | WG | Node naming | — |
| OF SCSI-3 SPI binding 1.0 | `scratch/reference/firmware/OF_SCSI3_SPI_Binding_1.0.ps` | OFW `practice/spi/` | 95 KB | WG | SCSI node properties | — |
| OF 8-bit graphics practice, d1.2 | `scratch/reference/firmware/OF_Graphics_Practice_d1_2.pdf` | OFW `practice/graphics/` | 21 KB | WG | Framebuffer `display` package | `ts_fcode_pack.vhd` |
| OF Interrupt Mapping 0.9d | `scratch/reference/firmware/OF_Interrupt_Mapping_0.9d.pdf` | OFW `practice/imap/` | 36 KB | WG | `interrupt-map` | — |
| OF recommended-practices index (HTML) | `scratch/reference/firmware/OF_recommended_practices_index.html` | OFW `practice/` | 12 KB | WG | Index of further practices | — |
| OpenBoot 2.x Command Reference, 802-3241-10 | `scratch/reference/firmware/OpenBOOT_2.x.pdf` | TL `SparcStation/Manuals/OpenBOOT%202.x.pdf` | 350 KB | V | The SS20 OBP (2.x) user interface and NVRAM variables | `nvram_sd.vhd`, `iram_rtc.vhd` |
| OpenBoot 4.x Command Reference | `scratch/reference/firmware/OpenBOOT_4.x.pdf` | TL `SparcStation/Manuals/OpenBOOT%204.x.pdf` | 836 KB | V | Later OBP; Forth words | — |
| OpenBIOS upstream README and COPYING | `scratch/reference/firmware/openbios-upstream/` | https://github.com/openbios/openbios | 22 KB | GPL-2.0 | Background on OpenBIOS | `bios/` |
| Grabulosaure's patched OpenBIOS (docs only are relevant) | `scratch/reference/grabulosaure/ss_openbios/howto.txt`, `ss_openbios/openbios/Documentation/` | §13 | — | GPL-2.0 | How the core's `boot.rom` is built (`tacus-sparc32` arch) | `bios/` |

---

## 12. Emulators and OS sources (functional references)

All of these are individual raw files fetched at the pinned commits. No repository was cloned.

### QEMU: `scratch/reference/emulators/qemu/` (40 files, 895 KB)
Source: `https://raw.githubusercontent.com/qemu/qemu/<commit>/<path>`. Device models are mostly MIT; `target/sparc` is LGPL-2.1+.
The QEMU `LICENSE` and `COPYING` files are included.

| File | Maps to |
|---|---|
| `hw/sparc/sun4m.c` | Machine map and IRQ wiring: SS5/SS10/SS20 address maps, NVRAM/IDPROM layout. Maps to `ts_decode.vhd`, `ts_core.vhd`, `iram_rtc.vhd`. |
| `hw/sparc/sun4m_iommu.c`, `include/hw/sparc/sun4m_iommu.h` | `ts_iommu.vhd` |
| `hw/intc/slavio_intctl.c` | `ts_inter.vhd` |
| `hw/timer/slavio_timer.c` | `ts_timer.vhd` |
| `hw/misc/slavio_misc.c` | Aux1/Aux2, system control, modem, LED, power. Maps to `ts_io.vhd`, `ts_dmaux.vhd`. |
| `hw/misc/eccmemctl.c` | The SS10/SS20 ECC memory controller (no RTL equivalent; see Gaps) |
| `hw/dma/sparc32_dma.c`, `include/hw/sparc/sparc32_dma.h` | `ts_dmaux.vhd` |
| `hw/scsi/esp.c`, `include/hw/scsi/esp.h` | `ts_esp.vhd` |
| `hw/net/lance.c`, `hw/net/pcnet.c`, `hw/net/pcnet.h` | `ts_lance.vhd` |
| `hw/char/escc.c`, `include/hw/char/escc.h` | `ts_sport.vhd`, plus the Sun keyboard/mouse emulation inside escc.c (`ts_sunkb.vhd`) |
| `hw/rtc/m48t59.c`, `hw/rtc/m48t59-internal.h` | `ts_rtc.vhd` |
| `hw/display/tcx.c` | `ts_tcx.vhd` |
| `hw/display/cg3.c` | alternative framebuffer |
| `hw/block/fdc.c`, `fdc-sysbus.c`, `fdc-internal.h` | `ts_fdc.vhd` (`sun4m` "SUNW,fdtwo" variant) |
| `hw/audio/cs4231.c` | `ts_cs4231a.vhd`. **This is only a register stub in QEMU.** |
| `hw/nvram/fw_cfg.c`, `hw/sparc/trace-events` | Firmware config and trace points |
| `target/sparc/cpu.c`, `cpu.h` | CPU models (TI SuperSPARC II = TMS390Z55 IU ID, Fujitsu MB86904 = microSPARC-II, MMU IDs). Maps to `cpu_conf_pack.vhd`. |
| `target/sparc/translate.c`, `insns.decode` | IU semantics: `iu_pipe5.vhd` |
| `target/sparc/ldst_helper.c`, `asi.h` | ASI decoding and MMU/cache ASIs: `asi_pack.vhd`, `mcu_*.vhd` |
| `target/sparc/mmu_helper.c` | SRMMU table walk: `mcu_tw.vhd` |
| `target/sparc/fop_helper.c` | FPU ops and FSR: `fpu_*.vhd` |
| `target/sparc/helper.c`, `int32_helper.c`, `win_helper.c` | Traps, interrupts, register windows: `iu_pipe5.vhd` |
| `docs/system/target-sparc.rst` | QEMU sparc32 machine notes |

### MAME: `scratch/reference/emulators/mame/` (27 files, 773 KB, BSD-3-Clause; `COPYING` included)
Source: `https://raw.githubusercontent.com/mamedev/mame/<commit>/<path>`.

| File | Maps to |
|---|---|
| `src/mame/sun/sun4.cpp` | The sun4/sun4c driver. **MAME has no sun4m driver.** |
| `src/devices/cpu/sparc/{sparc.cpp,sparc.h,sparcdefs.h,sparcdasm.cpp,sparc_intf.h}` | A SPARC V7/V8 interpreter (cycle-ish). Cross-check for `iu_pipe5.vhd` and `disas_pack.vhd`. |
| `src/devices/machine/ncr53c90.{cpp,h}` | `ts_esp.vhd` (an independent ESP model) |
| `src/devices/machine/am79c90.{cpp,h}` | `ts_lance.vhd` |
| `src/devices/machine/z80scc.{cpp,h}` | `ts_sport.vhd` |
| `src/devices/machine/timekpr.{cpp,h}` | `ts_rtc.vhd` (M48T02/08) |
| `src/devices/machine/upd765.cpp` | `ts_fdc.vhd` (includes an 82077AA model) |
| `src/devices/machine/sun4c_mmu.{cpp,h}` | The sun4c MMU (not SRMMU), for contrast |
| `src/devices/bus/sbus/{sbus,cgthree,cgsix}.*` | The SBus slot model and framebuffers |
| `src/devices/bus/sunkbd/hlekbd.*`, `src/devices/bus/sunmouse/hlemouse.*` | The Sun keyboard and mouse protocol: `ts_sunkb.vhd`, `ts_ps2sun.vhd` |

### NetBSD: `scratch/reference/emulators/netbsd/sys/...` (58 files, 844 KB, BSD)
Source: `https://raw.githubusercontent.com/NetBSD/src/<commit>/<path>`.

| Files | Maps to |
|---|---|
| `arch/sparc/include/ctlreg.h`, `pte.h` | ASIs, SRMMU control registers, SuperSPARC/microSPARC MCNTL bits: `asi_pack.vhd`, `mcu_*.vhd` |
| `arch/sparc/sparc/iommureg.h`, `iommu.c` | `ts_iommu.vhd` |
| `arch/sparc/sparc/intreg.h`, `intr.c` | `ts_inter.vhd` |
| `arch/sparc/sparc/timerreg.h`, `timer_sun4m.c`, `timer_msiiep.c`, `clock.c` | `ts_timer.vhd` |
| `arch/sparc/sparc/auxreg.h` | AuxIO: `ts_dmaux.vhd`, `ts_io.vhd` |
| `arch/sparc/sparc/memreg.h`, `cache.h`, `cpu.c`, `cpuvar.h`, `asm.h`, `vaddrs.h`, `autoconf.c`, `msiiepreg.h` | CPU/cache identification, memory-error registers, how a real OS drives the MMU and caches |
| `arch/sparc/dev/fdreg.h`, `fd.c` | `ts_fdc.vhd` |
| `arch/sparc/dev/obio.c`, `sbusreg.h`, `kbd_pckbport.c` | obio/SBus attachment |
| `arch/sparc/include/eeprom.h`, `oldmon.h`, `dev/sun/eeprom.h` | NVRAM/eeprom layout |
| `dev/ic/ncr53c9xreg.h`, `ncr53c9x.c`, `dev/sbus/esp_sbus.c` | `ts_esp.vhd` |
| `dev/ic/lsi64854reg.h`, `lsi64854.c`, `dev/sbus/dma_sbus.c` | DMA2: `ts_dmaux.vhd` |
| `dev/ic/lancereg.h`, `am7990reg.h`, `dev/sbus/be.c`, `qec.c` | `ts_lance.vhd` |
| `dev/ic/z8530reg.h` | `ts_sport.vhd` |
| `dev/ic/mk48txxreg.h` | `ts_rtc.vhd` |
| `dev/ic/cs4231reg.h`, `ad1848reg.h`, `apcdmareg.h`, `dev/sbus/cs4231_sbus.c` | `ts_cs4231a.vhd` |
| `dev/sbus/tcxreg.h`, `tcx.c` | `ts_tcx.vhd` |
| `dev/sun/cgthreereg.h`, `cgsixreg.h`, `bwtworeg.h`, `btreg.h`, `fbio.h` | Framebuffers and Brooktree DAC registers |
| `dev/sun/kbd.c`, `kbd_reg.h`, `kbd_tables.c`, `sunkbd.c`, `kbdsunvar.h`, `sunms.c`, `ms.c`, `event_var.h` | Sun keyboard/mouse protocol: `ts_sunkb.vhd`, `ts_ps2sun.vhd` |

### OpenBSD: `scratch/reference/emulators/openbsd/sys/...` (4 files, 53 KB, ISC/BSD)
- `dev/sbus/cs4231.c`, `cs4231var.h`, `dev/ic/cs4231reg.h`, `ad1848reg.h`: the APC DMA plus CS4231 driver, with comments on the APC register semantics. Maps to `ts_cs4231a.vhd`.

### Linux: `scratch/reference/emulators/linux/...` (24 files, 254 KB, GPL-2.0)

| Files | Maps to |
|---|---|
| `arch/sparc/include/asm/viking.h`, `mxcc.h`, `swift.h`, `ross.h`, `mbus.h` | SuperSPARC MCNTL, **MXCC registers**, microSPARC-II (Swift) registers: `mcu_multi*.vhd`, `mcu_simple.vhd` |
| `arch/sparc/include/asm/pgtsrmmu.h`, `arch/sparc/mm/srmmu.c`, `viking.S` | SRMMU usage, Viking/MXCC cache flush sequences |
| `arch/sparc/include/asm/iommu_32.h` | `ts_iommu.vhd` |
| `arch/sparc/include/asm/timer_32.h`, `obio.h`, `arch/sparc/kernel/sun4m_irq.c`, `sun4m_smp.c` | `ts_timer.vhd`, `ts_inter.vhd`, SMP (`smpmux.vhd`) |
| `arch/sparc/include/asm/dma.h`, `auxio_32.h` | `ts_dmaux.vhd` |
| `arch/sparc/include/asm/idprom.h` | **IDPROM format**: `iram_rtc.vhd` |
| `arch/sparc/include/asm/psr.h` | `iu_pack.vhd` |
| `drivers/scsi/sun_esp.c`, `esp_scsi.h` | `ts_esp.vhd` |
| `drivers/tty/serial/sunzilog.h`, `suncore.c` | `ts_sport.vhd` |
| `drivers/video/fbdev/tcx.c` | `ts_tcx.vhd` |
| `sound/sparc/cs4231.c` | `ts_cs4231a.vhd` (APC) |
| `drivers/sbus/char/openprom.c` | OBP device-tree access |

### Not fetched (links only)

| Project | Link | Notes |
|---|---|---|
| TME (The Machine Emulator) | https://people.csail.mit.edu/fredette/tme/ | Emulates sun2, sun3 and sun4c (SS2) only; no sun4m. Not fetched. |
| GRLIB / LEON3 (GPL SPARC V8 VHDL) | https://www.gaisler.com/getgrlib | Package `https://download.gaisler.com/products/GRLIB/bin/grlib-gpl-2026.2-b4300.tar.gz`; manuals `.../GRLIB/doc/grlib.pdf` (user's manual) and `.../GRLIB/doc/grip.pdf` (IP cores incl. LEON3, SRMMU, GRFPU). **An important alternative V8 + SRMMU implementation.** The download server is behind a browser check, so the README and license could not be fetched with curl; download them manually. GPL-2.0. |
| OpenSPARC T1 | https://www.oracle.com/servers/technologies/opensparc-t1-page.html | SPARC V9 (Niagara) RTL. Reference only, not V8. GPL-2.0. |
| Paranoia (netlib) | https://www.netlib.org/paranoia/ | Already local as `scratch/reference/cpu/fpu/paranoia.c` |
| Berkeley TestFloat/SoftFloat (current) | http://www.jhauser.us/arithmetic/TestFloat.html | Version 3 supersedes the local 2a/2b |
| Leon3 / GRLIB test benches | inside the GRLIB package (`designs/leon3-*`, `software/leon3/`) | These include the SPARC V8 systest |

---

## 13. Grabulosaure (TEMLIB): the functional reference

| Repo | Local path | Source | Size | License | Notes |
|---|---|---|---|---|---|
| `ss` (the SparcStation core) | `scratch/reference/grabulosaure/ss/` | https://github.com/Grabulosaure/ss | 3.6 MB, 163 files | **None in repo.** File headers say "This source file is copyrighted. Read the 'lic.txt' file before use... All rights reserved.", and no lic.txt exists upstream. The repo's top-level `LICENSE` is GPL-2.0. **Clarify with the author before reusing any text.** | `src/{cpu,peri,plomb,ts,board/mister}` correspond to this repo's `rtl/{cpu,peri,plomb,sun4m,mister}`. `soft/` holds the debug monitor (`debugarm`). |
| `ss_openbios` | `scratch/reference/grabulosaure/ss_openbios/` | https://github.com/Grabulosaure/ss_openbios | 54 MB, 3146 files | GPL-2.0 (OpenBIOS, fcode-utils) | OpenBIOS patched for the core; `boot.rom`; `howto.txt`. Read docs only; do not build inside it. |
| `lance` | `scratch/reference/grabulosaure/lance/` | https://github.com/Grabulosaure/lance | 300 KB, 7 files | none stated | A standalone newer `ts_lance.vhd` plus MII/RMII MAC variants (`ts_lance_mac_*.vhd`) |

**His other public repos** (https://github.com/Grabulosaure), links only:

| Repo | What it is |
|---|---|
| `AscalTest_MiSTer` | Scaler tester |
| `C2650_MiSTer` | Signetics 2650 consoles |
| `ChannelF_Spinal_MiSTer` | Fairchild Channel F in SpinalHDL |
| `MO_MiSTer` | Thomson MO |
| `NES3D_MiSTer`, `SMS3D_MiSTer`, `Genesis3D_MiSTer` (fork) | 3D-display variants |
| `Genesis_MiSTer_latency` | Genesis latency testing |
| `Intv_MiSTer` (fork) | Intellivision |
| `Temin` | A minimal terminal |
| `naken_asm` (fork) | Assembler |
| `Template_MiSTer` (fork) | MiSTer template |
| `hyperx_alloy_fps_rgb` | Keyboard RGB testing |

**TEMLIB site**

| Link | Contents |
|---|---|
| http://temlib.org/site/ | Blog: the "TEMLIB r4.1" posts, Downloads, Screenshots, Links |
| https://temlib.org/pub/ | His public document dump: `SparcStation/{Hardware,Manuals,Standards}`, `fpu/`, `mister/`, `sun/keyboard.pdf`. The TL rows above come from here. |
| https://temlib.org/pub/SparcStation/Hardware/Sparc32/TMS390S10_microSPARC-Ref.Guide.pdf | Not fetched: 92 MB microSPARC-I reference guide |
| https://temlib.org/pub/SparcStation/Hardware/Sparc32/hyper.pdf | Not fetched: Ross hyperSPARC |
| https://temlib.org/pub/SparcStation/Standards/{SparcV7.pdf,SparcV9.pdf} | Not fetched |
| https://temlib.org/pub/mister/ascal.vhd, `ascal3d.vhd`, `testascal.zip` | The **ascal** scaler. The MiSTer framework copy is in this repo as `sys/ascal.vhd`. |
| https://github.com/MiSTer-devel/SunSparcStation20_MiSTer | The MiSTer-devel release of the core (this repo's upstream lineage) |
| https://github.com/zakk4223/SunSparcStation20_MiSTer | A fork |

---

## 14. MiSTer framework (links only)

| Link | Notes |
|---|---|
| https://github.com/MiSTer-devel/Template_MiSTer | The `sys/` framework, `emu` module interface, `hps_io`, ascal, video/audio. Source of this repo's `sys/`. |
| https://github.com/MiSTer-devel/Template_MiSTer/blob/master/sys/hps_io.sv | Full HPS↔FPGA protocol, directly from the source |
| https://github.com/MiSTer-devel/Main_MiSTer | The ARM-side Main binary (OSD, file I/O, CD/SCSI/eth helpers used by `rtl/mister`) |
| https://github.com/MiSTer-devel/Main_MiSTer/wiki | The developer wiki (core configuration strings, DDR3 layout, `CONF_STR`) |

---

## Grabulosaure functional-reference map

This repo's `rtl/` corresponds to upstream `src/`, with `rtl/sun4m` = `src/ts` and `rtl/mister` = `src/board/mister`.
"same" means byte-identical. "DIFF n" means n changed lines (`diff | grep -c '^[<>]'`).
Line counts are given as repo / upstream (`scratch/reference/grabulosaure/ss/src/...`).

**rtl/cpu ↔ ss/src/cpu**

| Repo file | Lines | Status | Main governing reference |
|---|---|---|---|
| `asi_pack.vhd` | 136 / 133 | DIFF 7 | V8 manual (ASIs), Viking doc |
| `cpu_conf_pack.vhd` | 259 / 235 | DIFF 32 | Viking / microSPARC-II IDs |
| `disas_pack.vhd` | 1895 / 1895 | same | V8 manual |
| `fpu.vhd` | 71 / 71 | same | V8 manual ch. 4 |
| `fpu_calc.vhd` | 827 / 808 | DIFF 47 | IEEE 754, V8 FP |
| `fpu_div.vhd` | 656 / 656 | same | IEEE 754 |
| `fpu_mul.vhd` | 240 / 240 | same | IEEE 754 |
| `fpu_multi.vhd` | 697 / 697 | same | V8 FP queue, SuperSPARC FPU |
| `fpu_pack.vhd` | 1935 / 1836 | DIFF 103 | IEEE 754 |
| `fpu_regs_2r1w.vhd` | 152 / 146 | DIFF 14 | — |
| `fpu_simple.vhd` | 688 / 634 | DIFF 96 | V8 FP, microSPARC-II FPU |
| `idu.vhd` | 175 / 175 | same | (debug interface) |
| `iu.vhd` | 55 / 47 | DIFF 8 | V8 |
| `iu_debug.vhd` | 244 / 244 | same | — |
| `iu_debug_mp.vhd` | 331 / 331 | same | — |
| `iu_muldiv.vhd` | 439 / 439 | same | V8 (MUL/DIV, Y) |
| `iu_pack.vhd` | 2568 / 2513 | DIFF 65 | V8 |
| `iu_pipe5.vhd` | 1542 / 1417 | DIFF 147 | **V8 manual**, SuperSPARC/microSPARC-II IU |
| `iu_regs_2r1w.vhd` | 102 / 92 | DIFF 10 | V8 windows |
| `mcu.vhd` | 43 / 43 | same | — |
| `mcu_mp.vhd` | 81 / 77 | DIFF 4 | MBus spec |
| `mcu_multi.vhd` | 3072 / 2360 | **DIFF 980** | SRMMU App. H, Viking doc |
| `mcu_multi_ext.vhd` | 1005 / 976 | DIFF 29 | MBus, MXCC (gap) |
| `mcu_pack.vhd` | 1301 / 1283 | DIFF 20 | SRMMU |
| `mcu_simple.vhd` | 2742 / 2516 | **DIFF 410** | SRMMU, microSPARC-II manual |
| `mcu_tagram.vhd` | 86 / — | **repo-only** | (SS5 tag RAM in MLABs) |
| `mcu_tw.vhd` | 726 / 666 | DIFF 80 | SRMMU table walk |
| `smpmux.vhd` | 546 / 539 | DIFF 17 | MBus arbitration, sun4m MP |
| — | — / 2412 | upstream-only | `mcu_multi_avant_x.vhd` (older variant) |

**rtl/peri ↔ ss/src/peri**

All 12 files are byte-identical upstream: `acia`, `iram*` (×6), `ovo`, `ps2`, `synth`, `vid`, `vid_pack`.
`vid.vhd` is the framebuffer scan-out, governed by the Bt458 data sheet and `tcx.c`.

**rtl/plomb ↔ ss/src/plomb**

All identical except `plomb_pvc.vhd` (132 / 124, DIFF 10).
PLOMB is Grabulosaure's internal bus and has no external spec; MBus is the conceptual analogue.

**rtl/sun4m ↔ ss/src/ts**

| Repo file | Lines | Status | Governing reference(s) |
|---|---|---|---|
| `asm_lance.rb` | 118 / 118 | same | — |
| `dl_scsi.vhd` | 240 / 240 | same | SCSI trace |
| `iram_rtc.vhd` | 256 / 1121 | **DIFF (rewritten)** | M48T08, IDPROM (Linux `idprom.h`) |
| `iram_ts.vhd` | 1157 / 1157 | same | — |
| `scsi_targets.vhd` | 1945 / — | **repo-only** | SCSI-2 standard. Replaces upstream `scsi_sd/scsi_mist*`. |
| `ts_aciamux.vhd` | 190 / 156 | DIFF 52 | Z8530 |
| `ts_beep.vhd` | 104 / — | **repo-only** | SPARC keyboard spec (bell/click) |
| `ts_core.vhd` | 1528 / 1456 | DIFF 176 | Sun-4M System Architecture |
| `ts_cs4231a.vhd` | 1024 / 991 | DIFF 37 | CS4231A, APC (BSD/Linux) |
| `ts_decode.vhd` | 192 / 172 | DIFF 26 | Sun-4M arch address map, QEMU `sun4m.c` |
| `ts_dmaux.vhd` | 390 / 374 | DIFF 20 | **dma2.txt**, L64853A, QEMU `sparc32_dma.c`, NetBSD `lsi64854*` |
| `ts_esp.vhd` | 966 / 826 | DIFF 168 | **NCR 53C90/53C94/53CF94**, QEMU `esp.c`, MAME `ncr53c90.cpp` |
| `ts_fcode_cs4231_pack.vhd` | 29 / — | **repo-only** | IEEE 1275.2 SBus binding |
| `ts_fcode_pack.vhd` | 196 / — | **repo-only** | IEEE 1275.2, generated by `tools/fcode2vhd.py` |
| `ts_fdc.vhd` | 341 / — | **repo-only** | **Intel 82077AA**, QEMU `fdc.c` |
| `ts_inter.vhd` | 446 / 434 | DIFF 20 | Sun-4M arch, SLAVIO spec, QEMU `slavio_intctl.c` |
| `ts_io.vhd` | 853 / 799 | DIFF 158 | SLAVIO and MACIO specs (I/O block glue) |
| `ts_iommu.vhd` | 477 / 420 | DIFF 67 | Sun-4M arch (IOMMU), QEMU `sun4m_iommu.c`, NetBSD `iommureg.h` |
| `ts_kms.vhd` | 117 / 117 | same | SLAVIO keyboard/mouse/serial select |
| `ts_lance.vhd` | 1191 / 1166 | DIFF 33 | **Am7990 manual**, QEMU `lance.c`/`pcnet.c`. Also compare `scratch/reference/grabulosaure/lance/ts_lance.vhd`. |
| `ts_lance.vhs` | 1164 / 1139 | DIFF 33 | same |
| `ts_pack.vhd` | 211 / 186 | DIFF 27 | — |
| `ts_ps2.vhd` | 144 / 144 | same | PS/2 host |
| `ts_ps2sun.vhd` | 1099 / 916 | DIFF 225 | SPARC keyboard spec, Sun mouse protocol |
| `ts_rtc.vhd` | 330 / 302 | DIFF 34 | **M48T08** |
| `ts_sport.vhd` | 746 / 695 | DIFF 123 | **Z85C30 manual**, QEMU `escc.c` |
| `ts_sunkb.vhd` | 315 / 211 | DIFF 144 | **SPARC keyboard spec** |
| `ts_tcx.vhd` | 795 / 763 | DIFF 34 | NetBSD `tcxreg.h`, QEMU `tcx.c`, Bt458 |
| `ts_timer.vhd` | 314 / 286 | DIFF 54 | Sun-4M arch, SLAVIO, QEMU `slavio_timer.c` |

Upstream-only files in `src/ts`: `scsi_sd.vhd/.vhs`, `scsi_mist.vhd/.vhs`, `scsi_mist_cdrom.vhd/.vhs` and `asm_*.rb` (the old SCSI targets), plus `ts_lance_mac_rmii*.vhd` and `ts_lance_mac_void.vhd` (MAC back-ends).

**rtl/mister ↔ ss/src/board/mister**

| Repo file | Lines | Status |
|---|---|---|
| `plomb_avalon_mister.vhd` | 410 / 404 | DIFF 10 |
| `ss_core.vhd` | 1157 / 1040 | **DIFF 629** |
| `ddram_arb.sv` | 163 / — | repo-only |
| `eth_hps.vhd` | 617 / — | repo-only (the LANCE MAC bridged to HPS) |
| `nvram_sd.vhd` | 230 / — | repo-only (M48T08 image on SD) |

Upstream also has `SS_MiSTer/` (its own `sys/`, `ss.sv` and the qsf files for the ss5/ss20 builds).

**Summary:** of 73 shared files, 34 are byte-identical (all of `peri/`, almost all of `plomb/`, several leaf CPU units) and 39 diverge.
The heaviest divergence is in `mcu_multi.vhd`, `mcu_simple.vhd`, `iram_rtc.vhd` and `ss_core.vhd`.
There are 9 repo-only files (FDC, SCSI targets, FCode packs, beep, tag RAM, MiSTer glue) and 14 upstream-only entries.

---

## Gaps (not found from a legitimate host, or not fetched)

1. **SuperSPARC (TMS390Z50) User's Guide (TI/Sun, 1992-94), full edition.** Not found. Substitutes: the Viking 1990 user documentation, the STP1020A/STP1021A data sheets, STP1021UG and the white paper.
2. **SuperSPARC MXCC (TMS390Z55 / STP1090 / STP1091) cache-controller spec or data sheet.** Not found standalone. The Viking doc covers CC mode; register layout is in Linux `asm/mxcc.h`.
3. **SS20 "Kodiak" system-board engineering spec.** Not found, nor the specs for the SS10/SS20 **MSI** (MBus-SBus interface) and **EMC** (ECC memory controller) ASICs. Use Sun-4M System Architecture, the service manual and QEMU `eccmemctl.c`.
4. **TCX / S24 hardware manual and the AT&T 20C567 DAC data sheet.** Not found. Use NetBSD `tcxreg.h`, QEMU and Linux `tcx.c`, and the Brooktree Bt458 data sheet.
5. **CG3 / CG6 Sun hardware manuals.** Not found. Only the GX (L64845, FBC, TEC) docs and emulator sources exist.
6. **Sun APC DMA chip spec.** Not found. Driver sources only (NetBSD `apcdmareg.h`, OpenBSD/Linux cs4231).
7. **IEEE 1275-1994 core standard (final).** Not freely available: IEEE sells it and it is withdrawn. An unofficial copy at https://people.freebsd.org/~nwhitehorn/1275.pdf was not downloaded because its authorization is unverified. Only the drafts of the SPARC (1275.1) and SBus (1275.2) bindings were fetched.
8. **IEEE 754-1985 standard text.** Not free. Only drafts and tutorials (754r base document, Goldberg).
9. **SCSI-2 draft X3T9.2 rev 10L.** Not fetched. The T10 archive (https://t10.org/x3t9_2.htm) serves WordPerfect/ASCII files with restrictions. The bitsavers scan of the final ANSI X3.131-1994 is used instead.
10. **MMC / SCSI CD-ROM command references (MMC-1/2).** Not found freely: T10 drafts need membership. The SCSI-2 CD-ROM chapter (group 1/2 commands) in the ANSI scan covers the basics.
11. **The ST M48T08 data sheet direct from st.com.** Blocked to scripted downloads. The temlib copy (ST Doc 2411) is used. A **Mostek MK48T08** original was not found.
12. **A Type-4-specific Sun keyboard document.** Not found. The SPARC Keyboard Spec (Type 5) and NetBSD `kbd_tables.c` cover it.
13. **A proper Sun IDPROM format document.** The bitsavers `IDPROMS.pdf` is one handwritten page. Use Linux `asm/idprom.h`, QEMU `sun4m.c` (`nvram_init`) and OpenBIOS. NetBSD `sparc/include/idprom.h` does not exist at the pinned revision.
14. **GRLIB README and license.** Not fetched: the Gaisler download server sits behind a JavaScript browser check. Links are given in §12.
15. **The TME sun4m model.** None exists (TME covers sun2, sun3 and sun4c).
16. **The microSPARC-II User's Manual scan** (`microSPARC-II-UsersManual.pdf`, 69 MB) has a damaged xref. Use `microSPARC-II-UsersManual2.pdf`.
17. **Sun "Writing FCode 2.x Programs" / "OpenBoot 2.x Command Reference for SS20".** The FCode writer's guide was not fetched (Oracle docs reorganized). The OpenBoot 2.x Command Reference is present.

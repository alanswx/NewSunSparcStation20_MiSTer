# Buses

Two buses inside the machine (VERILOG-PLAN.md §2): the **interconnect**
between the CPU modules, memory and the MSI, and the **I/O bus** behind the
MSI and the system-space decoder, which every chipset register block sits
on. This page defines the I/O bus, which exists (`rtl/pkg/iobus_pkg.sv`),
and records what the interconnect must provide; its definition is due
before phase 1 ends.

## The I/O bus (`iobus_pkg`)

The slave side of the SBus and of the sun4m system control space
(PA `0xF_F1xx_xxxx`), as a device sees it: 32 bits wide with byte enables,
one access at a time.

```systemverilog
typedef struct packed {
  logic        req;      // request valid, held until ack/err
  logic        we;
  logic [27:0] addr;     // byte address within the slave's window
  logic [3:0]  be;       // byte enables, be[3] = data[31:24] = byte offset 0
  logic [31:0] wdata;
  logic        pair;     // both beats of a 64-bit access (high word first)
} iob_req_t;

typedef struct packed {
  logic        ack;
  logic        err;      // bus error: time-out or an access the device rejects
  logic [31:0] rdata;    // valid in the ack cycle
} iob_rsp_t;
```

Protocol:

- the master raises `req` with `we`, `addr`, `be`, `wdata` and holds them
  until the slave answers with `ack` or `err` for exactly one cycle;
- `ack`/`err` are registered: never in the cycle `req` rises;
- a read's `rdata` is valid in the `ack` cycle; a write takes effect at
  the edge that sets `ack`;
- in the cycle after `ack` the master may present a new request;
- `err` becomes a data access exception (SFSR FT 5 with TO/BE) in the
  CPU, as on an SBus time-out;
- `pair` marks both beats of a 64-bit access (an SBus double-word is two
  consecutive 32-bit beats, high word first, at `addr` and `addr+4`).
  Slaves with 64-bit registers (the user timers) snapshot the low word on
  the first beat and return it on the second, so the pair is consistent;
- byte lanes are big-endian: byte offset 0 of a word is `data[31:24]` and
  `be[3]`; offset 3 is `data[7:0]` and `be[0]`. A byte device takes the
  lane its address selects and may return its byte in every lane.
- `addr` is the byte address within the slave's window; the decoder in
  front of a slave passes the low bits it needs (28 bits cover one SBus
  slot, 256 MB, and the whole system control space).

A slave that is given an address it does not implement acks with 0
(requirement DEC-3: registers no device answers read 0); only the
*decoder* raises `err`, for empty SBus slots and unassigned control
space (requirement B1/A3).

Slaves so far: `slavio_timer` (addr[19:0] of `0xF_F130_0000`),
`slavio_intctl` (`0xF_F140_0000`), `slavio_misc` (addr[23:0] of
`0xF_F1xx_xxxx`, pages 6, 8, A, F), `m48t08` (addr[12:0] of
`0xF_F120_0000`), `escc` (addr[2:1] of `0xF_F100_0000` and
`0xF_F110_0000`).

## The interconnect (to define)

What the CPU modules, the memory controller and the MSI need from it
(from VERILOG-PLAN.md §2 and §6):

- 36-bit physical addresses; 64-bit data; transfers of 1, 2, 4, 8 bytes
  and 32-byte lines (cache fills and write-backs are not needed: the
  caches are write-through, but line fills are 4 beats);
- several outstanding requests per master (the fetch unit and the
  load/store unit), in order per master;
- a write-snoop broadcast: every write (CPU or DMA) is visible to every
  module's D-cache for invalidation (E3, `t_smp_coherent`);
- a module ID per master (MID) for the MBus Port Address register and the
  arbiter-enable register (`t_msi`, the POST's "CPU_#2 NOT installed");
- an error response (time-out / bus error) that the module turns into
  SFSR FT 5 with TO or BE, and FT 4 + L for a table walk (A3);
- atomic read-modify-write for `ldstub`/`swap` across CPUs
  (`t_smp_atomic`): a locked pair or a single RMW transaction;
- the boot-PROM window at `0xF_F000_0000` and PA 0 in boot mode; the
  MSI's time-out for empty SBus slots (B1).

It does not model MBus signal by signal.

--------------------------------------------------------------------------------
-- The Sun keyboard's bell and key click (PLAN S3)
--------------------------------------------------------------------------------
-- A Type 4/5 keyboard has a small speaker: the host turns the bell on and
-- off (commands 02/03) and, with the click on (0A/0B), the keyboard ticks
-- at each key it sends down. ts_sunkb decodes the commands; this makes the
-- sound, a square wave added to the CS4231's samples:
--  - bell: about 2 kHz, for as long as it is on;
--  - click: one period of about 3 kHz (about 0.3 ms), per key.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

LIBRARY work;
USE work.base_pack.ALL;

ENTITY ts_beep IS
  GENERIC (
    SYSFREQ : natural := 50_000_000);
  PORT (
    bell    : IN  std_logic;            -- on while the bell rings
    click   : IN  std_logic;            -- a pulse per key down
    -- the CS4231's samples in, the sum out (signed, saturated)
    in_l    : IN  uv16;
    in_r    : IN  uv16;
    out_l   : OUT uv16;
    out_r   : OUT uv16;
    clk     : IN  std_logic;
    reset_n : IN  std_logic);
END ENTITY ts_beep;

ARCHITECTURE rtl OF ts_beep IS
  CONSTANT BELL_HALF  : natural := SYSFREQ / 4000;   -- 2 kHz
  CONSTANT CLICK_HALF : natural := SYSFREQ / 6000;   -- 3 kHz
  CONSTANT LEVEL      : integer := 6000;             -- of 32767

  SIGNAL bcpt   : natural RANGE 0 TO BELL_HALF;
  SIGNAL bph    : std_logic;
  SIGNAL ccpt   : natural RANGE 0 TO CLICK_HALF;
  SIGNAL cstep  : natural RANGE 0 TO 2;               -- 2 high, 1 low, 0 off
  SIGNAL tone   : signed(16 DOWNTO 0);

  FUNCTION sat (CONSTANT a : signed(16 DOWNTO 0); CONSTANT b : uv16)
    RETURN uv16 IS
    VARIABLE s : signed(17 DOWNTO 0);
  BEGIN
    s := resize(a, 18) + resize(signed(b), 18);
    IF s > 32767 THEN RETURN x"7FFF";
    ELSIF s < -32768 THEN RETURN x"8000";
    ELSE RETURN unsigned(s(15 DOWNTO 0));
    END IF;
  END FUNCTION sat;

BEGIN

  Gen: PROCESS (clk)
    VARIABLE t : integer RANGE -2*LEVEL TO 2*LEVEL;
  BEGIN
    IF rising_edge(clk) THEN
      -- bell
      IF bell = '0' THEN
        bcpt <= 0;
        bph  <= '0';
      ELSIF bcpt = BELL_HALF THEN
        bcpt <= 0;
        bph  <= NOT bph;
      ELSE
        bcpt <= bcpt + 1;
      END IF;

      -- click
      IF click = '1' THEN
        cstep <= 2;
        ccpt  <= 0;
      ELSIF cstep /= 0 THEN
        IF ccpt = CLICK_HALF THEN
          ccpt  <= 0;
          cstep <= cstep - 1;
        ELSE
          ccpt <= ccpt + 1;
        END IF;
      END IF;

      t := 0;
      IF bell = '1' THEN
        IF bph = '1' THEN t := t + LEVEL; ELSE t := t - LEVEL; END IF;
      END IF;
      IF cstep = 2 THEN t := t + LEVEL;
      ELSIF cstep = 1 THEN t := t - LEVEL;
      END IF;
      tone <= to_signed(t, 17);

      out_l <= sat(tone, in_l);
      out_r <= sat(tone, in_r);

      IF reset_n = '0' THEN
        cstep <= 0;
        tone  <= (OTHERS => '0');
      END IF;
    END IF;
  END PROCESS Gen;

END ARCHITECTURE rtl;

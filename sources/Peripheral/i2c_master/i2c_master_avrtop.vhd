--************************************************************************************************
-- Internal I/O registers decoder/multiplexer for the AVR core
-- Version 1.11
-- Modified 05.06.2003
-- Designed by Ruslan Lepetenok
--************************************************************************************************

library IEEE;
use IEEE.std_logic_1164.all;

entity i2c_master_avrtop is
  port (
    -- AVR and read-data multiplexer signals
    clk_i      : in  std_logic;                    -- Clock
    reset_i    : in  std_logic;                    -- Reset (high asserted)
    avr_adr_i  : in  std_logic_vector(7 downto 0); -- Address from AVR
    avr_dbus_i : in  std_logic_vector(7 downto 0); -- Write data from AVR
    iore_i     : in  std_logic;                    -- Read enable from AVR
    iowe_i     : in  std_logic;                    -- Write enable from AVR
    out_en_o   : out std_logic;                    -- Read data enable to multiplexer
    avr_dbus_o : out std_logic_vector(7 downto 0); -- Read data to multiplexer

    -- i2c lines
    scl_pad_i    : in  std_logic;  -- i2c clock line input
    scl_pad_o    : out std_logic;  -- i2c clock line output
    scl_padoen_o : out std_logic;  -- i2c clock line output enable, active low
    sda_pad_i    : in  std_logic;  -- i2c data line input
    sda_pad_o    : out std_logic;  -- i2c data line output
    sda_padoen_o : out std_logic;  -- i2c data line output enable, active low

    arst_i     : in  std_logic;                    -- asynchronous reset
    i2c_int_o  : out std_logic                     -- interrupt request output signal
    );
end entity i2c_master_avrtop;

architecture Struct of i2c_master_avrtop is

  component i2c_master_top is
    generic(
      ARST_LVL : std_logic              -- asynchronous reset level
      );
    port (
      -- wishbone signals
      wb_clk_i  : in  std_logic;        -- master clock input
      wb_rst_i  : in  std_logic;        -- synchronous active high reset
      arst_i    : in  std_logic;        -- asynchronous reset
      wb_adr_i  : in  std_logic_vector(2 downto 0);  -- lower address bits
      wb_dat_i  : in  std_logic_vector(7 downto 0);  -- Databus input
      wb_dat_o  : out std_logic_vector(7 downto 0);  -- Databus output
      wb_we_i   : in  std_logic;        -- Write enable input
      wb_stb_i  : in  std_logic;        -- Strobe signals / core select signal
      wb_cyc_i  : in  std_logic;        -- Valid bus cycle input
      wb_ack_o  : out std_logic;        -- Bus cycle acknowledge output
      wb_inta_o : out std_logic;        -- interrupt request output signal

      -- i2c lines
      scl_pad_i    : in  std_logic;     -- i2c clock line input
      scl_pad_o    : out std_logic;     -- i2c clock line output
      scl_padoen_o : out std_logic;     -- i2c clock line output enable, active low
      sda_pad_i    : in  std_logic;     -- i2c data line input
      sda_pad_o    : out std_logic;     -- i2c data line output
      sda_padoen_o : out std_logic      -- i2c data line output enable, active low
      );
  end component i2c_master_top;

  component AVR2Wishbone_Bridge is
    port (
      -- AVR and read-data multiplexer signals
      clk_i      : in  std_logic;       -- Clock
      reset_i    : in  std_logic;       -- Reset (high asserted)
      avr_adr_i  : in  std_logic_vector(7 downto 0);  -- Address from AVR
      avr_dbus_i : in  std_logic_vector(7 downto 0);  -- Write data from AVR
      iore_i     : in  std_logic;       -- Read enable from AVR
      iowe_i     : in  std_logic;       -- Write enable from AVR
      out_en_o   : out std_logic;       -- Read data enable to multiplexer
      avr_dbus_o : out std_logic_vector(7 downto 0);  -- Read data to multiplexer

      -- wishbone master interface
      wb_ack_i : in  std_logic;         -- Acknowledge from WB slave
      wb_dat_i : in  std_logic_vector(7 downto 0);  -- Data from WB slave
      wb_clk_o : out std_logic;         -- Clock to WB slave
      wb_rst_o : out std_logic;         -- Reset to WB slave (high asserted)
      wb_adr_o : out std_logic_vector(7 downto 0);  -- Address to WB slave
      wb_dat_o : out std_logic_vector(7 downto 0);  -- Data to WB slave
      wb_we_o  : out std_logic;         -- Write enable to WB slave
      wb_stb_o : out std_logic;         -- Strobe signal to WB slave
      wb_cyc_o : out std_logic          -- Bus cycle signal to WB slave
      );
  end component AVR2Wishbone_Bridge;

  -- wishbone master interface
  signal wb_ack   : std_logic;                    -- Acknowledge from WB slave
  signal wb_dat_r : std_logic_vector(7 downto 0); -- Read data from WB slave
  signal wb_clk   : std_logic;                    -- Clock to WB slave
  signal wb_rst   : std_logic;                    -- Reset to WB slave (high asserted)
  signal wb_adr   : std_logic_vector(7 downto 0); -- Address to WB slave
  signal wb_dat_w : std_logic_vector(7 downto 0); -- Write data to WB slave
  signal wb_we    : std_logic;                    -- Write enable to WB slave
  signal wb_stb   : std_logic;                    -- Strobe signal to WB slave
  signal wb_cyc   : std_logic;                    -- Bus cycle signal to WB slave

begin

  I2C_MASTER : i2c_master_top
    generic map (
      ARST_LVL => '0'                   -- low asserted
      )
    port map (
      -- wishbone signals
      wb_clk_i  => wb_clk,
      wb_rst_i  => wb_rst,
      arst_i    => arst_i,
      wb_adr_i  => wb_adr(2 downto 0),
      wb_dat_i  => wb_dat_w,
      wb_dat_o  => wb_dat_r,
      wb_we_i   => wb_we,
      wb_stb_i  => wb_stb,
      wb_cyc_i  => wb_cyc,
      wb_ack_o  => wb_ack,
      wb_inta_o => i2c_int_o,

      -- i2c lines
      scl_pad_i    => scl_pad_i,
      scl_pad_o    => scl_pad_o,   
      scl_padoen_o => scl_padoen_o,
      sda_pad_i    => sda_pad_i,   
      sda_pad_o    => sda_pad_o,   
      sda_padoen_o => sda_padoen_o
      );

  AVR2WB : AVR2Wishbone_Bridge
    port map (
      clk_i      => clk_i,
      reset_i    => reset_i,
      avr_adr_i  => avr_adr_i,
      avr_dbus_i => avr_dbus_i,
      iore_i     => iore_i,
      iowe_i     => iowe_i,
      out_en_o   => out_en_o,
      avr_dbus_o => avr_dbus_o,
      wb_ack_i   => wb_ack,
      wb_dat_i   => wb_dat_r,
      wb_clk_o   => wb_clk,
      wb_rst_o   => wb_rst,
      wb_adr_o   => wb_adr,
      wb_dat_o   => wb_dat_w,
      wb_we_o    => wb_we,
      wb_stb_o   => wb_stb,
      wb_cyc_o   => wb_cyc);
  
end Struct;

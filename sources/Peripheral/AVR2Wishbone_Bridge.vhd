--************************************************************************************************
-- AVR to Wishbone Bridge
-- Version 1
-- 05.09.2011
--************************************************************************************************

library IEEE;
use IEEE.std_logic_1164.all;

entity AVR2Wishbone_Bridge is
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

    -- wishbone master interface
    wb_ack_i   : in  std_logic;                    -- Acknowledge from WB slave
    wb_dat_i   : in  std_logic_vector(7 downto 0); -- Data from WB slave
    wb_clk_o   : out std_logic;                    -- Clock to WB slave
    wb_rst_o   : out std_logic;                    -- Reset to WB slave (high asserted)
    wb_adr_o   : out std_logic_vector(7 downto 0); -- Address to WB slave
    wb_dat_o   : out std_logic_vector(7 downto 0); -- Data to WB slave
    wb_we_o    : out std_logic;                    -- Write enable to WB slave
    wb_stb_o   : out std_logic;                    -- Strobe signal to WB slave
    wb_cyc_o   : out std_logic                     -- Bus cycle signal to WB slave
    );
end entity AVR2Wishbone_Bridge;

architecture RTL of AVR2Wishbone_Bridge is

begin

  -- Signals to read data multiplexer
  out_en_o   <= wb_ack_i and iore_i;
  avr_dbus_o <= wb_dat_i;

  -- Signals to Wishbone slave
  wb_clk_o   <= clk_i;
  wb_rst_o   <= reset_i;
  wb_adr_o   <= avr_adr_i;
  wb_dat_o   <= avr_dbus_i;
  wb_we_o    <= iowe_i;
  wb_stb_o   <= iowe_i or iore_i;
  wb_cyc_o   <= iowe_i or iore_i;
  
end RTL;

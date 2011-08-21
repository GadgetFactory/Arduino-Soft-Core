----------------------------------------------------------------------------------
-- Company: Gadget Factory
-- Engineer: 
-- 
-- Create Date:    
-- Design Name: TDES Core AVR bus wrapper
-- Module Name: tdes_avrtop
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
-- License Creative Commons Attribution
-- Please give attribution to the original author and Gadget Factory (www.gadgetfactory.net)
-- This work is licensed under the Creative Commons Attribution 3.0 United States License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/us/ or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.std_logic_1164.all;

entity tdes_avrtop is
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
    tdes_int_o : out std_logic                     -- interrupt request output signal
    );
end entity tdes_avrtop;

architecture Struct of tdes_avrtop is

  component Wishbone_TDES_Core is
    port (
      -- wishbone signals
      wb_clk_i : in  std_logic;           -- master clock input
      wb_rst_i : in  std_logic;           -- synchronous active high reset input
      wb_adr_i : in  std_logic_vector(5 downto 0);  -- address input
      wb_dat_i : in  std_logic_vector(7 downto 0);  -- write data input
      wb_dat_o : out std_logic_vector(7 downto 0);  -- read data output
      wb_we_i  : in  std_logic;           -- write enable input
      wb_stb_i : in  std_logic;           -- strobe signal / core select input
      wb_cyc_i : in  std_logic;           -- valid bus cycle input
      wb_ack_o : out std_logic;           -- bus cycle acknowledge output
      wb_int_o : out std_logic           -- interrupt request output
      );
  end component Wishbone_TDES_Core;

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

  Wishbone_TDES_Core_i : Wishbone_TDES_Core
    port map (
      wb_clk_i => wb_clk,
      wb_rst_i => wb_rst,
      wb_adr_i => wb_adr(5 downto 0),
      wb_dat_i => wb_dat_w,
      wb_dat_o => wb_dat_r,
      wb_we_i  => wb_we,
      wb_stb_i => wb_stb,
      wb_cyc_i => wb_cyc,
      wb_ack_o => wb_ack,
      wb_int_o => tdes_int_o);

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

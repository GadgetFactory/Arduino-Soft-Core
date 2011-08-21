----------------------------------------------------------------------------------
-- Company: Gadget Factory
-- Engineer: 
-- 
-- Create Date:    
-- Design Name: Wishbone Triple DES Core
-- Module Name: Wishbone_tdes_core
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
-- REGISTERS
-- WB_ADR WB_DAT  Function
-- 0x0    [7:0]   LDKEY DESKEY1[7:0]
-- 0x1    [7:0]   LDKEY DESKEY1[15:8]
-- 0x2    [7:0]   LDKEY DESKEY1[23:16]
-- 0x3    [7:0]   LDKEY DESKEY1[31:24]
-- 0x4    [7:0]   LDKEY DESKEY1[39:32]
-- 0x5    [7:0]   LDKEY DESKEY1[47:40]
-- 0x6    [7:0]   LDKEY DESKEY1[55:48]
-- 0x7    [7:0]   LDKEY DESKEY1[63:56]
-- 0x8    [7:0]   LDKEY DESKEY2[7:0]
-- 0x9    [7:0]   LDKEY DESKEY2[15:8]
-- 0xA    [7:0]   LDKEY DESKEY2[23:16]
-- 0xB    [7:0]   LDKEY DESKEY2[31:24]
-- 0xC    [7:0]   LDKEY DESKEY2[39:32]
-- 0xD    [7:0]   LDKEY DESKEY2[47:40]
-- 0xE    [7:0]   LDKEY DESKEY2[55:48]
-- 0xF    [7:0]   LDKEY DESKEY2[63:56]
-- 0x10   [7:0]   LDKEY DESKEY3[7:0]
-- 0x11   [7:0]   LDKEY DESKEY3[15:8]
-- 0x12   [7:0]   LDKEY DESKEY3[23:16]
-- 0x13   [7:0]   LDKEY DESKEY3[31:24]
-- 0x14   [7:0]   LDKEY DESKEY3[39:32]
-- 0x15   [7:0]   LDKEY DESKEY3[47:40]
-- 0x16   [7:0]   LDKEY DESKEY3[55:48]
-- 0x17   [7:0]   LDKEY DESKEY3[63:56]
-- 0x18   [7:0]   DATAIN[7:0]   or DATAOUT[7:0]  
-- 0x19   [7:0]   DATAIN[15:8]  or DATAOUT[15:8] 
-- 0x1A   [7:0]   DATAIN[23:16] or DATAOUT[23:16]
-- 0x1B   [7:0]   DATAIN[31:24] or DATAOUT[31:24]
-- 0x1C   [7:0]   DATAIN[39:32] or DATAOUT[39:32]
-- 0x1D   [7:0]   DATAIN[47:40] or DATAOUT[47:40]
-- 0x1E   [7:0]   DATAIN[55:48] or DATAOUT[55:48]
-- 0x1F   [7:0]   DATAIN[63:56] or DATAOUT[63:56]  
-- 0x20   0       0: Disabled; 1: Enable (start processing DATA)
--        1       0: Decryption Mode; 1: Encryption Mode
-- 
-- License Creative Commons Attribution
-- Please give attribution to the original author and Gadget Factory (www.gadgetfactory.net)
-- This work is licensed under the Creative Commons Attribution 3.0 United States License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/us/ or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity Wishbone_TDES_Core is
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
end Wishbone_TDES_Core;

architecture Rtl of Wishbone_TDES_Core is
  
  component tdes_top
    port (
      key1_in         : in  std_logic_vector(0 to 63);
      key2_in         : in  std_logic_vector(0 to 63);
      key3_in         : in  std_logic_vector(0 to 63);
      function_select : in  std_logic;
      data_in         : in  std_logic_vector(0 to 63);
      data_out        : out std_logic_vector(0 to 63);
      lddata          : in  std_logic;
      ldkey           : in  std_logic;
      out_ready       : out std_logic;
      reset           : in  std_logic;
      clock           : in  std_logic);
  end component;

  constant FSM_IDLE  : std_logic_vector(3 downto 0) := "0000";
  constant FSM_LDKEY : std_logic_vector(3 downto 0) := "0001";
  constant FSM_WAIT1 : std_logic_vector(3 downto 0) := "0010";
  constant FSM_LDDAT : std_logic_vector(3 downto 0) := "0011";
  constant FSM_WAIT2 : std_logic_vector(3 downto 0) := "0100";
  constant FSM_READ1 : std_logic_vector(3 downto 0) := "0101";
  constant FSM_READ2 : std_logic_vector(3 downto 0) := "0110";
  constant FSM_READ3 : std_logic_vector(3 downto 0) := "0111";
  constant FSM_READ4 : std_logic_vector(3 downto 0) := "1000";
  constant FSM_READ5 : std_logic_vector(3 downto 0) := "1001";
  constant FSM_READ6 : std_logic_vector(3 downto 0) := "1010";
  constant FSM_READ7 : std_logic_vector(3 downto 0) := "1011";
  constant FSM_READ8 : std_logic_vector(3 downto 0) := "1100";

  signal write_enable : std_logic;      -- wishbone cyc & stb & we
  signal read_enable  : std_logic;      -- wishbone cyc & stb & !we

  signal deskey1 : std_logic_vector(63 downto 0);  -- DES KEY #1
  signal deskey2 : std_logic_vector(63 downto 0);  -- DES KEY #2
  signal deskey3 : std_logic_vector(63 downto 0);  -- DES KEY #3
  signal datareg : std_logic_vector(63 downto 0);  -- input/output data reg

  signal tdes_enable  : std_logic;      -- enable flag
  signal encrypt_mode : std_logic;      -- encryption mode

  signal ldkey            : std_logic;  -- ldkey enable to TDES
  signal lddata           : std_logic;  -- lddata enable to TDES
  signal dataout_ready    : std_logic;  -- out_ready flag fr TDES
  signal tdescore_dataout : std_logic_vector(63 downto 0);  -- core output

  signal fsm_cs : std_logic_vector(3 downto 0);  -- current state
  signal fsm_ns : std_logic_vector(3 downto 0);  -- next state

begin

  -- Wishbone write and read enables
  write_enable <= wb_cyc_i and wb_stb_i and wb_we_i;
  read_enable  <= wb_cyc_i and wb_stb_i and not wb_we_i;

  -- wishbone acknowledge
  wb_ack_o <= wb_cyc_i and wb_stb_i;

  -- interrupt request
  wb_int_o <= dataout_ready;

  -- purpose: wb_dat_o multiplexer
  -- type   : combinational
  GET_WB_DAT_O : process (datareg, fsm_ns)
  begin  -- process WB_DAT_O
    case fsm_ns is
      when FSM_READ1 => wb_dat_o <= datareg(7 downto 0);
      when FSM_READ2 => wb_dat_o <= datareg(15 downto 8);
      when FSM_READ3 => wb_dat_o <= datareg(23 downto 16);
      when FSM_READ4 => wb_dat_o <= datareg(31 downto 24);
      when FSM_READ5 => wb_dat_o <= datareg(39 downto 32);
      when FSM_READ6 => wb_dat_o <= datareg(47 downto 40);
      when FSM_READ7 => wb_dat_o <= datareg(55 downto 48);
      when FSM_READ8 => wb_dat_o <= datareg(63 downto 56);
      when others    => wb_dat_o <= (others => '0');
    end case;
  end process GET_WB_DAT_O;

  -- purpose: Triple DES Core Registers
  -- type   : sequential
  -- inputs : wb_clk_i, wb_rst_i
  REGISTERS : process (wb_clk_i)
  begin  -- process REGISTERS
    if wb_clk_i'event and wb_clk_i = '1' then  -- rising clock edge
      if wb_rst_i = '1' then            -- synchronous reset (active high)
        deskey1      <= (others => '0');
        deskey2      <= (others => '0');
        deskey3      <= (others => '0');
        datareg      <= (others => '0');
        tdes_enable  <= '0';
        encrypt_mode <= '0';
      else
        if (write_enable = '1') then
          case wb_adr_i is
            -- DESKEY1
            when "000000" => deskey1(7 downto 0)   <= wb_dat_i;
            when "000001" => deskey1(15 downto 8)  <= wb_dat_i;
            when "000010" => deskey1(23 downto 16) <= wb_dat_i;
            when "000011" => deskey1(31 downto 24) <= wb_dat_i;
            when "000100" => deskey1(39 downto 32) <= wb_dat_i;
            when "000101" => deskey1(47 downto 40) <= wb_dat_i;
            when "000110" => deskey1(55 downto 48) <= wb_dat_i;
            when "000111" => deskey1(63 downto 56) <= wb_dat_i;
                              -- DESKEY2
            when "001000" => deskey2(7 downto 0)   <= wb_dat_i;
            when "001001" => deskey2(15 downto 8)  <= wb_dat_i;
            when "001010" => deskey2(23 downto 16) <= wb_dat_i;
            when "001011" => deskey2(31 downto 24) <= wb_dat_i;
            when "001100" => deskey2(39 downto 32) <= wb_dat_i;
            when "001101" => deskey2(47 downto 40) <= wb_dat_i;
            when "001110" => deskey2(55 downto 48) <= wb_dat_i;
            when "001111" => deskey2(63 downto 56) <= wb_dat_i;
                              -- DESKEY3
            when "010000" => deskey3(7 downto 0)   <= wb_dat_i;
            when "010001" => deskey3(15 downto 8)  <= wb_dat_i;
            when "010010" => deskey3(23 downto 16) <= wb_dat_i;
            when "010011" => deskey3(31 downto 24) <= wb_dat_i;
            when "010100" => deskey3(39 downto 32) <= wb_dat_i;
            when "010101" => deskey3(47 downto 40) <= wb_dat_i;
            when "010110" => deskey3(55 downto 48) <= wb_dat_i;
            when "010111" => deskey3(63 downto 56) <= wb_dat_i;
                              -- DATAIN
            when "011000" => datareg(7 downto 0)   <= wb_dat_i;
            when "011001" => datareg(15 downto 8)  <= wb_dat_i;
            when "011010" => datareg(23 downto 16) <= wb_dat_i;
            when "011011" => datareg(31 downto 24) <= wb_dat_i;
            when "011100" => datareg(39 downto 32) <= wb_dat_i;
            when "011101" => datareg(47 downto 40) <= wb_dat_i;
            when "011110" => datareg(55 downto 48) <= wb_dat_i;
            when "011111" => datareg(63 downto 56) <= wb_dat_i;
                              -- enable and mode
            when "100000" => tdes_enable  <= wb_dat_i(0);
                             encrypt_mode <= wb_dat_i(1);
            when others => null;
          end case;
        elsif dataout_ready = '1' then
          datareg <= tdescore_dataout;
        end if;
      end if;
    end if;
  end process REGISTERS;

  -- purpose: FSM sequential process
  -- type   : sequential
  -- inputs : wb_clk_i, wb_rst_i
  FSM_SEQ : process (wb_clk_i)
  begin  -- process FSM_SEQ
    if wb_clk_i'event and wb_clk_i = '1' then  -- rising clock edge
      if wb_rst_i = '1' then            -- synchronous reset (active high)
        fsm_cs <= (others => '0');
      else
        fsm_cs <= fsm_ns;
      end if;
    end if;
  end process FSM_SEQ;

  -- purpose: FSM combinational process
  -- type   : combinational
  FSM_COMB : process(dataout_ready, fsm_cs, read_enable, tdes_enable)
  begin  -- process FSM_COMB
    fsm_ns <= fsm_cs;
    ldkey  <= '0';
    lddata <= '0';
    case fsm_cs is
      when FSM_IDLE =>
        if tdes_enable = '1' then
          fsm_ns <= FSM_LDKEY;
        end if;
      when FSM_LDKEY =>
        fsm_ns <= FSM_WAIT1;
        ldkey  <= '1';
      when FSM_WAIT1 =>
        fsm_ns <= FSM_LDDAT;
      when FSM_LDDAT =>
        fsm_ns <= FSM_WAIT2;
        lddata <= '1';
      when FSM_WAIT2 =>
        if dataout_ready = '1' then
          fsm_ns <= FSM_READ1;
        end if;
      when FSM_READ1 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ2;
        end if;
      when FSM_READ2 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ3;
        end if;
      when FSM_READ3 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ4;
        end if;
      when FSM_READ4 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ5;
        end if;
      when FSM_READ5 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ6;
        end if;
      when FSM_READ6 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ7;
        end if;
      when FSM_READ7 =>
        if read_enable = '1' then
          fsm_ns <= FSM_READ8;
        end if;
      when FSM_READ8 =>
        if read_enable = '1' then
          fsm_ns <= FSM_IDLE;
        end if;
      when others =>
        fsm_ns <= FSM_IDLE;
    end case;
  end process FSM_COMB;

  tdes_top_i : tdes_top
    port map (
      key1_in         => deskey1,
      key2_in         => deskey2,
      key3_in         => deskey3,
      function_select => encrypt_mode,
      data_in         => datareg,
      data_out        => tdescore_dataout,
      lddata          => lddata,
      ldkey           => ldkey,
      out_ready       => dataout_ready,
      reset           => wb_rst_i,
      clock           => wb_clk_i);

end Rtl;


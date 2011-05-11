--************************************************************************************************
-- AVR uC Top Address Decoder
-- Version 1
-- 05.09.2011
--************************************************************************************************

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;

use WORK.SynthCtrlPack.all;
use WORK.AVRuCPackage.all;

entity Addr_Decoder is port(
  avr2io_addr_i    : in  std_logic_vector(15 downto 0);
  avr2io_iore_i    : in  std_logic;
  avr2io_iorebus_o : out std_logic_vector(CExtMuxInSize-1 downto 0);
  avr2io_iowe_i    : in  std_logic;
  avr2io_iowebus_o : out std_logic_vector(CExtMuxInSize-1 downto 0));
end Addr_Decoder;

architecture RTL of Addr_Decoder is

  signal avr2io_iorebus_int : std_logic_vector(15 downto 0);  -- internal avr2io_iorebus
  signal avr2io_iowebus_int : std_logic_vector(15 downto 0);  -- internal avr2io_iowebus

begin
  
  -- purpose: address decoder
  -- type   : combinational
  ADDR_DECODE: process (avr2io_addr_i, avr2io_iore_i, avr2io_iowe_i)
  begin  -- process ADDR_DECODE
    -- initialize all bits to 0
    avr2io_iorebus_int <= (others => '0');
    avr2io_iowebus_int <= (others => '0');

    -- check AVR adr[15:12] if matches the mask for IO devices
    -- decode adr[11:8] to generate RE/WE for each IO device
    -- AVRIOMASK is declared in AVRuCPackage.vhd
    if (avr2io_addr_i(15 downto 12) = AVRIOMASK and
        avr2io_iore_i = '1') then
      case (avr2io_addr_i(11 downto 8)) is
        when "1111" => avr2io_iorebus_int(15) <= '1';
        when "1110" => avr2io_iorebus_int(14) <= '1';
        when "1101" => avr2io_iorebus_int(13) <= '1';
        when "1100" => avr2io_iorebus_int(12) <= '1';
        when "1011" => avr2io_iorebus_int(11) <= '1';
        when "1010" => avr2io_iorebus_int(10) <= '1';
        when "1001" => avr2io_iorebus_int(9) <= '1';
        when "1000" => avr2io_iorebus_int(8) <= '1';
        when "0111" => avr2io_iorebus_int(7) <= '1';
        when "0110" => avr2io_iorebus_int(6) <= '1';
        when "0101" => avr2io_iorebus_int(5) <= '1';
        when "0100" => avr2io_iorebus_int(4) <= '1';
        when "0011" => avr2io_iorebus_int(3) <= '1';
        when "0010" => avr2io_iorebus_int(2) <= '1';
        when "0001" => avr2io_iorebus_int(1) <= '1';
        when "0000" => avr2io_iorebus_int(0) <= '1';
        when others => null;
      end case;
    end if;
    if (avr2io_addr_i(15 downto 12) = AVRIOMASK and
        avr2io_iowe_i = '1') then
      case (avr2io_addr_i(11 downto 8)) is
        when "1111" => avr2io_iowebus_int(15) <= '1';
        when "1110" => avr2io_iowebus_int(14) <= '1';
        when "1101" => avr2io_iowebus_int(13) <= '1';
        when "1100" => avr2io_iowebus_int(12) <= '1';
        when "1011" => avr2io_iowebus_int(11) <= '1';
        when "1010" => avr2io_iowebus_int(10) <= '1';
        when "1001" => avr2io_iowebus_int(9) <= '1';
        when "1000" => avr2io_iowebus_int(8) <= '1';
        when "0111" => avr2io_iowebus_int(7) <= '1';
        when "0110" => avr2io_iowebus_int(6) <= '1';
        when "0101" => avr2io_iowebus_int(5) <= '1';
        when "0100" => avr2io_iowebus_int(4) <= '1';
        when "0011" => avr2io_iowebus_int(3) <= '1';
        when "0010" => avr2io_iowebus_int(2) <= '1';
        when "0001" => avr2io_iowebus_int(1) <= '1';
        when "0000" => avr2io_iowebus_int(0) <= '1';
        when others => null;
      end case;
    end if;
  end process ADDR_DECODE;

  -- Generate WE for each device depending on CExtMuxInSize
  
  IOWE_DEV15: if (CExtMuxInSize = 16) generate
    avr2io_iorebus_o(15) <= avr2io_iorebus_int(15);
    avr2io_iowebus_o(15) <= avr2io_iowebus_int(15);
  end generate IOWE_DEV15;

  IOWE_DEV14: if (CExtMuxInSize >= 15) generate
    avr2io_iorebus_o(14) <= avr2io_iorebus_int(14);
    avr2io_iowebus_o(14) <= avr2io_iowebus_int(14);
  end generate IOWE_DEV14;

  IOWE_DEV13: if (CExtMuxInSize >= 14) generate
    avr2io_iorebus_o(13) <= avr2io_iorebus_int(13);
    avr2io_iowebus_o(13) <= avr2io_iowebus_int(13);
  end generate IOWE_DEV13;

  IOWE_DEV12: if (CExtMuxInSize >= 13) generate
    avr2io_iorebus_o(12) <= avr2io_iorebus_int(12);
    avr2io_iowebus_o(12) <= avr2io_iowebus_int(12);
  end generate IOWE_DEV12;

  IOWE_DEV11: if (CExtMuxInSize >= 12) generate
    avr2io_iorebus_o(11) <= avr2io_iorebus_int(11);
    avr2io_iowebus_o(11) <= avr2io_iowebus_int(11);
  end generate IOWE_DEV11;

  IOWE_DEV10: if (CExtMuxInSize >= 11) generate
    avr2io_iorebus_o(10) <= avr2io_iorebus_int(10);
    avr2io_iowebus_o(10) <= avr2io_iowebus_int(10);
  end generate IOWE_DEV10;

  IOWE_DEV9: if (CExtMuxInSize >= 10) generate
    avr2io_iorebus_o(9) <= avr2io_iorebus_int(9);
    avr2io_iowebus_o(9) <= avr2io_iowebus_int(9);
  end generate IOWE_DEV9;

  IOWE_DEV8: if (CExtMuxInSize >= 9) generate
    avr2io_iorebus_o(8) <= avr2io_iorebus_int(8);
    avr2io_iowebus_o(8) <= avr2io_iowebus_int(8);
  end generate IOWE_DEV8;

  IOWE_DEV7: if (CExtMuxInSize >= 8) generate
    avr2io_iorebus_o(7) <= avr2io_iorebus_int(7);
    avr2io_iowebus_o(7) <= avr2io_iowebus_int(7);
  end generate IOWE_DEV7;

  IOWE_DEV6: if (CExtMuxInSize >= 7) generate
    avr2io_iorebus_o(6) <= avr2io_iorebus_int(6);
    avr2io_iowebus_o(6) <= avr2io_iowebus_int(6);
  end generate IOWE_DEV6;

  IOWE_DEV5: if (CExtMuxInSize >= 6) generate
    avr2io_iorebus_o(5) <= avr2io_iorebus_int(5);
    avr2io_iowebus_o(5) <= avr2io_iowebus_int(5);
  end generate IOWE_DEV5;

  IOWE_DEV4: if (CExtMuxInSize >= 5) generate
    avr2io_iorebus_o(4) <= avr2io_iorebus_int(4);
    avr2io_iowebus_o(4) <= avr2io_iowebus_int(4);
  end generate IOWE_DEV4;

  IOWE_DEV3: if (CExtMuxInSize >= 4) generate
    avr2io_iorebus_o(3) <= avr2io_iorebus_int(3);
    avr2io_iowebus_o(3) <= avr2io_iowebus_int(3);
  end generate IOWE_DEV3;

  IOWE_DEV2: if (CExtMuxInSize >= 3) generate
    avr2io_iorebus_o(2) <= avr2io_iorebus_int(2);
    avr2io_iowebus_o(2) <= avr2io_iowebus_int(2);
  end generate IOWE_DEV2;

  IOWE_DEV1: if (CExtMuxInSize >= 2) generate
    avr2io_iorebus_o(1) <= avr2io_iorebus_int(1);
    avr2io_iowebus_o(1) <= avr2io_iowebus_int(1);
  end generate IOWE_DEV1;

  avr2io_iorebus_o(0) <= avr2io_iorebus_int(0);
  avr2io_iowebus_o(0) <= avr2io_iowebus_int(0);

end RTL;

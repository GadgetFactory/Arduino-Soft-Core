----------------------------------------------------------------------------------
-- Company: Gadget Factory
-- Engineer: 
-- 
-- Create Date:    
-- Design Name: Wishbone Buttons and LED Controller Core
-- Module Name: Wishbone_Button_LED_Core
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
use IEEE.STD_LOGIC_1164.all;

entity Wishbone_Button_LED_Core is
  port (
    -- wishbone signals
    wb_clk_i  : in  std_logic;          -- master clock input
    wb_rst_i  : in  std_logic;          -- synchronous active high reset input
    wb_adr_i  : in  std_logic_vector(3 downto 0);  -- address input
    wb_dat_i  : in  std_logic_vector(7 downto 0);  -- write data input
    wb_dat_o  : out std_logic_vector(7 downto 0);  -- read data output
    wb_we_i   : in  std_logic;          -- write enable input
    wb_stb_i  : in  std_logic;          -- strobe signal / core select input
    wb_cyc_i  : in  std_logic;          -- valid bus cycle input
    wb_ack_o  : out std_logic;          -- bus cycle acknowledge output
    wb_int_o  : out std_logic;          -- interrupt request output

    buttons_i : in  std_logic_vector(3 downto 0);  -- input from buttons
    leds_o    : out std_logic_vector(3 downto 0)   -- output to LEDs
    );
end Wishbone_Button_LED_Core;

architecture Rtl of Wishbone_Button_LED_Core is

  constant LEDLATCHLO      : std_logic_vector(3 downto 0) := "0000";  -- LEDLATCH[7:0] offset
  constant LEDLATCHHI      : std_logic_vector(3 downto 0) := "0001";  -- LEDLATCH[15:8] offset
  constant LEDONLO         : std_logic_vector(3 downto 0) := "0010";  -- LEDON[7:0] offset
  constant LEDONHI         : std_logic_vector(3 downto 0) := "0011";  -- LEDON[15:8] offset
  constant LEDOFFLO        : std_logic_vector(3 downto 0) := "0100";  -- LEDOFF[7:0] offset
  constant LEDOFFHI        : std_logic_vector(3 downto 0) := "0101";  -- LEDOFF[15:8] offset
  constant BTNSTATUSLO     : std_logic_vector(3 downto 0) := "0110";  -- BTNSTATUS[7:0] offset
  constant BTNSTATUSHI     : std_logic_vector(3 downto 0) := "0111";  -- BTNSTATUS[15:8] offset
  constant BTNINTCTLLO     : std_logic_vector(3 downto 0) := "1000";  -- BTNINTCTL[7:0] offset
  constant BTNINTCTLHI     : std_logic_vector(3 downto 0) := "1001";  -- BTNINTCTL[15:8] offset

  signal write_enable       : std_logic;      -- wishbone cyc & stb & we
  signal read_enable        : std_logic;      -- wishbone cyc & stb & !we
  signal led_latch_reg      : std_logic_vector(3 downto 0);  -- LEDLATCH register
  signal led_on_reg         : std_logic_vector(3 downto 0);  -- LEDON register
  signal led_off_reg        : std_logic_vector(3 downto 0);  -- LEDOFF register
  signal btn_intcontrol_reg : std_logic_vector(4 downto 0);  -- BTNINTCTL register
  signal buttons_r          : std_logic_vector(3 downto 0);  -- buttons_i registered
  signal buttons_2r         : std_logic_vector(3 downto 0);  -- buttons_r registered
  
begin

  -- Wishbone write and read enables
  write_enable <= wb_cyc_i and wb_stb_i and wb_we_i;
  read_enable  <= wb_cyc_i and wb_stb_i and not wb_we_i;

  -----------------------------------------------------------------------------
  -- LEDs SECTION
  -----------------------------------------------------------------------------

  -- purpose: LEDON register. This write only register allows you to switch on one or more
  --          LEDs without concern for others. The bits where '1's are written will
  --          switch on the corresponding LEDs. A '0' has no effect.
  -- type   : sequential
  LEDON_REG: process (wb_clk_i)
  begin  -- process LEDON
    if wb_clk_i'event and wb_clk_i = '1' then     -- rising clock edge
      if wb_rst_i = '1' then                 -- synchronous reset (active high)
        led_on_reg <= (others => '0');
      else
        if (write_enable = '1' and wb_adr_i = LEDONLO) then
          led_on_reg <= wb_dat_i(3 downto 0);
        else                                 -- reset led_on_reg after wb_we_i deasserts
          led_on_reg <= (others => '0');
        end if;
      end if;
    end if;
  end process LEDON_REG;

  -- purpose: LEDOFF register. This write only register allows you to switch off one or more
  --          LEDs without concern for others. The bits where '1's are written will
  --          switch off the corresponding LEDs. A '0' has no effect.
  -- type   : sequential
  LEDOFF_REG: process (wb_clk_i)
  begin  -- process LEDOFF
    if wb_clk_i'event and wb_clk_i = '1' then     -- rising clock edge
      if wb_rst_i = '1' then                 -- synchronous reset (active high)
        led_off_reg <= (others => '0');
      else
        if (write_enable = '1' and wb_adr_i = LEDOFFLO) then
          led_off_reg <= wb_dat_i(3 downto 0);
        else                                 -- reset led_off_reg after wb_we_i deasserts
          led_off_reg <= (others => '0');
        end if;
      end if;
    end if;
  end process LEDOFF_REG;

  -- purpose: LEDLATCH register. The LED latch controls each of the LEDs with one bit.
  --          If a bit is '1', the LED is on, else it is off.
  --          These registers can also be controlled by the LEDON and LEDOFF registers.
  -- type   : sequential
  LEDLATCH_REG: process (wb_clk_i)
  begin  -- process LEDLATCH
    if wb_clk_i'event and wb_clk_i = '1' then  -- rising clock edge
      if wb_rst_i = '1' then            -- synchronous reset (active high)
        led_latch_reg <= (others => '0');
      else
        if (write_enable = '1' and wb_adr_i = LEDLATCHLO) then
          led_latch_reg <= wb_dat_i(3 downto 0);
        else
          
          -- Turn on LED(x) if led_on_reg(x) = '1'
          -- Turn off LED(x) if led_off_reg(x) = '1'
          
          if (led_on_reg(0) = '1') then
            led_latch_reg(0) <= '1';
          elsif (led_off_reg(0) = '1') then
            led_latch_reg(0) <= '0';
          end if;

          if (led_on_reg(1) = '1') then
            led_latch_reg(1) <= '1';
          elsif (led_off_reg(1) = '1') then
            led_latch_reg(1) <= '0';
          end if;

          if (led_on_reg(2) = '1') then
            led_latch_reg(2) <= '1';
          elsif (led_off_reg(2) = '1') then
            led_latch_reg(2) <= '0';
          end if;

          if (led_on_reg(3) = '1') then
            led_latch_reg(3) <= '1';
          elsif (led_off_reg(3) = '1') then
            led_latch_reg(3) <= '0';
          end if;
          
        end if;                         -- (write_enable and wb_adr_i = LEDLATCHLO)
        
      end if;
    end if;
  end process LEDLATCH_REG;

  -- LED output pins
  leds_o <= led_latch_reg;

  -----------------------------------------------------------------------------
  -- BUTTONS SECTION
  -----------------------------------------------------------------------------
  
  -- purpose: registers the input buttons 2x to remove metastability
  -- type   : sequential
  BUTTONS_REG: process (wb_clk_i)
  begin  -- process BUTTONS_REG
    if wb_clk_i'event and wb_clk_i = '1' then  -- rising clock edge
      if wb_rst_i = '1' then            -- synchronous reset (active high)
        buttons_2r <= (others => '0');
        buttons_r  <= (others => '0');
      else
        buttons_2r <= buttons_r;
        buttons_r  <= buttons_i;
      end if;
    end if;
  end process BUTTONS_REG;
  
  -- purpose: BTNINTCTL register. This controls the interrupts related to button pushed events
  --          SW needs to clear bits 1 to 4 after servicing the interrupt
  --          Bit 0: Interrupt Enable
  --          Bit 1 : Button 1 Pushed
  --          Bit 2 : Button 2 Pushed
  --          Bit 3 : Button 3 Pushed
  --          Bit 4 : Button 4 Pushed
  -- type   : sequential
  BTNINTCTL_REG: process (wb_clk_i)
  begin  -- process BTNINTCTL_REG
    if wb_clk_i'event and wb_clk_i = '1' then  -- rising clock edge
      if wb_rst_i = '1' then            -- synchronous reset (active high)
        btn_intcontrol_reg <= (others => '0');
      else
        if (write_enable = '1' and wb_adr_i = BTNINTCTLLO) then
          btn_intcontrol_reg <= wb_dat_i(4 downto 0);
        else
          -- read button states (buttons_2r) if interrupt is enabled
          if (btn_intcontrol_reg(0) = '1') then
            btn_intcontrol_reg(4 downto 1) <= buttons_2r;
          end if;
        end if;
      end if;
    end if;
  end process BTNINTCTL_REG;


  -----------------------------------------------------------------------------
  -- WISHBONE OUTPUT SIGNALS
  -----------------------------------------------------------------------------

  -- purpose: read multiplexer for read access
  -- type   : combinational
  READ_MUX: process (btn_intcontrol_reg, buttons_2r, led_latch_reg,
                     read_enable, wb_adr_i)
  begin  -- process READ_MUX
    -- initialize to 0 all bits
    wb_dat_o <= (others => '0');
    
    if (read_enable = '1') then
      case (wb_adr_i) is
        when LEDLATCHLO  => wb_dat_o(3 downto 0) <= led_latch_reg;
        when BTNSTATUSLO => wb_dat_o(3 downto 0) <= buttons_2r;
        when BTNINTCTLLO => wb_dat_o(4 downto 0) <= btn_intcontrol_reg;                    
        when others      => wb_dat_o             <= (others => '0');
      end case;
    end if;
  end process READ_MUX;

  -- wishbone acknowledge
  wb_ack_o <= wb_cyc_i and wb_stb_i;

  -- interrupt request
  wb_int_o <= btn_intcontrol_reg(1) or btn_intcontrol_reg(2) or
              btn_intcontrol_reg(3) or btn_intcontrol_reg(4);
              
  
end Rtl;


--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:39:07 03/19/2010
-- Design Name:   
-- Module Name:   C:/dbdev/My Dropbox/GadgetFactory/AVR8/svn/trunk/testbench.vhd
-- Project Name:  AVR_Core
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top_avr_core_v8
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.all;
USE ieee.numeric_std.ALL;

library UNISIM;
use UNISIM.vcomponents.all;

ENTITY testbench IS
END testbench;
 
ARCHITECTURE behavior OF testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Papilio_AVR8
    PORT(
	 nrst    : in    std_logic;
	 clk    : in    std_logic;
	 porta  : inout std_logic_vector(7 downto 0);
	 portb  : inout std_logic_vector(7 downto 0);
	 portc  : inout std_logic_vector(7 downto 0);
	 portd  : inout std_logic_vector(7 downto 0);
	 porte  : inout std_logic_vector(7 downto 0);
	 portf  : inout std_logic_vector(7 downto 0);

	-- UART 
	rxd    : in    std_logic;
	txd    : out   std_logic

        -- I2C
--        scl : inout std_logic;
--        sda : inout std_logic;

--        buttons_i : in  std_logic_vector(3 downto 0);
--        leds_o    : out std_logic_vector(3 downto 0) 

        );
    END COMPONENT;
    

   --Inputs
   signal nrst : std_logic := '0';
   signal clk : std_logic := '0';
   signal rxd : std_logic := '0';
   signal INTx : std_logic_vector(7 downto 0) := (others => '0');
   signal TMS : std_logic := '0';
   signal TCK : std_logic := '0';
   signal TDI : std_logic := '0';
   signal TRSTn : std_logic := '0';
   signal buttons : std_logic_vector(3 downto 0);

	--BiDirs
   signal porta : std_logic_vector(7 downto 0);
   signal portb : std_logic_vector(7 downto 0) := (others => '1');
   signal portc : std_logic_vector(7 downto 0);
   signal portd : std_logic_vector(7 downto 0);
   signal porte : std_logic_vector(7 downto 0);
   signal portf : std_logic_vector(7 downto 0);
   signal scl   : std_logic;
   signal sda   : std_logic;

 	--Outputs
   signal txd : std_logic;
   signal TDO : std_logic;
   signal leds : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 1us;

   signal leds_buttons : std_logic_vector(7 downto 0);
 
BEGIN

  leds_buttons <= leds & buttons;
	-- Instantiate the Unit Under Test (UUT)
   uut: Papilio_AVR8 PORT MAP (
          nrst => nrst,
          clk => clk,
          porta => porta,
          portb => portb,
          portc => leds_buttons,
          portd => portd,
          porte => porte,
          portf => portf,
          rxd => rxd,
          txd => txd
--          scl => scl,
--          sda => sda,
--          buttons_i => buttons,
--          leds_o => leds
        );

   -- pull ups for I2C pads
   scl_pullup : pullup PORT MAP (O => portd(0));
   sda_pullup : pullup PORT MAP (O => portd(1));   

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100ms.
      wait for 1ms;	

      wait for clk_period*10;

      -- insert stimulus here 
		nrst <= '1';
--		portb <= "11111111";
		portd <= "11111111";
--		wait for clk_period*10;
--		nrst <= '0';
--		wait for clk_period*10;	
--		nrst <= '1';

      wait;
   end process;

END;

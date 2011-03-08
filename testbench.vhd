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
 
ENTITY testbench IS
END testbench;
 
ARCHITECTURE behavior OF testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_avr_core_v8
    PORT(
         nrst : IN  std_logic;
         clk : IN  std_logic;
         porta : INOUT  std_logic_vector(7 downto 0);
         portb : INOUT  std_logic_vector(7 downto 0);
         rxd : IN  std_logic;
         txd : OUT  std_logic;
         INTx : IN  std_logic_vector(7 downto 0);
         TMS : IN  std_logic;
         TCK : IN  std_logic;
         TDI : IN  std_logic;
         TDO : OUT  std_logic;
         TRSTn : IN  std_logic
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

	--BiDirs
   signal porta : std_logic_vector(7 downto 0);
   signal portb : std_logic_vector(7 downto 0);

 	--Outputs
   signal txd : std_logic;
   signal TDO : std_logic;

   -- Clock period definitions
   constant clk_period : time := 1us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_avr_core_v8 PORT MAP (
          nrst => nrst,
          clk => clk,
          porta => porta,
          portb => portb,
          rxd => rxd,
          txd => txd,
          INTx => INTx,
          TMS => TMS,
          TCK => TCK,
          TDI => TDI,
          TDO => TDO,
          TRSTn => TRSTn
        );

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
      wait for 10ms;	

      wait for clk_period*10;

      -- insert stimulus here 
		nrst <= '1';

      wait;
   end process;

END;

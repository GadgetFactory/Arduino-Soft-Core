----------------------------------------------------------------------------------
-- Company: Gadget Factory
-- Engineer: Jack Gassett
-- 
-- Create Date:    3/21/2010 
-- Design Name: 
-- Module Name:    papilio-core-template - Behavioral 
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
-- Use this template as the basis for making your own VHDL cores that plug into the AVR8 Soft Processor.
--
-- License Creative Commons Attribution
-- Please give attribution to the original author and Gadget Factory (www.gadgetfactory.net)
-- This work is licensed under the Creative Commons Attribution 3.0 United States License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/us/ or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity papilio_core_template is
	Generic (
				--Default base location in the I/O address space for this core. 
				io_base_address_generic : STD_LOGIC_VECTOR (15 downto 0) := x"1000"
	);  
	Port ( 
			-- begin Signals required by AVR8 for this core, do not modify.
			nReset 		: in  STD_LOGIC;
			clk 			: in  STD_LOGIC;
			adr 			: in  STD_LOGIC_VECTOR (15 downto 0);
			dbus_in 		: in  STD_LOGIC_VECTOR (7 downto 0);
			dbus_out 	: out  STD_LOGIC_VECTOR (7 downto 0);
			iore 			: in  STD_LOGIC;
			iowe 			: in  STD_LOGIC;
			out_en		: out STD_LOGIC;
			-- end Signals required by AVR8 for this core, do not modify.

		--Define signals that you want to go in or out of the peripheral. These are usually going to be connected to extenal pins of the Papilio board.
			--Two Output Signals
			output_sig	: out std_logic_vector (1 downto 0);
			
			--Two Input Signals
			input_sig		: in std_logic_vector (1 downto 0)
	);
end papilio_core_template;

architecture Behavioral of papilio_core_template is

--Define the registers and signals that will be used inside the Core.
	--Control Register is used to control the output signals. Default Value is all zeroes.
		signal control_reg	: std_logic_vector(7 downto 0):= "00000000";
		signal control_addr 	: std_logic_vector(15 downto 0):= io_base_address_generic;
	--Status Register is used to read the input signals. Default Value is all zeroes.
		signal status_reg	: std_logic_vector(7 downto 0):= "00000000";
		signal status_addr 	: std_logic_vector(15 downto 0):= io_base_address_generic + 1;

begin
	--Lets the I/O multiplexer know when to connect this output.
	out_en <= '1' when ((adr=control_addr or adr=status_addr) and iore = '1') else '0';
	
	-- All logic is contained in a process that is synchronized to a common clock.
	Registers:process(clk, nreset)
	begin
		if (nReset = '0') then
			-- If there is a reset then set the registers to zero.
			control_reg <= (others => '0');
			status_reg <= (others => '0');
		elsif (clk='1' and clk'event) then

			--Placing these statements within a clocked process tells the synthesis tools that we want status and control to be data registers (with memory) instead of just signals (combinational).
			status_reg(1 downto 0) <= input_sig; 
			output_sig <= control_reg(1 downto 0);

			-- Write registers when the io_base_address is selected.
			if (iowe = '1') then
				case (adr) is
					when io_base_address_generic =>
						--Write to the Control register
						control_reg <= dbus_in;
												
					when io_base_address_generic + 1 =>
						--Nothing to be done for status register since it cannot be written.

					when others =>
				end case;
			
			-- Read registers when the io_base_address is selected.
			elsif (iore = '1') then
				case (adr) is 
					when io_base_address_generic =>
						--Read the Control register
						dbus_out <= control_reg;
					
					when io_base_address_generic + 1 =>
						--Read the status register
						dbus_out <= status_reg;
					
					when others =>
						--When the base address is not selected for read then do not drive the bus.
						dbus_out <= "ZZZZZZZZ";
				end case;		
			end if;
		end if;
	end process;
end Behavioral;


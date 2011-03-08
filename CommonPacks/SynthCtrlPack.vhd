-- *****************************************************************************************
-- AVR synthesis control package
-- Version 1.32 (Special version for the JTAG OCD)
-- Modified 14.07.2005
-- Designed by Ruslan Lepetenok
-- *****************************************************************************************

library	IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;

package SynthCtrlPack is							

-- Reset generator
constant CSecondClockUsed     : boolean := FALSE;

constant CImplClockSw         : boolean := FALSE;

-- Only for ASICs
constant CSynchLatchUsed      : boolean := FALSE;	

-- Register file
constant CResetRegFile        : boolean := TRUE;

-- External multiplexer size
constant CExtMuxInSize        : positive := 16;

end SynthCtrlPack;

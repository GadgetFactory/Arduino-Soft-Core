/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *WORK_P_0163288296;
char *WORK_P_2421566185;
char *WORK_P_3790043947;
char *WORK_P_3569984867;
char *WORK_P_1957171903;
char *WORK_P_4118952410;
char *WORK_P_3839211099;
char *WORK_P_3331438745;
char *WORK_P_4001478723;
char *IEEE_P_3620187407;
char *WORK_P_1460374938;
char *WORK_P_0975833520;
char *WORK_P_3914432658;
char *UNISIM_P_0947159679;
char *WORK_P_4267060819;
char *WORK_P_3704142522;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *UNISIM_P_3222816464;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_0947159679_init();
    work_p_0163288296_init();
    work_p_4118952410_init();
    work_p_3914432658_init();
    work_p_4267060819_init();
    work_p_4001478723_init();
    work_p_3704142522_init();
    work_p_0975833520_init();
    work_p_3839211099_init();
    work_p_3331438745_init();
    work_p_1460374938_init();
    unisim_p_3222816464_init();
    unisim_a_1490675510_1976025627_init();
    unisim_a_0780662263_2014779070_init();
    unisim_a_0850834979_2152628908_init();
    unisim_a_0714155612_2768510774_init();
    unisim_a_0018426790_2768510774_init();
    unisim_a_1297477671_0429821216_init();
    unisim_a_3609198924_2584565154_init();
    work_a_1115661198_3212880686_init();
    work_a_0526290820_3212880686_init();
    work_a_3997981079_1516540902_init();
    work_a_3412061098_1516540902_init();
    work_a_2488808939_1516540902_init();
    work_a_2105612044_1516540902_init();
    work_a_3045248018_1516540902_init();
    work_a_2789023943_1516540902_init();
    work_a_4207921913_3708392848_init();
    work_a_2929035646_1516540902_init();
    work_a_1746867657_1516540902_init();
    work_a_2429676943_1516540902_init();
    work_a_1178642793_1516540902_init();
    work_a_3142403736_1516540902_init();
    work_a_3129945263_1516540902_init();
    work_a_3217046058_1516540902_init();
    work_a_3187822621_1516540902_init();
    work_a_0939588377_1516540902_init();
    work_a_2611088008_1516540902_init();
    unisim_a_0032955683_0883528894_init();
    work_a_2808801998_1516540902_init();
    unisim_a_3461265419_0762929208_init();
    unisim_a_2668964867_0762929208_init();
    work_a_0526130289_1516540902_init();
    work_p_3569984867_init();
    work_p_3790043947_init();
    work_p_1957171903_init();
    work_p_2421566185_init();
    work_a_3622899249_1516540902_init();
    work_a_1112806079_1516540902_init();
    work_a_1230537192_1516540902_init();
    work_a_3707608422_1516540902_init();
    work_a_0844995691_1516540902_init();
    work_a_2239630122_1516540902_init();
    work_a_3678939271_1181938964_init();
    work_a_2558412171_1181938964_init();
    work_a_0464918941_1181938964_init();
    work_a_4157842674_1516540902_init();
    work_a_4145475592_3708392848_init();
    work_a_0961210505_1516540902_init();
    work_a_1596039431_1516540902_init();
    work_a_0938037797_1516540902_init();
    work_a_1747002000_3708392848_init();
    unisim_a_3813588966_1849986472_init();
    work_a_1949178628_2372691052_init();


    xsi_register_tops("work_a_1949178628_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_0163288296 = xsi_get_engine_memory("work_p_0163288296");
    WORK_P_2421566185 = xsi_get_engine_memory("work_p_2421566185");
    WORK_P_3790043947 = xsi_get_engine_memory("work_p_3790043947");
    WORK_P_3569984867 = xsi_get_engine_memory("work_p_3569984867");
    WORK_P_1957171903 = xsi_get_engine_memory("work_p_1957171903");
    WORK_P_4118952410 = xsi_get_engine_memory("work_p_4118952410");
    WORK_P_3839211099 = xsi_get_engine_memory("work_p_3839211099");
    WORK_P_3331438745 = xsi_get_engine_memory("work_p_3331438745");
    WORK_P_4001478723 = xsi_get_engine_memory("work_p_4001478723");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_1460374938 = xsi_get_engine_memory("work_p_1460374938");
    WORK_P_0975833520 = xsi_get_engine_memory("work_p_0975833520");
    WORK_P_3914432658 = xsi_get_engine_memory("work_p_3914432658");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    WORK_P_4267060819 = xsi_get_engine_memory("work_p_4267060819");
    WORK_P_3704142522 = xsi_get_engine_memory("work_p_3704142522");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");

    return xsi_run_simulation(argc, argv);

}

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

/* This file is designed for use with ISim build 0x79f3f3a8 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "X:/Papilio/workarea/Arduino_Soft_Core/sources/MemArbAndMux/MemRdMux.vhd";
extern char *WORK_P_4001478723;



static void work_a_1596039431_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 2220);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(32, ng0);
    t1 = ((WORK_P_4001478723) + 740U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t1 = (t0 + 4099);
    *((int *)t1) = 0;
    t3 = (t0 + 4103);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB2:    if (t10 <= t11)
        goto LAB3;

LAB5:    t1 = (t0 + 2168);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t4 = (t0 + 4099);
    t12 = *((int *)t4);
    t13 = (t12 - 1);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, *((int *)t4));
    t15 = (16U * t14);
    t16 = (0 + t15);
    t17 = (t16 + 8U);
    t6 = (t5 + t17);
    t18 = *((unsigned char *)t6);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 4099);
    t10 = *((int *)t1);
    t2 = (t0 + 4103);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB10:    t8 = (t10 + 1);
    t10 = t8;
    t3 = (t0 + 4099);
    *((int *)t3) = t10;
    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 732U);
    t20 = *((char **)t7);
    t7 = (t0 + 4099);
    t21 = *((int *)t7);
    t22 = (t21 - 1);
    t23 = (t22 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, *((int *)t7));
    t24 = (16U * t23);
    t25 = (0 + t24);
    t26 = (t25 + 0U);
    t27 = (t20 + t26);
    t28 = (t0 + 2220);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t27, 8U);
    xsi_driver_first_trans_fast(t28);
    xsi_set_current_line(35, ng0);
    goto LAB5;

LAB9:    goto LAB7;

}

static void work_a_1596039431_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t1 = (t0 + 2256);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = ((WORK_P_4001478723) + 740U);
    t2 = *((char **)t1);
    t7 = *((int *)t2);
    t8 = (t7 - 1);
    t1 = (t0 + 4107);
    *((int *)t1) = 0;
    t3 = (t0 + 4111);
    *((int *)t3) = t8;
    t9 = 0;
    t10 = t8;

LAB2:    if (t9 <= t10)
        goto LAB3;

LAB5:    t1 = (t0 + 2176);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t4 = (t0 + 4107);
    t11 = *((int *)t4);
    t12 = (t11 - 1);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, *((int *)t4));
    t14 = (16U * t13);
    t15 = (0 + t14);
    t16 = (t15 + 8U);
    t6 = (t5 + t16);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 4107);
    t9 = *((int *)t1);
    t2 = (t0 + 4111);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB5;

LAB10:    t7 = (t9 + 1);
    t9 = t7;
    t3 = (t0 + 4107);
    *((int *)t3) = t9;
    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t19 = (t0 + 1100U);
    t20 = *((char **)t19);
    t19 = (t0 + 2256);
    t21 = (t19 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8U);
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(47, ng0);
    goto LAB5;

LAB9:    goto LAB7;

}


extern void work_a_1596039431_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1596039431_1516540902_p_0,(void *)work_a_1596039431_1516540902_p_1};
	xsi_register_didat("work_a_1596039431_1516540902", "isim/testbench_isim_beh.exe.sim/work/a_1596039431_1516540902.didat");
	xsi_register_executes(pe);
}

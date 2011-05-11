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
static const char *ng0 = "X:/Papilio/workarea/Arduino_Soft_Core/sources/MemArbAndMux/ArbiterAndMux.vhd";
extern char *WORK_P_4001478723;



static void work_a_0961210505_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2868);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t5 = t1;
    memset(t5, (unsigned char)2, 3U);
    t6 = (t0 + 2936);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1328U);
    t6 = *((char **)t5);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 660U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1420U);
    t7 = *((char **)t5);
    t5 = (t0 + 2936);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

}

static void work_a_0961210505_1516540902_p_1(char *t0)
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
    unsigned char t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t3 = (t0 + 2972);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(53, ng0);
    t1 = ((WORK_P_4001478723) + 672U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t1 = (t0 + 5830);
    *((int *)t1) = 0;
    t3 = (t0 + 5834);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB2:    if (t10 <= t11)
        goto LAB3;

LAB5:    t1 = (t0 + 2876);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t4 = (t0 + 5830);
    t13 = *((int *)t4);
    t14 = (t13 - 2);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t4));
    t16 = (32U * t15);
    t17 = (0 + t16);
    t18 = (t17 + 24U);
    t6 = (t5 + t18);
    t19 = *((unsigned char *)t6);
    t20 = (t19 == (unsigned char)3);
    if (t20 == 1)
        goto LAB9;

LAB10:    t7 = (t0 + 776U);
    t21 = *((char **)t7);
    t7 = (t0 + 5830);
    t22 = *((int *)t7);
    t23 = (t22 - 2);
    t24 = (t23 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t7));
    t25 = (32U * t24);
    t26 = (0 + t25);
    t27 = (t26 + 25U);
    t28 = (t21 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)3);
    t12 = t30;

LAB11:    if (t12 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 5830);
    t10 = *((int *)t1);
    t2 = (t0 + 5834);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB13:    t8 = (t10 + 1);
    t10 = t8;
    t3 = (t0 + 5830);
    *((int *)t3) = t10;
    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);
    t31 = (t0 + 5830);
    t32 = *((int *)t31);
    t33 = (t32 - 2);
    t34 = (t33 * -1);
    t35 = (1 * t34);
    t36 = (0U + t35);
    t37 = (t0 + 2972);
    t38 = (t37 + 32U);
    t39 = *((char **)t38);
    t40 = (t39 + 40U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)3;
    xsi_driver_first_trans_delta(t37, t36, 1, 0LL);
    xsi_set_current_line(56, ng0);
    goto LAB5;

LAB9:    t12 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

}

static void work_a_0961210505_1516540902_p_2(char *t0)
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
    unsigned char t12;
    unsigned char t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t3 = (t0 + 3008);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(65, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3044);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3080);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3116);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = ((WORK_P_4001478723) + 672U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t1 = (t0 + 5838);
    *((int *)t1) = 0;
    t3 = (t0 + 5842);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB2:    if (t10 <= t11)
        goto LAB3;

LAB5:    t1 = (t0 + 2884);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1328U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (1U * t16);
    t18 = (0 + t17);
    t3 = (t2 + t18);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB7:
LAB4:    t1 = (t0 + 5838);
    t10 = *((int *)t1);
    t2 = (t0 + 5842);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB15:    t8 = (t10 + 1);
    t10 = t8;
    t3 = (t0 + 5838);
    *((int *)t3) = t10;
    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1512U);
    t6 = *((char **)t4);
    t4 = (t0 + 5838);
    t14 = *((int *)t4);
    t15 = (t14 - 2);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t4));
    t17 = (1U * t16);
    t18 = (0 + t17);
    t7 = (t6 + t18);
    t19 = *((unsigned char *)t7);
    t20 = (t19 == (unsigned char)3);
    if (t20 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB7;

LAB9:    xsi_set_current_line(72, ng0);
    t21 = (t0 + 776U);
    t22 = *((char **)t21);
    t21 = (t0 + 5838);
    t23 = *((int *)t21);
    t24 = (t23 - 2);
    t25 = (t24 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t21));
    t26 = (32U * t25);
    t27 = (0 + t26);
    t28 = (t27 + 0U);
    t29 = (t22 + t28);
    t30 = (t0 + 3008);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    memcpy(t34, t29, 16U);
    xsi_driver_first_trans_fast_port(t30);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (32U * t16);
    t18 = (0 + t17);
    t25 = (t18 + 16U);
    t3 = (t2 + t25);
    t4 = (t0 + 3044);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (32U * t16);
    t18 = (0 + t17);
    t25 = (t18 + 24U);
    t3 = (t2 + t25);
    t12 = *((unsigned char *)t3);
    t4 = (t0 + 3080);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t12;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (32U * t16);
    t18 = (0 + t17);
    t25 = (t18 + 25U);
    t3 = (t2 + t25);
    t12 = *((unsigned char *)t3);
    t4 = (t0 + 3116);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t12;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t4 = (t0 + 5838);
    t14 = *((int *)t4);
    t15 = (t14 - 2);
    t25 = (t15 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t4));
    t26 = (32U * t25);
    t27 = (0 + t26);
    t28 = (t27 + 0U);
    t6 = (t5 + t28);
    t7 = (t0 + 3008);
    t21 = (t7 + 32U);
    t22 = *((char **)t21);
    t29 = (t22 + 40U);
    t30 = *((char **)t29);
    memcpy(t30, t6, 16U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (32U * t16);
    t18 = (0 + t17);
    t25 = (t18 + 16U);
    t3 = (t2 + t25);
    t4 = (t0 + 3044);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (32U * t16);
    t18 = (0 + t17);
    t25 = (t18 + 24U);
    t3 = (t2 + t25);
    t12 = *((unsigned char *)t3);
    t4 = (t0 + 3080);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t12;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5838);
    t8 = *((int *)t1);
    t9 = (t8 - 2);
    t16 = (t9 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t1));
    t17 = (32U * t16);
    t18 = (0 + t17);
    t25 = (t18 + 25U);
    t3 = (t2 + t25);
    t12 = *((unsigned char *)t3);
    t4 = (t0 + 3116);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t12;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB13;

}

static void work_a_0961210505_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    unsigned char t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    xsi_set_current_line(91, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t3 = (t0 + 3152);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    if (2 > 0)
        goto LAB11;

LAB12:    if (-1 == -1)
        goto LAB16;

LAB17:    t10 = 2;

LAB13:    t11 = (t10 - 2);
    t12 = (t11 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, t10);
    t13 = (32U * t12);
    t14 = (0 + t13);
    t15 = (t14 + 24U);
    t1 = (t2 + t15);
    t16 = *((unsigned char *)t1);
    t17 = (t16 == (unsigned char)3);
    if (t17 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    if (2 > 0)
        goto LAB18;

LAB19:    if (-1 == -1)
        goto LAB23;

LAB24:    t18 = 2;

LAB20:    t19 = (t18 - 2);
    t20 = (t19 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, t18);
    t21 = (32U * t20);
    t22 = (0 + t21);
    t23 = (t22 + 25U);
    t3 = (t4 + t23);
    t24 = *((unsigned char *)t3);
    t25 = (t24 == (unsigned char)3);
    t9 = t25;

LAB10:    if (t9 == 1)
        goto LAB5;

LAB6:    t8 = (unsigned char)0;

LAB7:    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(95, ng0);
    t1 = ((WORK_P_4001478723) + 672U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 - 1);
    t1 = (t0 + 5846);
    *((int *)t1) = 1;
    t3 = (t0 + 5850);
    *((int *)t3) = t11;
    t18 = 1;
    t19 = t11;

LAB25:    if (t18 <= t19)
        goto LAB26;

LAB28:    t1 = (t0 + 2892);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 3152);
    t7 = (t5 + 32U);
    t28 = *((char **)t7);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    goto LAB3;

LAB5:    t5 = (t0 + 1328U);
    t6 = *((char **)t5);
    t26 = *((unsigned char *)t6);
    t27 = (t26 == (unsigned char)3);
    t8 = t27;
    goto LAB7;

LAB8:    t9 = (unsigned char)1;
    goto LAB10;

LAB11:    if (-1 == 1)
        goto LAB14;

LAB15:    t10 = 0;
    goto LAB13;

LAB14:    t10 = 2;
    goto LAB13;

LAB16:    t10 = 0;
    goto LAB13;

LAB18:    if (-1 == 1)
        goto LAB21;

LAB22:    t18 = 0;
    goto LAB20;

LAB21:    t18 = 2;
    goto LAB20;

LAB23:    t18 = 0;
    goto LAB20;

LAB26:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t4 = (t0 + 5846);
    t31 = *((int *)t4);
    t32 = (t31 - 2);
    t12 = (t32 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t4));
    t13 = (32U * t12);
    t14 = (0 + t13);
    t15 = (t14 + 24U);
    t6 = (t5 + t15);
    t16 = *((unsigned char *)t6);
    t17 = (t16 == (unsigned char)3);
    if (t17 == 1)
        goto LAB35;

LAB36:    t7 = (t0 + 776U);
    t28 = *((char **)t7);
    t7 = (t0 + 5846);
    t33 = *((int *)t7);
    t34 = (t33 - 2);
    t20 = (t34 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t7));
    t21 = (32U * t20);
    t22 = (0 + t21);
    t23 = (t22 + 25U);
    t29 = (t28 + t23);
    t24 = *((unsigned char *)t29);
    t25 = (t24 == (unsigned char)3);
    t9 = t25;

LAB37:    if (t9 == 1)
        goto LAB32;

LAB33:    t8 = (unsigned char)0;

LAB34:    if (t8 != 0)
        goto LAB29;

LAB31:
LAB30:
LAB27:    t1 = (t0 + 5846);
    t18 = *((int *)t1);
    t2 = (t0 + 5850);
    t19 = *((int *)t2);
    if (t18 == t19)
        goto LAB28;

LAB47:    t10 = (t18 + 1);
    t18 = t10;
    t3 = (t0 + 5846);
    *((int *)t3) = t18;
    goto LAB25;

LAB29:    xsi_set_current_line(97, ng0);
    t65 = (t0 + 5846);
    t69 = *((int *)t65);
    t70 = (t69 - 2);
    t71 = (t70 * -1);
    t72 = (1 * t71);
    t73 = (0U + t72);
    t74 = (t0 + 3152);
    t75 = (t74 + 32U);
    t76 = *((char **)t75);
    t77 = (t76 + 40U);
    t78 = *((char **)t77);
    *((unsigned char *)t78) = (unsigned char)3;
    xsi_driver_first_trans_delta(t74, t73, 1, 0LL);
    goto LAB30;

LAB32:    t30 = (t0 + 1420U);
    t35 = *((char **)t30);
    t30 = (t0 + 5846);
    t36 = *((int *)t30);
    t37 = (t36 - 1);
    t38 = (2 - t37);
    xsi_vhdl_check_range_of_slice(2, 0, -1, t37, 0, -1);
    t39 = (t38 * 1U);
    t40 = (0 + t39);
    t41 = (t35 + t40);
    t42 = (t0 + 5846);
    t43 = *((int *)t42);
    t44 = (t43 - 1);
    t45 = (0 - t44);
    t46 = (t45 * -1);
    t46 = (t46 + 1);
    t47 = (1U * t46);
    t48 = (t0 + 1684U);
    t49 = *((char **)t48);
    t48 = (t0 + 5846);
    t50 = *((int *)t48);
    t51 = (t50 - 1);
    t52 = (2 - t51);
    xsi_vhdl_check_range_of_slice(2, 0, -1, t51, 0, -1);
    t53 = (t52 * 1U);
    t54 = (0 + t53);
    t55 = (t49 + t54);
    t56 = (t0 + 5846);
    t57 = *((int *)t56);
    t58 = (t57 - 1);
    t59 = (0 - t58);
    t60 = (t59 * -1);
    t60 = (t60 + 1);
    t61 = (1U * t60);
    t27 = 1;
    if (t47 == t61)
        goto LAB41;

LAB42:    t27 = 0;

LAB43:    if ((!(t27)) == 1)
        goto LAB38;

LAB39:    t65 = (t0 + 1328U);
    t66 = *((char **)t65);
    t67 = *((unsigned char *)t66);
    t68 = (t67 == (unsigned char)3);
    t26 = t68;

LAB40:    t8 = t26;
    goto LAB34;

LAB35:    t9 = (unsigned char)1;
    goto LAB37;

LAB38:    t26 = (unsigned char)1;
    goto LAB40;

LAB41:    t62 = 0;

LAB44:    if (t62 < t47)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t63 = (t41 + t62);
    t64 = (t55 + t62);
    if (*((unsigned char *)t63) != *((unsigned char *)t64))
        goto LAB42;

LAB46:    t62 = (t62 + 1);
    goto LAB44;

}


extern void work_a_0961210505_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0961210505_1516540902_p_0,(void *)work_a_0961210505_1516540902_p_1,(void *)work_a_0961210505_1516540902_p_2,(void *)work_a_0961210505_1516540902_p_3};
	xsi_register_didat("work_a_0961210505_1516540902", "isim/testbench_isim_beh.exe.sim/work/a_0961210505_1516540902.didat");
	xsi_register_executes(pe);
}

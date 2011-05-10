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
static const char *ng0 = "X:/Papilio/GadgetFactory-Arduino-Soft-Core-06f1ba4/sources/Core/io_reg_file.vhd";
extern char *IEEE_P_3620187407;
extern char *WORK_P_4118952410;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_3045248018_1516540902_p_0(char *t0)
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
    int t15;
    int t16;
    unsigned char t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned char t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4820);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 4944);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 568U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 9726);
    *((int *)t5) = 7;
    t7 = (t0 + 9730);
    *((int *)t7) = 0;
    t15 = 7;
    t16 = 0;

LAB13:    if (t15 >= t16)
        goto LAB14;

LAB16:    goto LAB11;

LAB14:    xsi_set_current_line(59, ng0);
    t8 = (t0 + 1328U);
    t9 = *((char **)t8);
    t8 = (t0 + 9726);
    t18 = *((int *)t8);
    t19 = (t18 - 7);
    t20 = (t19 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t8));
    t21 = (1U * t20);
    t22 = (0 + t21);
    t10 = (t9 + t22);
    t23 = *((unsigned char *)t10);
    t24 = (t23 == (unsigned char)3);
    if (t24 == 1)
        goto LAB20;

LAB21:    t26 = (t0 + 868U);
    t27 = *((char **)t26);
    t26 = (t0 + 9320U);
    t28 = ((WORK_P_4118952410) + 1080U);
    t29 = *((char **)t28);
    t28 = ((WORK_P_4118952410) + 15244U);
    t30 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t27, t26, t29, t28);
    if (t30 == 1)
        goto LAB23;

LAB24:    t25 = (unsigned char)0;

LAB25:    t17 = t25;

LAB22:    if (t17 != 0)
        goto LAB17;

LAB19:
LAB18:
LAB15:    t1 = (t0 + 9726);
    t15 = *((int *)t1);
    t2 = (t0 + 9730);
    t16 = *((int *)t2);
    if (t15 == t16)
        goto LAB16;

LAB29:    t18 = (t15 + -1);
    t15 = t18;
    t5 = (t0 + 9726);
    *((int *)t5) = t15;
    goto LAB13;

LAB17:    xsi_set_current_line(60, ng0);
    t31 = (t0 + 960U);
    t35 = *((char **)t31);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)3);
    if (t37 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 9726);
    t18 = *((int *)t1);
    t19 = (t18 - 7);
    t20 = (t19 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t1));
    t21 = (1U * t20);
    t22 = (0 + t21);
    t5 = (t2 + t22);
    t3 = *((unsigned char *)t5);
    t6 = (t0 + 9726);
    t39 = *((int *)t6);
    t40 = (t39 - 7);
    t41 = (t40 * -1);
    t42 = (1 * t41);
    t43 = (0U + t42);
    t7 = (t0 + 4944);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t26 = *((char **)t10);
    *((unsigned char *)t26) = t3;
    xsi_driver_first_trans_delta(t7, t43, 1, 0LL);

LAB27:    goto LAB18;

LAB20:    t17 = (unsigned char)1;
    goto LAB22;

LAB23:    t31 = (t0 + 960U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    t34 = (t33 == (unsigned char)3);
    t25 = t34;
    goto LAB25;

LAB26:    xsi_set_current_line(61, ng0);
    t31 = (t0 + 1052U);
    t38 = *((char **)t31);
    t31 = (t0 + 9726);
    t39 = *((int *)t31);
    t40 = (t39 - 7);
    t41 = (t40 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t31));
    t42 = (1U * t41);
    t43 = (0 + t42);
    t44 = (t38 + t43);
    t45 = *((unsigned char *)t44);
    t46 = (t0 + 9726);
    t47 = *((int *)t46);
    t48 = (t47 - 7);
    t49 = (t48 * -1);
    t50 = (1 * t49);
    t51 = (0U + t50);
    t52 = (t0 + 4944);
    t53 = (t52 + 32U);
    t54 = *((char **)t53);
    t55 = (t54 + 40U);
    t56 = *((char **)t55);
    *((unsigned char *)t56) = t45;
    xsi_driver_first_trans_delta(t52, t51, 1, 0LL);
    goto LAB27;

}

static void work_a_3045248018_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4828);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3045248018_1516540902_p_2(char *t0)
{
    char t1[16];
    char t5[16];
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064U);
    t4 = *((char **)t2);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 9464U);
    t8 = (t0 + 9480U);
    t2 = xsi_base_array_concat(t2, t5, t6, (char)97, t3, t7, (char)97, t4, t8, (char)101);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t1, t2, t5, 1);
    t10 = (t0 + 5016);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4836);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3045248018_1516540902_p_3(char *t0)
{
    char t1[16];
    char t5[16];
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064U);
    t4 = *((char **)t2);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 9464U);
    t8 = (t0 + 9480U);
    t2 = xsi_base_array_concat(t2, t5, t6, (char)97, t3, t7, (char)97, t4, t8, (char)101);
    t9 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t1, t2, t5, 1);
    t10 = (t0 + 5052);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4844);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3045248018_1516540902_p_4(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2340U);
    t11 = *((char **)t10);
    t10 = (t0 + 5088);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 4852);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2432U);
    t5 = *((char **)t1);
    t1 = (t0 + 5088);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3045248018_1516540902_p_5(char *t0)
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
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4860);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(81, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 5124);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(83, ng0);
    t5 = (t0 + 1696U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 868U);
    t7 = *((char **)t5);
    t5 = (t0 + 9320U);
    t8 = ((WORK_P_4118952410) + 944U);
    t9 = *((char **)t8);
    t8 = ((WORK_P_4118952410) + 15212U);
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t5, t9, t8);
    if (t17 == 1)
        goto LAB16;

LAB17:    t16 = (unsigned char)0;

LAB18:    t13 = t16;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 568U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 960U);
    t21 = *((char **)t10);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    if (t23 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t29 = (15 - 7);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t5 = (t0 + 5124);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB20:    goto LAB11;

LAB13:    t13 = (unsigned char)1;
    goto LAB15;

LAB16:    t10 = (t0 + 960U);
    t18 = *((char **)t10);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t16 = t20;
    goto LAB18;

LAB19:    xsi_set_current_line(85, ng0);
    t10 = (t0 + 1052U);
    t24 = *((char **)t10);
    t10 = (t0 + 5124);
    t25 = (t10 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB20;

}

static void work_a_3045248018_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 5160);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4868);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3045248018_1516540902_p_7(char *t0)
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
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4876);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(99, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 5196);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 1696U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 868U);
    t7 = *((char **)t5);
    t5 = (t0 + 9320U);
    t8 = ((WORK_P_4118952410) + 1012U);
    t9 = *((char **)t8);
    t8 = ((WORK_P_4118952410) + 15228U);
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t5, t9, t8);
    if (t17 == 1)
        goto LAB16;

LAB17:    t16 = (unsigned char)0;

LAB18:    t13 = t16;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 568U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(102, ng0);
    t10 = (t0 + 960U);
    t21 = *((char **)t10);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    if (t23 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t29 = (15 - 15);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t5 = (t0 + 5196);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB20:    goto LAB11;

LAB13:    t13 = (unsigned char)1;
    goto LAB15;

LAB16:    t10 = (t0 + 960U);
    t18 = *((char **)t10);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t16 = t20;
    goto LAB18;

LAB19:    xsi_set_current_line(103, ng0);
    t10 = (t0 + 1052U);
    t24 = *((char **)t10);
    t10 = (t0 + 5196);
    t25 = (t10 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB20;

}

static void work_a_3045248018_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(112, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 5232);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4884);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3045248018_1516540902_p_9(char *t0)
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
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4892);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(118, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 5268);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(120, ng0);
    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t5 = (t0 + 9320U);
    t7 = ((WORK_P_4118952410) + 876U);
    t8 = *((char **)t7);
    t7 = ((WORK_P_4118952410) + 15196U);
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t5, t8, t7);
    if (t14 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 568U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(121, ng0);
    t9 = (t0 + 1052U);
    t17 = *((char **)t9);
    t9 = (t0 + 5268);
    t18 = (t9 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB13:    t9 = (t0 + 960U);
    t10 = *((char **)t9);
    t15 = *((unsigned char *)t10);
    t16 = (t15 == (unsigned char)3);
    t13 = t16;
    goto LAB15;

}

static void work_a_3045248018_1516540902_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 5304);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4900);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3045248018_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3045248018_1516540902_p_0,(void *)work_a_3045248018_1516540902_p_1,(void *)work_a_3045248018_1516540902_p_2,(void *)work_a_3045248018_1516540902_p_3,(void *)work_a_3045248018_1516540902_p_4,(void *)work_a_3045248018_1516540902_p_5,(void *)work_a_3045248018_1516540902_p_6,(void *)work_a_3045248018_1516540902_p_7,(void *)work_a_3045248018_1516540902_p_8,(void *)work_a_3045248018_1516540902_p_9,(void *)work_a_3045248018_1516540902_p_10};
	xsi_register_didat("work_a_3045248018_1516540902", "isim/testbench_isim_beh.exe.sim/work/a_3045248018_1516540902.didat");
	xsi_register_executes(pe);
}

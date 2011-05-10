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
static const char *ng0 = "X:/Papilio/GadgetFactory-Arduino-Soft-Core-06f1ba4/sources/Peripheral/i2c_master/i2c_master_bit_ctrl.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3499444699_sub_1438165383_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );


static void work_a_3678939271_1181938964_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8108);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 8280);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 2388U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 8280);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t12 = (t8 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_3678939271_1181938964_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8116);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 8316);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 2388U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 2664U);
    t7 = *((char **)t2);
    t12 = *((unsigned char *)t7);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t2 = (t0 + 2756U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t15);
    t17 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t14, t16);
    t2 = (t0 + 3308U);
    t18 = *((char **)t2);
    t19 = *((unsigned char *)t18);
    t2 = (t0 + 2756U);
    t20 = *((char **)t2);
    t21 = *((unsigned char *)t20);
    t22 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t21);
    t23 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t19, t22);
    t24 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t17, t23);
    t2 = (t0 + 8316);
    t25 = (t2 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t24;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_3678939271_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(221, ng0);

LAB3:    t1 = (t0 + 2940U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2756U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 2388U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t9);
    t1 = (t0 + 8352);
    t11 = (t1 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t1);

LAB2:    t15 = (t0 + 8124);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3678939271_1181938964_p_3(char *t0)
{
    char t28[16];
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
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8132);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(227, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 8388);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(228, ng0);
    t1 = (t0 + 8424);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t16 = *((unsigned char *)t6);
    t17 = (t16 == (unsigned char)3);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3492U);
    t7 = *((char **)t2);
    t2 = (t0 + 18768U);
    t18 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t7, t2, 0);
    t15 = t18;

LAB21:    if (t15 == 1)
        goto LAB16;

LAB17:    t8 = (t0 + 1008U);
    t9 = *((char **)t8);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)2);
    t14 = t20;

LAB18:    if (t14 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 3216U);
    t10 = *((char **)t8);
    t21 = *((unsigned char *)t10);
    t22 = (t21 == (unsigned char)3);
    t13 = t22;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 3308U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 3492U);
    t2 = *((char **)t1);
    t1 = (t0 + 18768U);
    t5 = ieee_p_3499444699_sub_1438165383_3536714472(IEEE_P_3499444699, t28, t2, t1, 1);
    t6 = (t0 + 8388);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(238, ng0);
    t1 = (t0 + 8424);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(231, ng0);
    t8 = (t0 + 1100U);
    t23 = *((char **)t8);
    t8 = (t0 + 8388);
    t24 = (t8 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t23, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 8424);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    t13 = (unsigned char)1;
    goto LAB15;

LAB16:    t14 = (unsigned char)1;
    goto LAB18;

LAB19:    t15 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 3492U);
    t5 = *((char **)t1);
    t1 = (t0 + 8388);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 8424);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_4(char *t0)
{
    char t21[16];
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
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(257, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8140);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 18944);
    t6 = (t0 + 8460);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 18946);
    t5 = (t0 + 8496);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(265, ng0);
    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    t17 = (0 - 1);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1744U);
    t6 = *((char **)t5);
    t4 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 2332);
    t5 = xsi_base_array_concat(t5, t21, t7, (char)99, t3, (char)99, t4, (char)101);
    t8 = (t0 + 8460);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(266, ng0);
    t1 = (t0 + 3676U);
    t2 = *((char **)t1);
    t17 = (0 - 1);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2020U);
    t6 = *((char **)t5);
    t4 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 2332);
    t5 = xsi_base_array_concat(t5, t21, t7, (char)99, t3, (char)99, t4, (char)101);
    t8 = (t0 + 8496);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 2U);
    xsi_driver_first_trans_fast(t8);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 18948);
    t8 = (t0 + 8460);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(263, ng0);
    t1 = (t0 + 18950);
    t5 = (t0 + 8496);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_5(char *t0)
{
    char t24[16];
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(274, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8148);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(275, ng0);
    t1 = xsi_get_transient_memory(14U);
    memset(t1, 0, 14U);
    t5 = t1;
    memset(t5, (unsigned char)2, 14U);
    t6 = (t0 + 8532);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 14U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1008U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)2);
    t13 = t17;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    t1 = (t0 + 18816U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, 0);
    if (t3 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(282, ng0);
    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    t1 = (t0 + 18816U);
    t5 = ieee_p_3499444699_sub_1438165383_3536714472(IEEE_P_3499444699, t24, t2, t1, 1);
    t6 = (t0 + 8532);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 14U);
    xsi_driver_first_trans_fast(t6);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(278, ng0);
    t2 = xsi_get_transient_memory(14U);
    memset(t2, 0, 14U);
    t8 = t2;
    memset(t8, (unsigned char)2, 14U);
    t9 = (t0 + 8532);
    t10 = (t9 + 32U);
    t18 = *((char **)t10);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 14U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB13:    t13 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(280, ng0);
    t5 = (t0 + 1100U);
    t6 = *((char **)t5);
    t21 = (15 - 15);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t5 = (t6 + t23);
    t7 = (t0 + 8532);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t18 = *((char **)t10);
    memcpy(t18, t5, 14U);
    xsi_driver_first_trans_fast(t7);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_6(char *t0)
{
    char t24[16];
    char t25[16];
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
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(289, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8156);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(290, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t5 = t1;
    memset(t5, (unsigned char)3, 3U);
    t6 = (t0 + 8568);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(291, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)3, 3U);
    t5 = (t0 + 8604);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    t1 = (t0 + 18816U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, 0);
    if (t3 != 0)
        goto LAB13;

LAB14:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(294, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t7 = t2;
    memset(t7, (unsigned char)3, 3U);
    t8 = (t0 + 8568);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(295, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)3, 3U);
    t5 = (t0 + 8604);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

LAB13:    xsi_set_current_line(297, ng0);
    t5 = (t0 + 3768U);
    t6 = *((char **)t5);
    t17 = (2 - 1);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t5 = (t6 + t19);
    t7 = (t0 + 3584U);
    t8 = *((char **)t7);
    t20 = (1 - 1);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t7 = (t8 + t23);
    t4 = *((unsigned char *)t7);
    t10 = ((IEEE_P_2592010699) + 2332);
    t15 = (t25 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t26 = (0 - 1);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t27;
    t9 = xsi_base_array_concat(t9, t24, t10, (char)97, t5, t25, (char)99, t4, (char)101);
    t16 = (t0 + 8568);
    t28 = (t16 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t9, 3U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(298, ng0);
    t1 = (t0 + 3860U);
    t2 = *((char **)t1);
    t17 = (2 - 1);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t5 = (t0 + 3676U);
    t6 = *((char **)t5);
    t20 = (1 - 1);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t6 + t23);
    t3 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t25 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t26 = (0 - 1);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t27;
    t7 = xsi_base_array_concat(t7, t24, t8, (char)97, t1, t25, (char)99, t3, (char)101);
    t10 = (t0 + 8604);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    t28 = (t16 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t7, 3U);
    xsi_driver_first_trans_fast(t10);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(306, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8164);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(307, ng0);
    t1 = (t0 + 8640);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(308, ng0);
    t1 = (t0 + 8676);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(310, ng0);
    t1 = (t0 + 8712);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(311, ng0);
    t1 = (t0 + 8748);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(313, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(320, ng0);
    t1 = (t0 + 3768U);
    t2 = *((char **)t1);
    t15 = (2 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3768U);
    t6 = *((char **)t5);
    t19 = (1 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t5 = (t6 + t22);
    t4 = *((unsigned char *)t5);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 3768U);
    t8 = *((char **)t7);
    t23 = (2 - 2);
    t24 = (t23 * -1);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t7 = (t8 + t26);
    t10 = *((unsigned char *)t7);
    t13 = (t0 + 3768U);
    t14 = *((char **)t13);
    t27 = (0 - 2);
    t28 = (t27 * -1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t13 = (t14 + t30);
    t11 = *((unsigned char *)t13);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t11);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t12);
    t32 = (t0 + 3768U);
    t33 = *((char **)t32);
    t34 = (1 - 2);
    t35 = (t34 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = (t0 + 3768U);
    t40 = *((char **)t39);
    t41 = (0 - 2);
    t42 = (t41 * -1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t39 = (t40 + t44);
    t45 = *((unsigned char *)t39);
    t46 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t38, t45);
    t47 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t31, t46);
    t48 = (t0 + 8640);
    t49 = (t48 + 32U);
    t50 = *((char **)t49);
    t51 = (t50 + 40U);
    t52 = *((char **)t51);
    *((unsigned char *)t52) = t47;
    xsi_driver_first_trans_fast(t48);
    xsi_set_current_line(323, ng0);
    t1 = (t0 + 3860U);
    t2 = *((char **)t1);
    t15 = (2 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3860U);
    t6 = *((char **)t5);
    t19 = (1 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t5 = (t6 + t22);
    t4 = *((unsigned char *)t5);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 3860U);
    t8 = *((char **)t7);
    t23 = (2 - 2);
    t24 = (t23 * -1);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t7 = (t8 + t26);
    t10 = *((unsigned char *)t7);
    t13 = (t0 + 3860U);
    t14 = *((char **)t13);
    t27 = (0 - 2);
    t28 = (t27 * -1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t13 = (t14 + t30);
    t11 = *((unsigned char *)t13);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t11);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t12);
    t32 = (t0 + 3860U);
    t33 = *((char **)t32);
    t34 = (1 - 2);
    t35 = (t34 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = (t0 + 3860U);
    t40 = *((char **)t39);
    t41 = (0 - 2);
    t42 = (t41 * -1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t39 = (t40 + t44);
    t45 = *((unsigned char *)t39);
    t46 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t38, t45);
    t47 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t31, t46);
    t48 = (t0 + 8676);
    t49 = (t48 + 32U);
    t50 = *((char **)t49);
    t51 = (t50 + 40U);
    t52 = *((char **)t51);
    *((unsigned char *)t52) = t47;
    xsi_driver_first_trans_fast(t48);
    xsi_set_current_line(327, ng0);
    t1 = (t0 + 2756U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8712);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(328, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8748);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(314, ng0);
    t2 = (t0 + 8640);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(315, ng0);
    t1 = (t0 + 8676);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(317, ng0);
    t1 = (t0 + 8712);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(318, ng0);
    t1 = (t0 + 8748);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(338, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8172);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(339, ng0);
    t1 = (t0 + 8784);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(340, ng0);
    t1 = (t0 + 8820);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(342, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(346, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 3032U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t9);
    t1 = (t0 + 2756U);
    t6 = *((char **)t1);
    t11 = *((unsigned char *)t6);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t11);
    t1 = (t0 + 8784);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(347, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3032U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t9 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t9);
    t1 = (t0 + 2756U);
    t6 = *((char **)t1);
    t11 = *((unsigned char *)t6);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t11);
    t1 = (t0 + 8820);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(343, ng0);
    t2 = (t0 + 8784);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(344, ng0);
    t1 = (t0 + 8820);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(356, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8180);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(357, ng0);
    t1 = (t0 + 8856);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(359, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(362, ng0);
    t1 = (t0 + 4044U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4320U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t4);
    t1 = (t0 + 4136U);
    t6 = *((char **)t1);
    t10 = *((unsigned char *)t6);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t11);
    t1 = (t0 + 8856);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(360, ng0);
    t2 = (t0 + 8856);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_3678939271_1181938964_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(366, ng0);

LAB3:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8892);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8188);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3678939271_1181938964_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;

LAB0:    xsi_set_current_line(375, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8196);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(376, ng0);
    t1 = (t0 + 8928);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(377, ng0);
    t1 = (t0 + 8964);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(383, ng0);
    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(391, ng0);
    t1 = (t0 + 2296U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(394, ng0);
    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2848U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t9 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t9);
    t1 = (t0 + 2480U);
    t6 = *((char **)t1);
    t11 = *((unsigned char *)t6);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t11);
    t1 = (t0 + 8964);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t1);

LAB26:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(380, ng0);
    t2 = (t0 + 8928);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t13 = (t8 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(381, ng0);
    t1 = (t0 + 8964);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(384, ng0);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 4628U);
    t6 = *((char **)t1);
    t9 = 1;
    if (4U == 4U)
        goto LAB19;

LAB20:    t9 = 0;

LAB21:    if (t9 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(387, ng0);
    t1 = (t0 + 8928);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(385, ng0);
    t8 = (t0 + 8928);
    t13 = (t8 + 32U);
    t14 = *((char **)t13);
    t16 = (t14 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB17;

LAB19:    t15 = 0;

LAB22:    if (t15 < 4U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t1 = (t5 + t15);
    t7 = (t6 + t15);
    if (*((unsigned char *)t1) != *((unsigned char *)t7))
        goto LAB20;

LAB24:    t15 = (t15 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(392, ng0);
    t1 = (t0 + 2572U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t1 = (t0 + 2848U);
    t6 = *((char **)t1);
    t10 = *((unsigned char *)t6);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t11);
    t1 = (t0 + 2480U);
    t7 = *((char **)t1);
    t18 = *((unsigned char *)t7);
    t19 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t18);
    t1 = (t0 + 4136U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t1 = (t0 + 4228U);
    t13 = *((char **)t1);
    t21 = *((unsigned char *)t13);
    t22 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t21);
    t23 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t20, t22);
    t24 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t19, t23);
    t1 = (t0 + 8964);
    t14 = (t1 + 32U);
    t16 = *((char **)t14);
    t17 = (t16 + 40U);
    t25 = *((char **)t17);
    *((unsigned char *)t25) = t24;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

}

static void work_a_3678939271_1181938964_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(399, ng0);

LAB3:    t1 = (t0 + 3400U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8204);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3678939271_1181938964_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
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

LAB0:    xsi_set_current_line(405, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8212);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(406, ng0);
    t1 = (t0 + 9036);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(408, ng0);
    t2 = (t0 + 2756U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    if (t11 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(409, ng0);
    t2 = (t0 + 2848U);
    t8 = *((char **)t2);
    t16 = *((unsigned char *)t8);
    t2 = (t0 + 9036);
    t17 = (t2 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

LAB13:    t2 = (t0 + 2940U);
    t7 = *((char **)t2);
    t14 = *((unsigned char *)t7);
    t15 = (t14 == (unsigned char)2);
    t11 = t15;
    goto LAB15;

}

static void work_a_3678939271_1181938964_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    static char *nl0[] = {&&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB37};

LAB0:    xsi_set_current_line(419, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 708U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8220);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(420, ng0);
    t1 = (t0 + 9072);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(421, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(422, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(423, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(424, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(426, ng0);
    t2 = (t0 + 824U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3400U);
    t7 = *((char **)t2);
    t14 = *((unsigned char *)t7);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;

LAB15:    if (t11 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(433, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(435, ng0);
    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:
LAB17:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 732U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(427, ng0);
    t2 = (t0 + 9072);
    t8 = (t2 + 32U);
    t16 = *((char **)t8);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(428, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(429, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(430, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(431, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    t11 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(436, ng0);
    t1 = (t0 + 2296U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t1 = (char *)((nl0) + t9);
    goto **((char **)t1);

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(439, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 4560U);
    t8 = *((char **)t6);
    t19 = xsi_mem_cmp(t8, t7, 4U);
    if (t19 == 1)
        goto LAB40;

LAB45:    t6 = (t0 + 4628U);
    t16 = *((char **)t6);
    t20 = xsi_mem_cmp(t16, t7, 4U);
    if (t20 == 1)
        goto LAB41;

LAB46:    t6 = (t0 + 4764U);
    t17 = *((char **)t6);
    t21 = xsi_mem_cmp(t17, t7, 4U);
    if (t21 == 1)
        goto LAB42;

LAB47:    t6 = (t0 + 4696U);
    t18 = *((char **)t6);
    t22 = xsi_mem_cmp(t18, t7, 4U);
    if (t22 == 1)
        goto LAB43;

LAB48:
LAB44:    xsi_set_current_line(444, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB39:    xsi_set_current_line(447, ng0);
    t1 = (t0 + 2388U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9144);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(448, ng0);
    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9180);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(449, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(453, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(454, ng0);
    t1 = (t0 + 2388U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9144);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(455, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(456, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB22:    xsi_set_current_line(459, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(460, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(461, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(462, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB23:    xsi_set_current_line(465, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(466, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(467, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(468, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB24:    xsi_set_current_line(471, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(472, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(473, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(474, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB25:    xsi_set_current_line(477, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(478, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(479, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(480, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(481, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB26:    xsi_set_current_line(485, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(486, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(487, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(488, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB27:    xsi_set_current_line(491, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(492, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(493, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(494, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB28:    xsi_set_current_line(497, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(498, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(499, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(500, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB29:    xsi_set_current_line(503, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(504, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(505, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(506, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(507, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB30:    xsi_set_current_line(511, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(512, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(513, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(514, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB31:    xsi_set_current_line(517, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(518, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(519, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(520, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB32:    xsi_set_current_line(523, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(524, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(525, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(526, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB33:    xsi_set_current_line(529, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(530, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(531, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(532, ng0);
    t1 = (t0 + 9180);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(533, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB34:    xsi_set_current_line(537, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(538, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(539, ng0);
    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9180);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(540, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB35:    xsi_set_current_line(543, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)16;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(544, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(545, ng0);
    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9180);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(546, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB36:    xsi_set_current_line(550, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)17;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(551, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(552, ng0);
    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9180);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(553, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB37:    xsi_set_current_line(556, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(557, ng0);
    t1 = (t0 + 9108);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(558, ng0);
    t1 = (t0 + 9144);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(559, ng0);
    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9180);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(560, ng0);
    t1 = (t0 + 9216);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB38:    goto LAB19;

LAB40:    xsi_set_current_line(440, ng0);
    t6 = (t0 + 9072);
    t23 = (t6 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB39;

LAB41:    xsi_set_current_line(441, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB42:    xsi_set_current_line(442, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)14;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB43:    xsi_set_current_line(443, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB49:;
}

static void work_a_3678939271_1181938964_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(572, ng0);

LAB3:    t1 = (t0 + 9252);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3678939271_1181938964_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(573, ng0);

LAB3:    t1 = (t0 + 2388U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9288);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8228);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3678939271_1181938964_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(574, ng0);

LAB3:    t1 = (t0 + 9324);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3678939271_1181938964_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(575, ng0);

LAB3:    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9360);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8236);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3678939271_1181938964_init()
{
	static char *pe[] = {(void *)work_a_3678939271_1181938964_p_0,(void *)work_a_3678939271_1181938964_p_1,(void *)work_a_3678939271_1181938964_p_2,(void *)work_a_3678939271_1181938964_p_3,(void *)work_a_3678939271_1181938964_p_4,(void *)work_a_3678939271_1181938964_p_5,(void *)work_a_3678939271_1181938964_p_6,(void *)work_a_3678939271_1181938964_p_7,(void *)work_a_3678939271_1181938964_p_8,(void *)work_a_3678939271_1181938964_p_9,(void *)work_a_3678939271_1181938964_p_10,(void *)work_a_3678939271_1181938964_p_11,(void *)work_a_3678939271_1181938964_p_12,(void *)work_a_3678939271_1181938964_p_13,(void *)work_a_3678939271_1181938964_p_14,(void *)work_a_3678939271_1181938964_p_15,(void *)work_a_3678939271_1181938964_p_16,(void *)work_a_3678939271_1181938964_p_17,(void *)work_a_3678939271_1181938964_p_18};
	xsi_register_didat("work_a_3678939271_1181938964", "isim/testbench_isim_beh.exe.sim/work/a_3678939271_1181938964.didat");
	xsi_register_executes(pe);
}

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
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void unisim_a_1297477671_0429821216_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;
    int64 t12;
    unsigned char t13;
    int64 t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    int t19;
    unsigned char t20;

LAB0:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4572);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t5 = (0 * 1LL);
    t1 = (t0 + 4680);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int64 *)t9) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t2 = (t0 + 2396U);
    t6 = *((char **)t2);
    t5 = *((int64 *)t6);
    t2 = (t0 + 2328U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int64 *)t2) = t5;
    t5 = xsi_get_sim_current_time();
    t1 = (t0 + 2396U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int64 *)t1) = t5;
    t1 = (t0 + 2396U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t1 = (t0 + 2328U);
    t6 = *((char **)t1);
    t10 = *((int64 *)t6);
    t11 = (t5 - t10);
    t1 = (t0 + 2464U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int64 *)t1) = t11;
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t10 = (0 * 1LL);
    t4 = (t5 != t10);
    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t10 = (0 * 1LL);
    t4 = (t5 != t10);
    if (t4 == 1)
        goto LAB15;

LAB16:    t3 = (unsigned char)0;

LAB17:    if (t3 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t10 = (0 * 1LL);
    t13 = (t5 == t10);
    if (t13 == 1)
        goto LAB23;

LAB24:    t4 = (unsigned char)0;

LAB25:    if (t4 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB18;

LAB19:
LAB8:    goto LAB3;

LAB7:    t1 = (t0 + 2464U);
    t8 = *((char **)t1);
    t14 = *((int64 *)t8);
    t1 = (t0 + 4680);
    t9 = (t1 + 32U);
    t15 = *((char **)t9);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int64 *)t17) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    t1 = (t0 + 2464U);
    t6 = *((char **)t1);
    t11 = *((int64 *)t6);
    t1 = (t0 + 1144U);
    t7 = *((char **)t1);
    t12 = *((int64 *)t7);
    t13 = (t11 <= t12);
    t3 = t13;
    goto LAB12;

LAB13:    t14 = (0 * 1LL);
    t1 = (t0 + 4680);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((int64 *)t16) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB15:    t1 = (t0 + 2464U);
    t6 = *((char **)t1);
    t11 = *((int64 *)t6);
    t1 = (t0 + 1144U);
    t7 = *((char **)t1);
    t12 = *((int64 *)t7);
    t13 = (t11 > t12);
    t3 = t13;
    goto LAB17;

LAB18:    t1 = (t0 + 2464U);
    t8 = *((char **)t1);
    t14 = *((int64 *)t8);
    t1 = (t0 + 4680);
    t9 = (t1 + 32U);
    t15 = *((char **)t9);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int64 *)t17) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB20:    t1 = (t0 + 2064U);
    t7 = *((char **)t1);
    t19 = *((int *)t7);
    t20 = (t19 == 1);
    t3 = t20;
    goto LAB22;

LAB23:    t1 = (t0 + 2328U);
    t6 = *((char **)t1);
    t11 = *((int64 *)t6);
    t12 = (0 * 1LL);
    t18 = (t11 != t12);
    t4 = t18;
    goto LAB25;

}

static void unisim_a_1297477671_0429821216_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;

LAB0:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (1.5000000000000000 * t3);
    t1 = (t0 + 4716);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int64 *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 * 9.0999999999999996);
    t9 = (t4 / 10);
    t1 = (t0 + 4752);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int64 *)t8) = t9;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4580);
    *((int *)t1) = 1;

LAB1:    return;
}

static void unisim_a_1297477671_0429821216_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;
    int64 t12;
    unsigned char t13;
    int64 t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    int t19;
    unsigned char t20;

LAB0:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4588);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t5 = (0 * 1LL);
    t1 = (t0 + 4788);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int64 *)t9) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t2 = (t0 + 2600U);
    t6 = *((char **)t2);
    t5 = *((int64 *)t6);
    t2 = (t0 + 2532U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int64 *)t2) = t5;
    t5 = xsi_get_sim_current_time();
    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int64 *)t1) = t5;
    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t1 = (t0 + 2532U);
    t6 = *((char **)t1);
    t10 = *((int64 *)t6);
    t11 = (t5 - t10);
    t1 = (t0 + 2668U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int64 *)t1) = t11;
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t10 = (0 * 1LL);
    t4 = (t5 != t10);
    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t10 = (0 * 1LL);
    t4 = (t5 != t10);
    if (t4 == 1)
        goto LAB15;

LAB16:    t3 = (unsigned char)0;

LAB17:    if (t3 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t5 = *((int64 *)t2);
    t10 = (0 * 1LL);
    t13 = (t5 == t10);
    if (t13 == 1)
        goto LAB23;

LAB24:    t4 = (unsigned char)0;

LAB25:    if (t4 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB18;

LAB19:
LAB8:    goto LAB3;

LAB7:    t1 = (t0 + 2668U);
    t8 = *((char **)t1);
    t14 = *((int64 *)t8);
    t1 = (t0 + 4788);
    t9 = (t1 + 32U);
    t15 = *((char **)t9);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int64 *)t17) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    t1 = (t0 + 2668U);
    t6 = *((char **)t1);
    t11 = *((int64 *)t6);
    t1 = (t0 + 1236U);
    t7 = *((char **)t1);
    t12 = *((int64 *)t7);
    t13 = (t11 <= t12);
    t3 = t13;
    goto LAB12;

LAB13:    t14 = (0 * 1LL);
    t1 = (t0 + 4788);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((int64 *)t16) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB15:    t1 = (t0 + 2668U);
    t6 = *((char **)t1);
    t11 = *((int64 *)t6);
    t1 = (t0 + 1236U);
    t7 = *((char **)t1);
    t12 = *((int64 *)t7);
    t13 = (t11 > t12);
    t3 = t13;
    goto LAB17;

LAB18:    t1 = (t0 + 2668U);
    t8 = *((char **)t1);
    t14 = *((int64 *)t8);
    t1 = (t0 + 4788);
    t9 = (t1 + 32U);
    t15 = *((char **)t9);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int64 *)t17) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB20:    t1 = (t0 + 2156U);
    t7 = *((char **)t1);
    t19 = *((int *)t7);
    t20 = (t19 == 1);
    t3 = t20;
    goto LAB22;

LAB23:    t1 = (t0 + 2532U);
    t6 = *((char **)t1);
    t11 = *((int64 *)t6);
    t12 = (0 * 1LL);
    t18 = (t11 != t12);
    t4 = t18;
    goto LAB25;

}

static void unisim_a_1297477671_0429821216_p_3(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (1.5000000000000000 * t3);
    t1 = (t0 + 4824);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int64 *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4596);
    *((int *)t1) = 1;

LAB1:    return;
}

static void unisim_a_1297477671_0429821216_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB3:    t1 = (t0 + 4604);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 4860);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4896);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4932);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t2 = (t0 + 4860);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t2);
    t1 = (t0 + 4896);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4932);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t2 = (t0 + 4896);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t2);
    t1 = (t0 + 4860);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4932);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void unisim_a_1297477671_0429821216_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB3:    t1 = (t0 + 4612);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 5004);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5040);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t2 = (t0 + 5004);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB6;

LAB8:    t2 = (t0 + 5040);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void unisim_a_1297477671_0429821216_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    int64 t14;
    int64 t15;
    int t16;
    unsigned char t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)1);
    if (t10 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:
LAB5:
LAB38:    t2 = (t0 + 4620);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;

LAB1:    return;
LAB4:    t2 = (t0 + 5076);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB5;

LAB7:    t2 = (t0 + 660U);
    t13 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t13 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    t2 = (t0 + 2064U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (t11 == 1);
    t4 = t12;
    goto LAB12;

LAB13:    t14 = (1 * 1LL);
    t7 = (t0 + 3988);
    xsi_process_wait(t7, t14);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:    t2 = (t0 + 960U);
    t3 = *((char **)t2);
    t14 = *((int64 *)t3);
    t15 = (0 * 1LL);
    t4 = (t14 != t15);
    if (t4 != 0)
        goto LAB20;

LAB22:
LAB21:    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t14 = *((int64 *)t3);
    t2 = (t0 + 3988);
    xsi_process_wait(t2, t14);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t2 = (t0 + 5076);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    t2 = (t0 + 1880U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t10 = (t11 != 1);
    if (t10 == 1)
        goto LAB33;

LAB34:    t5 = (unsigned char)0;

LAB35:    if (t5 == 1)
        goto LAB30;

LAB31:    t4 = (unsigned char)0;

LAB32:    if (t4 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB14;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    t2 = (t0 + 5076);
    t8 = (t2 + 32U);
    t9 = *((char **)t8);
    t18 = (t9 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB28;

LAB30:    t2 = (t0 + 868U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t17 = (t13 == (unsigned char)2);
    t4 = t17;
    goto LAB32;

LAB33:    t2 = (t0 + 1788U);
    t6 = *((char **)t2);
    t16 = *((int *)t6);
    t12 = (t16 != 1);
    t5 = t12;
    goto LAB35;

LAB36:    t3 = (t0 + 4620);
    *((int *)t3) = 0;
    goto LAB2;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

}

static void unisim_a_1297477671_0429821216_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    int64 t14;
    int64 t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)1);
    if (t10 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:
LAB5:
LAB37:    t2 = (t0 + 4628);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB38;

LAB1:    return;
LAB4:    t2 = (t0 + 5112);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB5;

LAB7:    t2 = (t0 + 660U);
    t13 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t13 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    t2 = (t0 + 2156U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (t11 == 1);
    t4 = t12;
    goto LAB12;

LAB13:    t7 = (t0 + 960U);
    t8 = *((char **)t7);
    t14 = *((int64 *)t8);
    t15 = (0 * 1LL);
    t16 = (t14 != t15);
    if (t16 != 0)
        goto LAB16;

LAB18:
LAB17:    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t14 = *((int64 *)t3);
    t2 = (t0 + 4132);
    xsi_process_wait(t2, t14);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    t7 = (t0 + 5112);
    t9 = (t7 + 32U);
    t17 = *((char **)t9);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB17;

LAB19:    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 != 1);
    if (t12 == 1)
        goto LAB32;

LAB33:    t10 = (unsigned char)0;

LAB34:    if (t10 == 1)
        goto LAB29;

LAB30:    t5 = (unsigned char)0;

LAB31:    if (t5 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB14;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    t2 = (t0 + 5112);
    t17 = (t2 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t23 = *((char **)t19);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB24;

LAB26:    t2 = (t0 + 960U);
    t8 = *((char **)t2);
    t14 = *((int64 *)t8);
    t2 = (t0 + 1052U);
    t9 = *((char **)t2);
    t15 = *((int64 *)t9);
    t22 = (t14 <= t15);
    t4 = t22;
    goto LAB28;

LAB29:    t2 = (t0 + 868U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t21 = (t16 == (unsigned char)2);
    t5 = t21;
    goto LAB31;

LAB32:    t2 = (t0 + 1696U);
    t6 = *((char **)t2);
    t20 = *((int *)t6);
    t13 = (t20 != 1);
    t10 = t13;
    goto LAB34;

LAB35:    t3 = (t0 + 4628);
    *((int *)t3) = 0;
    goto LAB2;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

}

static void unisim_a_1297477671_0429821216_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4636);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 1396U);
    t5 = xsi_signal_has_event(t1);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 1488U);
    t3 = xsi_signal_has_event(t1);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t6 = (t0 + 1420U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = (t0 + 5148);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB6;

LAB8:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t2 = (t0 + 5148);
    t7 = (t2 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t4;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}


extern void unisim_a_1297477671_0429821216_init()
{
	static char *pe[] = {(void *)unisim_a_1297477671_0429821216_p_0,(void *)unisim_a_1297477671_0429821216_p_1,(void *)unisim_a_1297477671_0429821216_p_2,(void *)unisim_a_1297477671_0429821216_p_3,(void *)unisim_a_1297477671_0429821216_p_4,(void *)unisim_a_1297477671_0429821216_p_5,(void *)unisim_a_1297477671_0429821216_p_6,(void *)unisim_a_1297477671_0429821216_p_7,(void *)unisim_a_1297477671_0429821216_p_8};
	xsi_register_didat("unisim_a_1297477671_0429821216", "isim/testbench_isim_beh.exe.sim/unisim/a_1297477671_0429821216.didat");
	xsi_register_executes(pe);
}

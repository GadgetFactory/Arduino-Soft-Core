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
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void unisim_a_0850834979_2152628908_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 1804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:
LAB9:    t2 = (t0 + 2432);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB4:    t4 = (t0 + 960U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t4 = (t0 + 2516);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB7:    t4 = (t0 + 2432);
    *((int *)t4) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}

static void unisim_a_0850834979_2152628908_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 1948U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:
LAB9:    t2 = (t0 + 2440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB4:    t4 = (t0 + 868U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t4 = (t0 + 2552);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t11 = (0 - 2);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t3 = *((unsigned char *)t2);
    t5 = (t0 + 868U);
    t7 = *((char **)t5);
    t6 = *((unsigned char *)t7);
    t15 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t5 = (t0 + 2552);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = t15;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t11 = (1 - 2);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t3 = *((unsigned char *)t2);
    t5 = (t0 + 1052U);
    t7 = *((char **)t5);
    t17 = (0 - 2);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t5 = (t7 + t20);
    t6 = *((unsigned char *)t5);
    t15 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t8 = (t0 + 868U);
    t9 = *((char **)t8);
    t21 = *((unsigned char *)t9);
    t22 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t15, t21);
    t8 = (t0 + 2552);
    t10 = (t8 + 32U);
    t16 = *((char **)t10);
    t23 = (t16 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t22;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);
    goto LAB5;

LAB7:    t4 = (t0 + 2440);
    *((int *)t4) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}

static void unisim_a_0850834979_2152628908_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 684U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t11 = (t0 + 2588);
    t14 = (t11 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast(t11);

LAB2:    t18 = (t0 + 2448);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 960U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 2588);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void unisim_a_0850834979_2152628908_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2236U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB7;

LAB8:
LAB5:
LAB22:    t2 = (t0 + 2472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;

LAB1:    return;
LAB4:    t2 = (t0 + 1144U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t2 = (t0 + 2624);
    t8 = (t2 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB5;

LAB7:    t2 = (t0 + 2624);
    t6 = (t2 + 32U);
    t8 = *((char **)t6);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB11:    t2 = (t0 + 2456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    t6 = (t0 + 2456);
    *((int *)t6) = 0;
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB5;

LAB10:    t3 = (t0 + 1028U);
    t12 = (2 - 2);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, t15);
    if (t4 == 1)
        goto LAB9;
    else
        goto LAB11;

LAB12:    goto LAB10;

LAB13:
LAB18:    t2 = (t0 + 2464);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:    t8 = (t0 + 2464);
    *((int *)t8) = 0;
    goto LAB14;

LAB17:    t6 = (t0 + 1120U);
    t7 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t6, 0U, 0U);
    if (t7 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t3 = (t0 + 2472);
    *((int *)t3) = 0;
    goto LAB2;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

}


extern void unisim_a_0850834979_2152628908_init()
{
	static char *pe[] = {(void *)unisim_a_0850834979_2152628908_p_0,(void *)unisim_a_0850834979_2152628908_p_1,(void *)unisim_a_0850834979_2152628908_p_2,(void *)unisim_a_0850834979_2152628908_p_3};
	xsi_register_didat("unisim_a_0850834979_2152628908", "isim/testbench_isim_beh.exe.sim/unisim/a_0850834979_2152628908.didat");
	xsi_register_executes(pe);
}

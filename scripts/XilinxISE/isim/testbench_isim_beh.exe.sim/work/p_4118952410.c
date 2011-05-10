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
extern char *STD_STANDARD;
static const char *ng1 = "Function log2 ended without a return statement";



int work_p_4118952410_sub_1482601376_280255791(char *t1, int t2)
{
    char t3[72];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 608);
    t7 = (t5 + 52U);
    *((char **)t7) = t6;
    t9 = (t5 + 36U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 48U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 1;
    t14 = (t2 == 1);
    if (t14 != 0)
        goto LAB2;

LAB4:    if (-2147483648 > 2147483647)
        goto LAB10;

LAB11:    if (1 == -1)
        goto LAB15;

LAB16:    t15 = 2147483647;

LAB12:    t16 = 1;
    t17 = t15;

LAB6:    if (t16 <= t17)
        goto LAB7;

LAB9:
LAB3:    xsi_error(ng1);
    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB7:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t18 = *((int *)t7);
    t19 = (2 * t18);
    t6 = (t5 + 36U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t19;
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t15 = *((int *)t7);
    t14 = (t15 >= t2);
    if (t14 != 0)
        goto LAB17;

LAB19:
LAB18:
LAB8:    if (t16 == t17)
        goto LAB9;

LAB21:    t15 = (t16 + 1);
    t16 = t15;
    goto LAB6;

LAB10:    if (1 == 1)
        goto LAB13;

LAB14:    t15 = -2147483648;
    goto LAB12;

LAB13:    t15 = 2147483647;
    goto LAB12;

LAB15:    t15 = -2147483648;
    goto LAB12;

LAB17:    t0 = t16;
    goto LAB1;

LAB20:    goto LAB18;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_p_4118952410_init()
{
	static char *se[] = {(void *)work_p_4118952410_sub_1482601376_280255791};
	xsi_register_didat("work_p_4118952410", "isim/testbench_isim_beh.exe.sim/work/p_4118952410.didat");
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(4, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 8);
}

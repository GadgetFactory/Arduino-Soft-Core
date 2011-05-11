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
static const char *ng0 = "X:/Papilio/workarea/Arduino_Soft_Core/sources/Core/io_adr_dec.vhd";
extern char *WORK_P_4118952410;



static void work_a_2105612044_1516540902_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned char t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    unsigned char t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;

LAB0:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = ((WORK_P_4118952410) + 944U);
    t4 = *((char **)t2);
    t5 = 1;
    if (16U == 16U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 592U);
    t19 = *((char **)t18);
    t18 = ((WORK_P_4118952410) + 1012U);
    t20 = *((char **)t18);
    t21 = 1;
    if (16U == 16U)
        goto LAB19;

LAB20:    t21 = 0;

LAB21:    if (t21 == 1)
        goto LAB16;

LAB17:    t17 = (unsigned char)0;

LAB18:    if (t17 != 0)
        goto LAB14;

LAB15:    t34 = (t0 + 592U);
    t35 = *((char **)t34);
    t34 = ((WORK_P_4118952410) + 1080U);
    t36 = *((char **)t34);
    t37 = 1;
    if (16U == 16U)
        goto LAB30;

LAB31:    t37 = 0;

LAB32:    if (t37 == 1)
        goto LAB27;

LAB28:    t33 = (unsigned char)0;

LAB29:    if (t33 != 0)
        goto LAB25;

LAB26:    t50 = (t0 + 592U);
    t51 = *((char **)t50);
    t50 = ((WORK_P_4118952410) + 876U);
    t52 = *((char **)t50);
    t53 = 1;
    if (16U == 16U)
        goto LAB41;

LAB42:    t53 = 0;

LAB43:    if (t53 == 1)
        goto LAB38;

LAB39:    t49 = (unsigned char)0;

LAB40:    if (t49 != 0)
        goto LAB36;

LAB37:
LAB47:    t65 = (t0 + 776U);
    t66 = *((char **)t65);
    t65 = (t0 + 2136);
    t67 = (t65 + 32U);
    t68 = *((char **)t67);
    t69 = (t68 + 40U);
    t70 = *((char **)t69);
    memcpy(t70, t66, 8U);
    xsi_driver_first_trans_fast_port(t65);

LAB2:    t71 = (t0 + 2092);
    *((int *)t71) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 960U);
    t12 = *((char **)t8);
    t8 = (t0 + 2136);
    t13 = (t8 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 684U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 16U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t24 = (t0 + 1052U);
    t28 = *((char **)t24);
    t24 = (t0 + 2136);
    t29 = (t24 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t28, 8U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB2;

LAB16:    t24 = (t0 + 684U);
    t25 = *((char **)t24);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t17 = t27;
    goto LAB18;

LAB19:    t22 = 0;

LAB22:    if (t22 < 16U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t18 = (t19 + t22);
    t23 = (t20 + t22);
    if (*((unsigned char *)t18) != *((unsigned char *)t23))
        goto LAB20;

LAB24:    t22 = (t22 + 1);
    goto LAB22;

LAB25:    t40 = (t0 + 1144U);
    t44 = *((char **)t40);
    t40 = (t0 + 2136);
    t45 = (t40 + 32U);
    t46 = *((char **)t45);
    t47 = (t46 + 40U);
    t48 = *((char **)t47);
    memcpy(t48, t44, 8U);
    xsi_driver_first_trans_fast_port(t40);
    goto LAB2;

LAB27:    t40 = (t0 + 684U);
    t41 = *((char **)t40);
    t42 = *((unsigned char *)t41);
    t43 = (t42 == (unsigned char)3);
    t33 = t43;
    goto LAB29;

LAB30:    t38 = 0;

LAB33:    if (t38 < 16U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t34 = (t35 + t38);
    t39 = (t36 + t38);
    if (*((unsigned char *)t34) != *((unsigned char *)t39))
        goto LAB31;

LAB35:    t38 = (t38 + 1);
    goto LAB33;

LAB36:    t56 = (t0 + 1236U);
    t60 = *((char **)t56);
    t56 = (t0 + 2136);
    t61 = (t56 + 32U);
    t62 = *((char **)t61);
    t63 = (t62 + 40U);
    t64 = *((char **)t63);
    memcpy(t64, t60, 8U);
    xsi_driver_first_trans_fast_port(t56);
    goto LAB2;

LAB38:    t56 = (t0 + 684U);
    t57 = *((char **)t56);
    t58 = *((unsigned char *)t57);
    t59 = (t58 == (unsigned char)3);
    t49 = t59;
    goto LAB40;

LAB41:    t54 = 0;

LAB44:    if (t54 < 16U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t50 = (t51 + t54);
    t55 = (t52 + t54);
    if (*((unsigned char *)t50) != *((unsigned char *)t55))
        goto LAB42;

LAB46:    t54 = (t54 + 1);
    goto LAB44;

LAB48:    goto LAB2;

}


extern void work_a_2105612044_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2105612044_1516540902_p_0};
	xsi_register_didat("work_a_2105612044_1516540902", "isim/testbench_isim_beh.exe.sim/work/a_2105612044_1516540902.didat");
	xsi_register_executes(pe);
}

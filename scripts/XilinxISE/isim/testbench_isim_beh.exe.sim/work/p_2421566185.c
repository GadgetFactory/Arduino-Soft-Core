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



unsigned char work_p_2421566185_sub_4133059061_2551311565(char *t1, unsigned char t2, unsigned char t3)
{
    char t4[72];
    char t5[8];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18};

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 1308);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    *((unsigned char *)t12) = t2;
    t13 = (t5 + 5U);
    *((unsigned char *)t13) = t3;
    t14 = (char *)((nl0) + t2);
    goto **((char **)t14);

LAB2:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t15 = *((unsigned char *)t8);
    t0 = t15;

LAB1:    return t0;
LAB3:    t15 = (t3 == (unsigned char)2);
    if (t15 != 0)
        goto LAB20;

LAB22:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)0;

LAB21:    goto LAB2;

LAB4:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB23;

LAB25:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB24:    goto LAB2;

LAB5:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB26;

LAB28:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)3;

LAB27:    goto LAB2;

LAB6:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB29;

LAB31:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)4;

LAB30:    goto LAB2;

LAB7:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB32;

LAB34:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)4;

LAB33:    goto LAB2;

LAB8:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB35;

LAB37:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)6;

LAB36:    goto LAB2;

LAB9:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB38;

LAB40:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)6;

LAB39:    goto LAB2;

LAB10:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB41;

LAB43:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)4;

LAB42:    goto LAB2;

LAB11:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB44;

LAB46:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB45:    goto LAB2;

LAB12:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB47;

LAB49:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)10;

LAB48:    goto LAB2;

LAB13:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB50;

LAB52:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)11;

LAB51:    goto LAB2;

LAB14:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB53;

LAB55:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)11;

LAB54:    goto LAB2;

LAB15:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB56;

LAB58:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)13;

LAB57:    goto LAB2;

LAB16:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB59;

LAB61:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)13;

LAB60:    goto LAB2;

LAB17:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB62;

LAB64:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)11;

LAB63:    goto LAB2;

LAB18:    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB65;

LAB67:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB66:    goto LAB2;

LAB19:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)0;
    goto LAB2;

LAB20:    t16 = (t6 + 36U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = (unsigned char)1;
    goto LAB21;

LAB23:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    goto LAB24;

LAB26:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)9;
    goto LAB27;

LAB29:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)5;
    goto LAB30;

LAB32:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)5;
    goto LAB33;

LAB35:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)8;
    goto LAB36;

LAB38:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)7;
    goto LAB39;

LAB41:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)8;
    goto LAB42;

LAB44:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    goto LAB45;

LAB47:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)0;
    goto LAB48;

LAB50:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)12;
    goto LAB51;

LAB53:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)12;
    goto LAB54;

LAB56:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)15;
    goto LAB57;

LAB59:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)14;
    goto LAB60;

LAB62:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)15;
    goto LAB63;

LAB65:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    goto LAB66;

LAB68:;
}

char *work_p_2421566185_sub_993174283_2551311565(char *t1, char *t2, char *t3, char *t4, unsigned char t5)
{
    char t6[72];
    char t7[16];
    char t10[16];
    char t56[16];
    char t58[16];
    char *t0;
    char *t8;
    unsigned int t9;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    char *t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    int t59;
    char *t60;
    int t61;
    char *t62;
    int t63;
    char *t64;
    int t65;
    int t66;
    char *t67;
    int t68;
    char *t69;
    int t70;
    char *t71;
    int t72;
    int t73;
    char *t74;
    char *t75;
    int t76;
    unsigned int t77;
    char *t78;
    int t79;
    char *t80;
    int t81;
    char *t82;
    int t83;
    char *t84;
    int t85;
    int t86;
    char *t87;
    int t88;
    char *t89;
    int t90;
    char *t91;
    int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t11 = (t4 + 0U);
    t12 = *((int *)t11);
    t13 = (t4 + 4U);
    t14 = *((int *)t13);
    t15 = (t4 + 8U);
    t16 = *((int *)t15);
    t17 = (t10 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t12;
    t18 = (t17 + 4U);
    *((int *)t18) = t14;
    t18 = (t17 + 8U);
    *((int *)t18) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = ((IEEE_P_2592010699) + 2332);
    t22 = (t18 + 52U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t9);
    t24 = (t18 + 36U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t10);
    t25 = (t18 + 40U);
    *((char **)t25) = t10;
    t26 = (t18 + 48U);
    *((unsigned int *)t26) = t9;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 8U);
    *((char **)t29) = t4;
    t30 = (t7 + 12U);
    *((unsigned char *)t30) = t5;
    t31 = (t4 + 0U);
    t32 = *((int *)t31);
    t34 = (t4 + 0U);
    t35 = *((int *)t34);
    t36 = (t4 + 4U);
    t37 = *((int *)t36);
    t38 = (t4 + 8U);
    t39 = *((int *)t38);
    if (t35 > t37)
        goto LAB4;

LAB5:    if (t39 == -1)
        goto LAB9;

LAB10:    t33 = t37;

LAB6:    t20 = (t32 - t33);
    t41 = (t4 + 0U);
    t42 = *((int *)t41);
    t43 = (t4 + 4U);
    t44 = *((int *)t43);
    t45 = (t4 + 8U);
    t46 = *((int *)t45);
    if (t42 > t44)
        goto LAB11;

LAB12:    if (t46 == -1)
        goto LAB16;

LAB17:    t40 = t42;

LAB13:    t47 = (t40 + 1);
    t48 = (t4 + 4U);
    t49 = *((int *)t48);
    t50 = (t4 + 8U);
    t51 = *((int *)t50);
    xsi_vhdl_check_range_of_slice(t32, t49, t51, t33, t47, -1);
    t52 = (t20 * 1U);
    t53 = (0 + t52);
    t54 = (t3 + t53);
    t57 = ((IEEE_P_2592010699) + 2332);
    t60 = (t4 + 0U);
    t61 = *((int *)t60);
    t62 = (t4 + 4U);
    t63 = *((int *)t62);
    t64 = (t4 + 8U);
    t65 = *((int *)t64);
    if (t61 > t63)
        goto LAB18;

LAB19:    if (t65 == -1)
        goto LAB23;

LAB24:    t59 = t63;

LAB20:    t67 = (t4 + 0U);
    t68 = *((int *)t67);
    t69 = (t4 + 4U);
    t70 = *((int *)t69);
    t71 = (t4 + 8U);
    t72 = *((int *)t71);
    if (t68 > t70)
        goto LAB25;

LAB26:    if (t72 == -1)
        goto LAB30;

LAB31:    t66 = t68;

LAB27:    t73 = (t66 + 1);
    t74 = (t58 + 0U);
    t75 = (t74 + 0U);
    *((int *)t75) = t59;
    t75 = (t74 + 4U);
    *((int *)t75) = t73;
    t75 = (t74 + 8U);
    *((int *)t75) = -1;
    t76 = (t73 - t59);
    t77 = (t76 * -1);
    t77 = (t77 + 1);
    t75 = (t74 + 12U);
    *((unsigned int *)t75) = t77;
    t55 = xsi_base_array_concat(t55, t56, t57, (char)99, t5, (char)97, t54, t58, (char)101);
    t75 = (t18 + 36U);
    t78 = *((char **)t75);
    t75 = (t78 + 0);
    t80 = (t4 + 0U);
    t81 = *((int *)t80);
    t82 = (t4 + 4U);
    t83 = *((int *)t82);
    t84 = (t4 + 8U);
    t85 = *((int *)t84);
    if (t81 > t83)
        goto LAB32;

LAB33:    if (t85 == -1)
        goto LAB37;

LAB38:    t79 = t83;

LAB34:    t87 = (t4 + 0U);
    t88 = *((int *)t87);
    t89 = (t4 + 4U);
    t90 = *((int *)t89);
    t91 = (t4 + 8U);
    t92 = *((int *)t91);
    if (t88 > t90)
        goto LAB39;

LAB40:    if (t92 == -1)
        goto LAB44;

LAB45:    t86 = t88;

LAB41:    t93 = (t86 + 1);
    t94 = (t93 - t79);
    t77 = (t94 * -1);
    t77 = (t77 + 1);
    t95 = (1U * t77);
    t96 = (1U + t95);
    memcpy(t75, t55, t96);
    t8 = (t18 + 36U);
    t11 = *((char **)t8);
    t8 = (t10 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t11, t9);
    t13 = (t10 + 0U);
    t12 = *((int *)t13);
    t15 = (t10 + 4U);
    t14 = *((int *)t15);
    t17 = (t10 + 8U);
    t16 = *((int *)t17);
    t21 = (t2 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = t12;
    t22 = (t21 + 4U);
    *((int *)t22) = t14;
    t22 = (t21 + 8U);
    *((int *)t22) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t20;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    if (t39 == 1)
        goto LAB7;

LAB8:    t33 = t35;
    goto LAB6;

LAB7:    t33 = t37;
    goto LAB6;

LAB9:    t33 = t35;
    goto LAB6;

LAB11:    if (t46 == 1)
        goto LAB14;

LAB15:    t40 = t44;
    goto LAB13;

LAB14:    t40 = t42;
    goto LAB13;

LAB16:    t40 = t44;
    goto LAB13;

LAB18:    if (t65 == 1)
        goto LAB21;

LAB22:    t59 = t61;
    goto LAB20;

LAB21:    t59 = t63;
    goto LAB20;

LAB23:    t59 = t61;
    goto LAB20;

LAB25:    if (t72 == 1)
        goto LAB28;

LAB29:    t66 = t70;
    goto LAB27;

LAB28:    t66 = t68;
    goto LAB27;

LAB30:    t66 = t70;
    goto LAB27;

LAB32:    if (t85 == 1)
        goto LAB35;

LAB36:    t79 = t81;
    goto LAB34;

LAB35:    t79 = t83;
    goto LAB34;

LAB37:    t79 = t81;
    goto LAB34;

LAB39:    if (t92 == 1)
        goto LAB42;

LAB43:    t86 = t90;
    goto LAB41;

LAB42:    t86 = t88;
    goto LAB41;

LAB44:    t86 = t90;
    goto LAB41;

LAB46:;
}


extern void work_p_2421566185_init()
{
	static char *se[] = {(void *)work_p_2421566185_sub_4133059061_2551311565,(void *)work_p_2421566185_sub_993174283_2551311565};
	xsi_register_didat("work_p_2421566185", "isim/testbench_isim_beh.exe.sim/work/p_2421566185.didat");
	xsi_register_subprogram_executes(se);
}

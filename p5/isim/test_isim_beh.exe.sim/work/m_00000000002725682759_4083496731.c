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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/ISE Files/p5/mux1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 3U};



static void Cont_30_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t26[8];
    char t27[8];
    char t29[8];
    char t49[8];
    char t50[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t2))
        goto LAB6;

LAB4:    t7 = (t5 + 4);
    t8 = (t2 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB6:    memset(t4, 0, 8);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t9) != 0)
        goto LAB9;

LAB10:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB11;

LAB12:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t16) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t26, 8);

LAB19:    t72 = (t0 + 1868);
    t73 = (t72 + 32U);
    t74 = *((char **)t73);
    t75 = (t74 + 40U);
    t76 = *((char **)t75);
    memcpy(t76, t3, 8);
    xsi_driver_vfirst_trans(t72, 0, 31);
    t77 = (t0 + 1824);
    *((int *)t77) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB10;

LAB11:    t20 = (t0 + 600U);
    t21 = *((char **)t20);
    goto LAB12;

LAB13:    t20 = (t0 + 876U);
    t28 = *((char **)t20);
    t20 = ((char*)((ng2)));
    memset(t29, 0, 8);
    if (*((unsigned int *)t28) != *((unsigned int *)t20))
        goto LAB22;

LAB20:    t30 = (t28 + 4);
    t31 = (t20 + 4);
    if (*((unsigned int *)t30) != *((unsigned int *)t31))
        goto LAB22;

LAB21:    *((unsigned int *)t29) = 1;

LAB22:    memset(t27, 0, 8);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t32) != 0)
        goto LAB25;

LAB26:    t39 = (t27 + 4);
    t40 = *((unsigned int *)t27);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB27;

LAB28:    t45 = *((unsigned int *)t27);
    t46 = (~(t45));
    t47 = *((unsigned int *)t39);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t39) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t27) > 0)
        goto LAB33;

LAB34:    memcpy(t26, t49, 8);

LAB35:    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t21, 32, t26, 32);
    goto LAB19;

LAB17:    memcpy(t3, t21, 8);
    goto LAB19;

LAB23:    *((unsigned int *)t27) = 1;
    goto LAB26;

LAB25:    t38 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB26;

LAB27:    t43 = (t0 + 692U);
    t44 = *((char **)t43);
    goto LAB28;

LAB29:    t43 = (t0 + 876U);
    t51 = *((char **)t43);
    t43 = ((char*)((ng3)));
    memset(t52, 0, 8);
    if (*((unsigned int *)t51) != *((unsigned int *)t43))
        goto LAB38;

LAB36:    t53 = (t51 + 4);
    t54 = (t43 + 4);
    if (*((unsigned int *)t53) != *((unsigned int *)t54))
        goto LAB38;

LAB37:    *((unsigned int *)t52) = 1;

LAB38:    memset(t50, 0, 8);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t52);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t55) != 0)
        goto LAB41;

LAB42:    t62 = (t50 + 4);
    t63 = *((unsigned int *)t50);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB43;

LAB44:    t68 = *((unsigned int *)t50);
    t69 = (~(t68));
    t70 = *((unsigned int *)t62);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t62) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t50) > 0)
        goto LAB49;

LAB50:    memcpy(t49, t66, 8);

LAB51:    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t26, 32, t44, 32, t49, 32);
    goto LAB35;

LAB33:    memcpy(t26, t44, 8);
    goto LAB35;

LAB39:    *((unsigned int *)t50) = 1;
    goto LAB42;

LAB41:    t61 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB42;

LAB43:    t66 = (t0 + 784U);
    t67 = *((char **)t66);
    goto LAB44;

LAB45:    t66 = ((char*)((ng4)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t49, 32, t67, 32, t66, 32);
    goto LAB51;

LAB49:    memcpy(t49, t67, 8);
    goto LAB51;

}


extern void work_m_00000000002725682759_4083496731_init()
{
	static char *pe[] = {(void *)Cont_30_0};
	xsi_register_didat("work_m_00000000002725682759_4083496731", "isim/test_isim_beh.exe.sim/work/m_00000000002725682759_4083496731.didat");
	xsi_register_executes(pe);
}

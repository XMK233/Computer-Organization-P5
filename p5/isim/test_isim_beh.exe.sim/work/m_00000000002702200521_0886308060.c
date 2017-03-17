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
static const char *ng0 = "G:/ISE Files/p5/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {16, 0};
static unsigned int ng6[] = {4294967295U, 4294967295U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t23[8];
    char t28[8];
    char t29[8];
    char t31[8];
    char t48[8];
    char t53[8];
    char t54[8];
    char t56[8];
    char t73[8];
    char t104[8];
    char t105[8];
    char t108[8];
    char t124[8];
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
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 784U);
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

LAB12:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t16) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t28, 8);

LAB19:    t130 = (t0 + 1776);
    t131 = (t130 + 32U);
    t132 = *((char **)t131);
    t133 = (t132 + 40U);
    t134 = *((char **)t133);
    memcpy(t134, t3, 8);
    xsi_driver_vfirst_trans(t130, 0, 31);
    t135 = (t0 + 1732);
    *((int *)t135) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB10;

LAB11:    t20 = (t0 + 600U);
    t21 = *((char **)t20);
    t20 = (t0 + 692U);
    t22 = *((char **)t20);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t21, 32, t22, 32);
    goto LAB12;

LAB13:    t20 = (t0 + 784U);
    t30 = *((char **)t20);
    t20 = ((char*)((ng2)));
    memset(t31, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t20))
        goto LAB22;

LAB20:    t32 = (t30 + 4);
    t33 = (t20 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t33))
        goto LAB22;

LAB21:    *((unsigned int *)t31) = 1;

LAB22:    memset(t29, 0, 8);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t34) != 0)
        goto LAB25;

LAB26:    t41 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB27;

LAB28:    t49 = *((unsigned int *)t29);
    t50 = (~(t49));
    t51 = *((unsigned int *)t41);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t41) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t29) > 0)
        goto LAB33;

LAB34:    memcpy(t28, t53, 8);

LAB35:    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB19;

LAB17:    memcpy(t3, t23, 8);
    goto LAB19;

LAB23:    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB25:    t40 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB27:    t45 = (t0 + 600U);
    t46 = *((char **)t45);
    t45 = (t0 + 692U);
    t47 = *((char **)t45);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t46, 32, t47, 32);
    goto LAB28;

LAB29:    t45 = (t0 + 784U);
    t55 = *((char **)t45);
    t45 = ((char*)((ng3)));
    memset(t56, 0, 8);
    if (*((unsigned int *)t55) != *((unsigned int *)t45))
        goto LAB38;

LAB36:    t57 = (t55 + 4);
    t58 = (t45 + 4);
    if (*((unsigned int *)t57) != *((unsigned int *)t58))
        goto LAB38;

LAB37:    *((unsigned int *)t56) = 1;

LAB38:    memset(t54, 0, 8);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t56);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t59) != 0)
        goto LAB41;

LAB42:    t66 = (t54 + 4);
    t67 = *((unsigned int *)t54);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB43;

LAB44:    t100 = *((unsigned int *)t54);
    t101 = (~(t100));
    t102 = *((unsigned int *)t66);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t66) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t54) > 0)
        goto LAB49;

LAB50:    memcpy(t53, t104, 8);

LAB51:    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t28, 32, t48, 32, t53, 32);
    goto LAB35;

LAB33:    memcpy(t28, t48, 8);
    goto LAB35;

LAB39:    *((unsigned int *)t54) = 1;
    goto LAB42;

LAB41:    t65 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB42;

LAB43:    t70 = (t0 + 600U);
    t71 = *((char **)t70);
    t70 = (t0 + 692U);
    t72 = *((char **)t70);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t70 = (t71 + 4);
    t77 = (t72 + 4);
    t78 = (t73 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB44;

LAB45:    t106 = (t0 + 784U);
    t107 = *((char **)t106);
    t106 = ((char*)((ng4)));
    memset(t108, 0, 8);
    if (*((unsigned int *)t107) != *((unsigned int *)t106))
        goto LAB57;

LAB55:    t109 = (t107 + 4);
    t110 = (t106 + 4);
    if (*((unsigned int *)t109) != *((unsigned int *)t110))
        goto LAB57;

LAB56:    *((unsigned int *)t108) = 1;

LAB57:    memset(t105, 0, 8);
    t111 = (t108 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t108);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t111) != 0)
        goto LAB60;

LAB61:    t118 = (t105 + 4);
    t119 = *((unsigned int *)t105);
    t120 = *((unsigned int *)t118);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB62;

LAB63:    t125 = *((unsigned int *)t105);
    t126 = (~(t125));
    t127 = *((unsigned int *)t118);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t118) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t105) > 0)
        goto LAB68;

LAB69:    memcpy(t104, t129, 8);

LAB70:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t53, 32, t73, 32, t104, 32);
    goto LAB51;

LAB49:    memcpy(t53, t73, 8);
    goto LAB51;

LAB52:    t84 = *((unsigned int *)t73);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t73) = (t84 | t85);
    t86 = (t71 + 4);
    t87 = (t72 + 4);
    t88 = *((unsigned int *)t86);
    t89 = (~(t88));
    t90 = *((unsigned int *)t71);
    t91 = (t90 & t89);
    t92 = *((unsigned int *)t87);
    t93 = (~(t92));
    t94 = *((unsigned int *)t72);
    t95 = (t94 & t93);
    t96 = (~(t91));
    t97 = (~(t95));
    t98 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t98 & t96);
    t99 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t99 & t97);
    goto LAB54;

LAB58:    *((unsigned int *)t105) = 1;
    goto LAB61;

LAB60:    t117 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB61;

LAB62:    t122 = (t0 + 692U);
    t123 = *((char **)t122);
    t122 = ((char*)((ng5)));
    memset(t124, 0, 8);
    xsi_vlog_unsigned_lshift(t124, 32, t123, 32, t122, 32);
    goto LAB63;

LAB64:    t129 = ((char*)((ng6)));
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t104, 32, t124, 32, t129, 32);
    goto LAB70;

LAB68:    memcpy(t104, t124, 8);
    goto LAB70;

}


extern void work_m_00000000002702200521_0886308060_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("work_m_00000000002702200521_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000002702200521_0886308060.didat");
	xsi_register_executes(pe);
}

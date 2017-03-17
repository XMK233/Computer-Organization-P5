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
static const char *ng0 = "G:/ISE Files/p5/npc.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t20[8];
    char t22[8];
    char t32[8];
    char t48[8];
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
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
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

LAB12:    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t16);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t16) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t48, 8);

LAB19:    t49 = (t0 + 1868);
    t50 = (t49 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t49, 0, 31);
    t54 = (t0 + 1824);
    *((int *)t54) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB10;

LAB11:    t21 = ((char*)((ng2)));
    t23 = (t0 + 784U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 67108863U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 67108863U);
    t33 = (t0 + 692U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 28);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 28);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 15U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 15U);
    xsi_vlogtype_concat(t20, 32, 32, 3U, t32, 4, t22, 26, t21, 2);
    goto LAB12;

LAB13:    t46 = (t0 + 600U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng3)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t47, 32, t46, 32);
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t48, 32);
    goto LAB19;

LAB17:    memcpy(t3, t20, 8);
    goto LAB19;

}


extern void work_m_00000000004068008562_0757879789_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("work_m_00000000004068008562_0757879789", "isim/test_isim_beh.exe.sim/work/m_00000000004068008562_0757879789.didat");
	xsi_register_executes(pe);
}

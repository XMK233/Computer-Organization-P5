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
static const char *ng0 = "G:/ISE Files/p5/mux4.v";
static int ng1[] = {1, 0};



static void Cont_27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
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

LAB19:    t20 = (t0 + 1776);
    t27 = (t20 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t20, 0, 31);
    t31 = (t0 + 1732);
    *((int *)t31) = 1;

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

LAB13:    t20 = (t0 + 692U);
    t26 = *((char **)t20);
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t21, 32, t26, 32);
    goto LAB19;

LAB17:    memcpy(t3, t21, 8);
    goto LAB19;

}


extern void work_m_00000000003074162567_1467715346_init()
{
	static char *pe[] = {(void *)Cont_27_0};
	xsi_register_didat("work_m_00000000003074162567_1467715346", "isim/test_isim_beh.exe.sim/work/m_00000000003074162567_1467715346.didat");
	xsi_register_executes(pe);
}

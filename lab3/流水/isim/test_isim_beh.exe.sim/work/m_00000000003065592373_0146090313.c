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

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/ise project/CPU_3/CPU.v";
static int ng1[] = {15, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {65535U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {31, 0};
static int ng6[] = {16, 0};



static void Always_307_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t43[8];
    char t44[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 1548);
    *((int *)t2) = 1;
    t3 = (t0 + 1380);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(307, ng0);

LAB5:    xsi_set_current_line(308, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 828);
    t9 = (t0 + 828);
    t10 = (t9 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t18 = (t15 >> 15);
    t22 = (t18 & 1);
    *((unsigned int *)t8) = t22;
    t25 = *((unsigned int *)t4);
    t27 = (t25 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t2) = t28;
    memset(t7, 0, 8);
    t5 = (t8 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t8);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t5) != 0)
        goto LAB10;

LAB11:    t10 = (t7 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t7);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t10) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t7) > 0)
        goto LAB18;

LAB19:    memcpy(t6, t12, 8);

LAB20:    t13 = (t0 + 828);
    t14 = (t0 + 828);
    t17 = (t14 + 44U);
    t21 = *((char **)t17);
    t46 = ((char*)((ng5)));
    t47 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t43, t44, t45, ((int*)(t21)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t43 + 4);
    t49 = *((unsigned int *)t48);
    t16 = (!(t49));
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t50);
    t19 = (!(t51));
    t20 = (t16 && t19);
    t52 = (t45 + 4);
    t53 = *((unsigned int *)t52);
    t23 = (!(t53));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB21;

LAB22:    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t5, t26, *((unsigned int *)t7), t30);
    goto LAB7;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB10:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB11;

LAB12:    t11 = ((char*)((ng3)));
    goto LAB13;

LAB14:    t12 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t6, 16, t11, 16, t12, 16);
    goto LAB20;

LAB18:    memcpy(t6, t11, 8);
    goto LAB20;

LAB21:    t54 = *((unsigned int *)t45);
    t26 = (t54 + 0);
    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t44);
    t29 = (t55 - t56);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t13, t6, t26, *((unsigned int *)t44), t30);
    goto LAB22;

}


extern void work_m_00000000003065592373_0146090313_init()
{
	static char *pe[] = {(void *)Always_307_0};
	xsi_register_didat("work_m_00000000003065592373_0146090313", "isim/test_isim_beh.exe.sim/work/m_00000000003065592373_0146090313.didat");
	xsi_register_executes(pe);
}

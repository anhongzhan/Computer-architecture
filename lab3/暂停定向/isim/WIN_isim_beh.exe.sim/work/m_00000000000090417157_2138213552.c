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
static const char *ng0 = "F:/ise project/CPU_5/CPU.v";
static const char *ng1 = "MAR";
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};
static int ng6[] = {8, 0};
static int ng7[] = {2, 0};
static int ng8[] = {23, 0};
static int ng9[] = {16, 0};
static int ng10[] = {3, 0};
static int ng11[] = {31, 0};
static int ng12[] = {24, 0};
static unsigned int ng13[] = {0U, 0U};



static void Initial_134_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1012);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_136_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    char *t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(139, ng0);

LAB13:    xsi_set_current_line(140, ng0);
    t28 = (t0 + 1012);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t32 = (t0 + 1012);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1012);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 600U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t31, 8, t30, t34, t37, 2, 1, t39, 32, 2);
    t38 = (t0 + 920);
    t43 = (t0 + 920);
    t44 = (t43 + 44U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng3)));
    t47 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1012);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1012);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 600U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t32 = (t0 + 920);
    t33 = (t0 + 920);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng5)));
    t37 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t40 + 4);
    t9 = *((unsigned int *)t38);
    t50 = (!(t9));
    t39 = (t41 + 4);
    t10 = *((unsigned int *)t39);
    t53 = (!(t10));
    t54 = (t50 && t53);
    t43 = (t42 + 4);
    t11 = *((unsigned int *)t43);
    t57 = (!(t11));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1012);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1012);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 600U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng7)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t32 = (t0 + 920);
    t33 = (t0 + 920);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng8)));
    t37 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t40 + 4);
    t9 = *((unsigned int *)t38);
    t50 = (!(t9));
    t39 = (t41 + 4);
    t10 = *((unsigned int *)t39);
    t53 = (!(t10));
    t54 = (t50 && t53);
    t43 = (t42 + 4);
    t11 = *((unsigned int *)t43);
    t57 = (!(t11));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1012);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1012);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 600U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng10)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t32 = (t0 + 920);
    t33 = (t0 + 920);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng11)));
    t37 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t40 + 4);
    t9 = *((unsigned int *)t38);
    t50 = (!(t9));
    t39 = (t41 + 4);
    t10 = *((unsigned int *)t39);
    t53 = (!(t10));
    t54 = (t50 && t53);
    t43 = (t42 + 4);
    t11 = *((unsigned int *)t43);
    t57 = (!(t11));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB20;

LAB21:    goto LAB12;

LAB14:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t38, t31, t60, *((unsigned int *)t41), t64);
    goto LAB15;

LAB16:    t12 = *((unsigned int *)t42);
    t60 = (t12 + 0);
    t13 = *((unsigned int *)t40);
    t14 = *((unsigned int *)t41);
    t63 = (t13 - t14);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t32, t6, t60, *((unsigned int *)t41), t64);
    goto LAB17;

LAB18:    t12 = *((unsigned int *)t42);
    t60 = (t12 + 0);
    t13 = *((unsigned int *)t40);
    t14 = *((unsigned int *)t41);
    t63 = (t13 - t14);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t32, t6, t60, *((unsigned int *)t41), t64);
    goto LAB19;

LAB20:    t12 = *((unsigned int *)t42);
    t60 = (t12 + 0);
    t13 = *((unsigned int *)t40);
    t14 = *((unsigned int *)t41);
    t63 = (t13 - t14);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t32, t6, t60, *((unsigned int *)t41), t64);
    goto LAB21;

}


extern void work_m_00000000000090417157_2138213552_init()
{
	static char *pe[] = {(void *)Initial_134_0,(void *)Always_136_1};
	xsi_register_didat("work_m_00000000000090417157_2138213552", "isim/WIN_isim_beh.exe.sim/work/m_00000000000090417157_2138213552.didat");
	xsi_register_executes(pe);
}

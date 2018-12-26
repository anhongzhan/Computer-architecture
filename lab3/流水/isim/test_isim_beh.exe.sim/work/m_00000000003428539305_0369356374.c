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
static const char *ng1 = "MAR";
static int ng2[] = {31, 0};
static int ng3[] = {24, 0};
static int ng4[] = {1, 0};
static int ng5[] = {23, 0};
static int ng6[] = {16, 0};
static int ng7[] = {2, 0};
static int ng8[] = {15, 0};
static int ng9[] = {8, 0};
static int ng10[] = {3, 0};
static int ng11[] = {7, 0};
static int ng12[] = {0, 0};



static void Initial_268_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(268, ng0);

LAB2:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 920);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_272_1(char *t0)
{
    char t7[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(272, ng0);
    t2 = (t0 + 1784);
    *((int *)t2) = 1;
    t3 = (t0 + 1616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(272, ng0);

LAB5:    xsi_set_current_line(273, ng0);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 920);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 600U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t0 + 828);
    t19 = (t0 + 828);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng2)));
    t23 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t8 = *((char **)t6);
    t9 = (t0 + 920);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t16, 32, 2);
    t14 = (t0 + 828);
    t15 = (t0 + 828);
    t19 = (t15 + 44U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    t22 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t17, t18, t41, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t17 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t41 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t8 = *((char **)t6);
    t9 = (t0 + 920);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng7)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t16, 32, 2);
    t14 = (t0 + 828);
    t15 = (t0 + 828);
    t19 = (t15 + 44U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng8)));
    t22 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t17, t18, t41, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t17 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t41 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(276, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t8 = *((char **)t6);
    t9 = (t0 + 920);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng10)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t16, 32, 2);
    t14 = (t0 + 828);
    t15 = (t0 + 828);
    t19 = (t15 + 44U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng11)));
    t22 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t17, t18, t41, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t17 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t41 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    goto LAB2;

LAB6:    t35 = *((unsigned int *)t18);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t17), t40);
    goto LAB7;

LAB8:    t35 = *((unsigned int *)t41);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t18), t40);
    goto LAB9;

LAB10:    t35 = *((unsigned int *)t41);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t18), t40);
    goto LAB11;

LAB12:    t35 = *((unsigned int *)t41);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t18), t40);
    goto LAB13;

}


extern void work_m_00000000003428539305_0369356374_init()
{
	static char *pe[] = {(void *)Initial_268_0,(void *)Always_272_1};
	xsi_register_didat("work_m_00000000003428539305_0369356374", "isim/test_isim_beh.exe.sim/work/m_00000000003428539305_0369356374.didat");
	xsi_register_executes(pe);
}

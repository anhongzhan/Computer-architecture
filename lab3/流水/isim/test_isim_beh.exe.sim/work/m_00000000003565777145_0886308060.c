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
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void Always_230_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 2100);
    *((int *)t2) = 1;
    t3 = (t0 + 1932);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(230, ng0);

LAB5:    xsi_set_current_line(231, ng0);
    t6 = (t0 + 876U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t5, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t37 = *((unsigned int *)t5);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t41, 8);

LAB22:    t35 = (t0 + 1288);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 32);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);

LAB23:    t2 = ((char*)((ng2)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng6)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng7)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng8)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t30 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 600U);
    t36 = *((char **)t35);
    goto LAB15;

LAB16:    t35 = (t0 + 692U);
    t41 = *((char **)t35);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 32, t36, 32, t41, 32);
    goto LAB22;

LAB20:    memcpy(t4, t36, 8);
    goto LAB22;

LAB24:    xsi_set_current_line(234, ng0);

LAB41:    xsi_set_current_line(235, ng0);
    t6 = (t0 + 1288);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1380);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t9, 32, t24, 32);
    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 32);
    goto LAB40;

LAB26:    xsi_set_current_line(237, ng0);

LAB42:    xsi_set_current_line(238, ng0);
    t6 = (t0 + 1380);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1288);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t9, 32, t24, 32);
    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 32);
    goto LAB40;

LAB28:    xsi_set_current_line(240, ng0);

LAB43:    xsi_set_current_line(241, ng0);
    t6 = (t0 + 1288);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1380);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t9, 32, t24, 32);
    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 32);
    goto LAB40;

LAB30:    xsi_set_current_line(243, ng0);

LAB44:    xsi_set_current_line(244, ng0);
    t6 = (t0 + 1380);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1288);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t9, 32, t24, 32);
    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 32);
    goto LAB40;

LAB32:    xsi_set_current_line(246, ng0);

LAB45:    xsi_set_current_line(247, ng0);
    t6 = (t0 + 1288);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1380);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t24);
    t13 = (t11 & t12);
    *((unsigned int *)t4) = t13;
    t30 = (t9 + 4);
    t31 = (t24 + 4);
    t35 = (t4 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t31);
    t16 = (t14 | t15);
    *((unsigned int *)t35) = t16;
    t17 = *((unsigned int *)t35);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB46;

LAB47:
LAB48:    t45 = (t0 + 1196);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 32);
    goto LAB40;

LAB34:    xsi_set_current_line(249, ng0);

LAB49:    xsi_set_current_line(250, ng0);
    t6 = (t0 + 1288);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1380);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t24);
    t13 = (t11 | t12);
    *((unsigned int *)t4) = t13;
    t30 = (t9 + 4);
    t31 = (t24 + 4);
    t35 = (t4 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t31);
    t16 = (t14 | t15);
    *((unsigned int *)t35) = t16;
    t17 = *((unsigned int *)t35);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB50;

LAB51:
LAB52:    t45 = (t0 + 1196);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 32);
    goto LAB40;

LAB36:    xsi_set_current_line(252, ng0);

LAB53:    xsi_set_current_line(253, ng0);
    t6 = (t0 + 1288);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1380);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t24);
    t13 = (t11 ^ t12);
    *((unsigned int *)t4) = t13;
    t30 = (t9 + 4);
    t31 = (t24 + 4);
    t35 = (t4 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t31);
    t16 = (t14 | t15);
    *((unsigned int *)t35) = t16;
    t17 = *((unsigned int *)t35);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB54;

LAB55:
LAB56:    t36 = (t0 + 1196);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 32);
    goto LAB40;

LAB38:    xsi_set_current_line(255, ng0);

LAB57:    xsi_set_current_line(256, ng0);
    t6 = (t0 + 1288);
    t7 = (t6 + 36U);
    t9 = *((char **)t7);
    t10 = (t0 + 1380);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    memset(t8, 0, 8);
    t30 = (t9 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB59;

LAB58:    t31 = (t24 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t9) < *((unsigned int *)t24))
        goto LAB60;

LAB61:    memset(t5, 0, 8);
    t36 = (t8 + 4);
    t11 = *((unsigned int *)t36);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t36) != 0)
        goto LAB65;

LAB66:    t45 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t45);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB67;

LAB68:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t45);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t45) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t5) > 0)
        goto LAB73;

LAB74:    memcpy(t4, t47, 8);

LAB75:    t48 = (t0 + 1196);
    xsi_vlogvar_assign_value(t48, t4, 0, 0, 32);
    goto LAB40;

LAB46:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t4) = (t19 | t20);
    t36 = (t9 + 4);
    t41 = (t24 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t25 = *((unsigned int *)t36);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t41);
    t32 = (~(t29));
    t43 = (t22 & t26);
    t44 = (t28 & t32);
    t33 = (~(t43));
    t34 = (~(t44));
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 & t33);
    t38 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t38 & t34);
    t39 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t39 & t33);
    t40 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t40 & t34);
    goto LAB48;

LAB50:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t4) = (t19 | t20);
    t36 = (t9 + 4);
    t41 = (t24 + 4);
    t21 = *((unsigned int *)t36);
    t22 = (~(t21));
    t25 = *((unsigned int *)t9);
    t43 = (t25 & t22);
    t26 = *((unsigned int *)t41);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t44 = (t28 & t27);
    t29 = (~(t43));
    t32 = (~(t44));
    t33 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t33 & t29);
    t34 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t34 & t32);
    goto LAB52;

LAB54:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t4) = (t19 | t20);
    goto LAB56;

LAB59:    t35 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t8) = 1;
    goto LAB61;

LAB63:    *((unsigned int *)t5) = 1;
    goto LAB66;

LAB65:    t41 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB66;

LAB67:    t46 = ((char*)((ng3)));
    goto LAB68;

LAB69:    t47 = ((char*)((ng2)));
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t4, 32, t46, 32, t47, 32);
    goto LAB75;

LAB73:    memcpy(t4, t46, 8);
    goto LAB75;

}


extern void work_m_00000000003565777145_0886308060_init()
{
	static char *pe[] = {(void *)Always_230_0};
	xsi_register_didat("work_m_00000000003565777145_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000003565777145_0886308060.didat");
	xsi_register_executes(pe);
}

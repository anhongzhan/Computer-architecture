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
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};



static void Always_137_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2560);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    memcpy(t61, t22, 8);

LAB16:    memset(t7, 0, 8);
    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t89) != 0)
        goto LAB30;

LAB31:    t96 = (t7 + 4);
    t97 = *((unsigned int *)t7);
    t98 = *((unsigned int *)t96);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB32;

LAB33:    t101 = *((unsigned int *)t7);
    t102 = (~(t101));
    t103 = *((unsigned int *)t96);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t96) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t7) > 0)
        goto LAB38;

LAB39:    memcpy(t6, t105, 8);

LAB40:    t106 = (t0 + 1840);
    xsi_vlogvar_assign_value(t106, t6, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB41:    t2 = ((char*)((ng2)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng6)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng7)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng9)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng10)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng11)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng12)));
    t80 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t80 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB2;

LAB8:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 784U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB20;

LAB17:    if (t49 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t37) = 1;

LAB20:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t54) != 0)
        goto LAB23;

LAB24:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t53) = 1;
    goto LAB24;

LAB23:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB24;

LAB25:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB27;

LAB28:    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB30:    t95 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB31;

LAB32:    t100 = ((char*)((ng3)));
    goto LAB33;

LAB34:    t105 = ((char*)((ng4)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t6, 32, t100, 32, t105, 32);
    goto LAB40;

LAB38:    memcpy(t6, t100, 8);
    goto LAB40;

LAB42:    xsi_set_current_line(145, ng0);

LAB57:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

LAB44:    xsi_set_current_line(148, ng0);

LAB58:    xsi_set_current_line(149, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

LAB46:    xsi_set_current_line(151, ng0);

LAB59:    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

LAB48:    xsi_set_current_line(154, ng0);

LAB60:    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

LAB50:    xsi_set_current_line(157, ng0);

LAB61:    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

LAB52:    xsi_set_current_line(160, ng0);

LAB62:    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

LAB54:    xsi_set_current_line(163, ng0);

LAB63:    xsi_set_current_line(164, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 1748);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB56;

}


extern void work_m_00000000000375947649_0103510313_init()
{
	static char *pe[] = {(void *)Always_137_0};
	xsi_register_didat("work_m_00000000000375947649_0103510313", "isim/test_isim_beh.exe.sim/work/m_00000000000375947649_0103510313.didat");
	xsi_register_executes(pe);
}

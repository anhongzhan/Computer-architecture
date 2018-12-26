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
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static int ng12[] = {1, 0};



static void Always_6_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(19, ng0);

LAB40:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB29:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB41:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB60;

LAB61:
LAB63:
LAB62:    xsi_set_current_line(33, ng0);

LAB75:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB64:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);

LAB76:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB95;

LAB96:
LAB98:
LAB97:    xsi_set_current_line(47, ng0);

LAB110:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);

LAB99:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 968U);
    t7 = *((char **)t2);

LAB111:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB116;

LAB117:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB120;

LAB121:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB122;

LAB123:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB124;

LAB125:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB126;

LAB127:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB128;

LAB129:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t6 == 1)
        goto LAB130;

LAB131:
LAB133:
LAB132:    xsi_set_current_line(61, ng0);

LAB145:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t8 = (t0 + 1472);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);

LAB134:    goto LAB2;

LAB7:    xsi_set_current_line(9, ng0);

LAB30:    xsi_set_current_line(9, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB29;

LAB9:    xsi_set_current_line(10, ng0);

LAB31:    xsi_set_current_line(10, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB11:    xsi_set_current_line(11, ng0);

LAB32:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(12, ng0);

LAB33:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB15:    xsi_set_current_line(13, ng0);

LAB34:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB17:    xsi_set_current_line(14, ng0);

LAB35:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB19:    xsi_set_current_line(15, ng0);

LAB36:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB21:    xsi_set_current_line(16, ng0);

LAB37:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB23:    xsi_set_current_line(17, ng0);

LAB38:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB25:    xsi_set_current_line(18, ng0);

LAB39:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB29;

LAB42:    xsi_set_current_line(23, ng0);

LAB65:    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB44:    xsi_set_current_line(24, ng0);

LAB66:    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB46:    xsi_set_current_line(25, ng0);

LAB67:    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB48:    xsi_set_current_line(26, ng0);

LAB68:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB50:    xsi_set_current_line(27, ng0);

LAB69:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB52:    xsi_set_current_line(28, ng0);

LAB70:    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB54:    xsi_set_current_line(29, ng0);

LAB71:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng12)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB56:    xsi_set_current_line(30, ng0);

LAB72:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng12)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB58:    xsi_set_current_line(31, ng0);

LAB73:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB60:    xsi_set_current_line(32, ng0);

LAB74:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB64;

LAB77:    xsi_set_current_line(37, ng0);

LAB100:    xsi_set_current_line(37, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB79:    xsi_set_current_line(38, ng0);

LAB101:    xsi_set_current_line(38, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB81:    xsi_set_current_line(39, ng0);

LAB102:    xsi_set_current_line(39, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB83:    xsi_set_current_line(40, ng0);

LAB103:    xsi_set_current_line(40, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB85:    xsi_set_current_line(41, ng0);

LAB104:    xsi_set_current_line(41, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB87:    xsi_set_current_line(42, ng0);

LAB105:    xsi_set_current_line(42, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB89:    xsi_set_current_line(43, ng0);

LAB106:    xsi_set_current_line(43, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng12)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB91:    xsi_set_current_line(44, ng0);

LAB107:    xsi_set_current_line(44, ng0);
    t7 = ((char*)((ng12)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB93:    xsi_set_current_line(45, ng0);

LAB108:    xsi_set_current_line(45, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB95:    xsi_set_current_line(46, ng0);

LAB109:    xsi_set_current_line(46, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB99;

LAB112:    xsi_set_current_line(51, ng0);

LAB135:    xsi_set_current_line(51, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB114:    xsi_set_current_line(52, ng0);

LAB136:    xsi_set_current_line(52, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB116:    xsi_set_current_line(53, ng0);

LAB137:    xsi_set_current_line(53, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB118:    xsi_set_current_line(54, ng0);

LAB138:    xsi_set_current_line(54, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB120:    xsi_set_current_line(55, ng0);

LAB139:    xsi_set_current_line(55, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB122:    xsi_set_current_line(56, ng0);

LAB140:    xsi_set_current_line(56, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB124:    xsi_set_current_line(57, ng0);

LAB141:    xsi_set_current_line(57, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB126:    xsi_set_current_line(58, ng0);

LAB142:    xsi_set_current_line(58, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB128:    xsi_set_current_line(59, ng0);

LAB143:    xsi_set_current_line(59, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

LAB130:    xsi_set_current_line(60, ng0);

LAB144:    xsi_set_current_line(60, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB134;

}


extern void work_m_00000000002353221080_4066630463_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000002353221080_4066630463", "isim/WIN_isim_beh.exe.sim/work/m_00000000002353221080_4066630463.didat");
	xsi_register_executes(pe);
}

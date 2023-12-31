
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                            global.c
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                                                    Forrest Yu, 2005
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#define GLOBAL_VARIABLES_HERE

#include "type.h"
#include "const.h"
#include "protect.h"
#include "proto.h"
#include "global.h"


PUBLIC	PROCESS			proc_table[NR_TASKS];

PUBLIC	char			task_stack[STACK_SIZE_TOTAL];

// 扩大了task_table
PUBLIC	TASK	task_table[NR_TASKS] = {
					{TestB, STACK_SIZE_TESTB, "TestB"},
					{TestC, STACK_SIZE_TESTC, "TestC"},
                    {TestD, STACK_SIZE_TESTD, "TestD"},
                    {TestE, STACK_SIZE_TESTE, "TestE"},
                    {TestF, STACK_SIZE_TESTF, "TestF"},
                    {TestA, STACK_SIZE_TESTA, "TestA"},};

PUBLIC	irq_handler		irq_table[NR_IRQ];

//系统调用表，添加了新的系统调用
PUBLIC	system_call		sys_call_table[NR_SYS_CALL] = {sys_get_ticks, sys_disp_str, sys_delay, sys_p, sys_v};


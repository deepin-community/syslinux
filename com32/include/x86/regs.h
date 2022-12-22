#ifndef _X86_REGS_H
#define _X86_REGS_H

/*
 * Register definitions for x86 - should be assembly-safe
 */

/* EFLAGS definitions */
#define EFLAGS_CF	0x00000001
#define EFLAGS_PF	0x00000004
#define EFLAGS_AF	0x00000010
#define EFLAGS_ZF	0x00000040
#define EFLAGS_SF	0x00000080
#define EFLAGS_TF	0x00000100
#define EFLAGS_IF	0x00000200
#define EFLAGS_DF	0x00000400
#define EFLAGS_OF	0x00000800
#define EFLAGS_IOPL	0x00003000
#define EFLAGS_NT	0x00004000
#define EFLAGS_RF	0x00010000
#define EFLAGS_VM	0x00020000
#define EFLAGS_AC	0x00040000
#define EFLAGS_VIF	0x00080000
#define EFLAGS_VIP	0x00100000
#define EFLAGS_ID	0x00200000

/* CR0 definitions */
#define CR0_PE		0x00000001
#define CR0_MP  	0x00000002
#define CR0_EM  	0x00000004
#define CR0_TS  	0x00000008
#define CR0_ET  	0x00000010
#define CR0_NE  	0x00000020
#define CR0_WP  	0x00010000
#define CR0_AM  	0x00040000
#define CR0_NW  	0x20000000
#define CR0_CD  	0x40000000
#define CR0_PG  	0x80000000

/* CR4 definitions */
#define CR4_VME		0x00000001
#define CR4_PVI		0x00000002
#define CR4_TSD		0x00000004
#define CR4_DE		0x00000008
#define CR4_PSE		0x00000010
#define CR4_PAE		0x00000020
#define CR4_MCE		0x00000040
#define CR4_PGE		0x00000080
#define CR4_PCE		0x00000100
#define CR4_OSFXSR	0x00000200
#define CR4_OSXMMEXCEPT	0x00000400
#define CR4_UMIP	0x00000800
#define CR4_VA57	0x00001000
#define CR4_VMXE	0x00002000
#define CR4_SMXE	0x00004000
#define CR4_SEE		0x00008000
#define CR4_FSGSBASE	0x00010000
#define CR4_PCIDE	0x00020000
#define CR4_OSXSAVE	0x00040000
#define CR4_SMEP	0x00100000
#define CR4_SMAP	0x00200000
#define CR4_PKE		0x00400000
#define CR4_CET		0x00800000

#endif /* _X86_REGS_H */

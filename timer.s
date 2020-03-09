	.cpu cortex-m0
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 4
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"timer.c"
	.text
	.align	1
	.global	SysTick_Config
	.arch armv6s-m
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	SysTick_Config, %function
SysTick_Config:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L4
	subs	r3, r0, #1
	push	{r4, lr}
	movs	r0, #1
	cmp	r3, r2
	bhi	.L1
	ldr	r4, .L4+4
	subs	r0, r0, #2
	str	r3, [r4, #4]
	movs	r1, #3
	bl	NVIC_SetPriority
	movs	r0, #0
	movs	r3, #7
	str	r0, [r4, #8]
	str	r3, [r4]
.L1:
	@ sp needed
	pop	{r4, pc}
.L5:
	.align	2
.L4:
	.word	16777215
	.word	-536813552
	.size	SysTick_Config, .-SysTick_Config
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 8-2018-q4-major) 8.2.1 20181213 (release) [gcc-8-branch revision 267074]"

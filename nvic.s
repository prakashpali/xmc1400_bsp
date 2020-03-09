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
	.file	"nvic.c"
	.text
	.align	1
	.global	NVIC_SetPriority
	.arch armv6s-m
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	NVIC_SetPriority, %function
NVIC_SetPriority:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r5, #255
	movs	r4, #3
	movs	r2, r5
	uxtb	r3, r0
	ands	r4, r3
	lsls	r4, r4, #3
	lsls	r2, r2, r4
	lsls	r1, r1, #6
	ands	r1, r5
	mvns	r2, r2
	lsls	r1, r1, r4
	cmp	r0, #0
	blt	.L2
	movs	r4, #192
	ldr	r3, .L4
	lsrs	r0, r0, #2
	lsls	r0, r0, #2
	adds	r0, r0, r3
	lsls	r4, r4, #2
	ldr	r3, [r0, r4]
	ands	r2, r3
	orrs	r1, r2
	str	r1, [r0, r4]
.L1:
	@ sp needed
	pop	{r4, r5, pc}
.L2:
	movs	r0, #15
	ands	r3, r0
	subs	r3, r3, #8
	ldr	r0, .L4+4
	lsrs	r3, r3, #2
	lsls	r3, r3, #2
	adds	r3, r3, r0
	ldr	r0, [r3, #28]
	ands	r2, r0
	orrs	r1, r2
	str	r1, [r3, #28]
	b	.L1
.L5:
	.align	2
.L4:
	.word	-536813312
	.word	-536810240
	.size	NVIC_SetPriority, .-NVIC_SetPriority
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 8-2018-q4-major) 8.2.1 20181213 (release) [gcc-8-branch revision 267074]"

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
	.file	"clock.c"
	.text
	.global	__aeabi_uidiv
	.global	__aeabi_idiv
	.align	1
	.global	SystemCoreClockUpdate
	.arch armv6s-m
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	SystemCoreClockUpdate, %function
SystemCoreClockUpdate:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	movs	r5, #255
	ldr	r2, .L8
	ldr	r4, .L8+4
	ldr	r3, [r2]
	lsrs	r3, r3, #8
	ands	r3, r5
	beq	.L2
	movs	r6, #192
	ldr	r0, [r2]
	ldr	r1, [r2, #28]
	lsls	r6, r6, #2
	lsls	r1, r1, #8
	ands	r1, r6
	ands	r0, r5
	ldr	r2, [r2, #28]
	orrs	r1, r0
	lsls	r3, r3, #10
	adds	r1, r1, r3
	lsls	r3, r2, #22
	bmi	.L3
	ldr	r0, .L8+8
.L6:
	bl	__aeabi_uidiv
	lsls	r0, r0, #4
	str	r0, [r4]
.L1:
	@ sp needed
	pop	{r4, r5, r6, pc}
.L3:
	ldr	r0, .L8+12
	b	.L6
.L2:
	ldr	r3, [r2, #28]
	lsls	r3, r3, #22
	bmi	.L5
	ldr	r3, .L8+16
.L7:
	str	r3, [r4]
	b	.L1
.L5:
	ldr	r3, .L8+20
	b	.L7
.L9:
	.align	2
.L8:
	.word	1073808128
	.word	.LANCHOR0
	.word	-1222967296
	.word	1280000000
	.word	48000000
	.word	20000000
	.size	SystemCoreClockUpdate, .-SystemCoreClockUpdate
	.align	1
	.global	OSCHP_GetFrequency
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	OSCHP_GetFrequency, %function
OSCHP_GetFrequency:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r0, .L11
	@ sp needed
	bx	lr
.L12:
	.align	2
.L11:
	.word	20000000
	.size	OSCHP_GetFrequency, .-OSCHP_GetFrequency
	.global	SystemCoreClock
	.section	.no_init,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	SystemCoreClock, %object
	.size	SystemCoreClock, 4
SystemCoreClock:
	.space	4
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 8-2018-q4-major) 8.2.1 20181213 (release) [gcc-8-branch revision 267074]"

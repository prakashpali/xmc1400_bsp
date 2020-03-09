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
	.file	"dts.c"
	.text
	.align	1
	.global	dtsInit
	.arch armv6s-m
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsInit, %function
dtsInit:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #1
	ldr	r3, .L2
	@ sp needed
	strh	r2, [r3, #24]
	bx	lr
.L3:
	.align	2
.L2:
	.word	1073811456
	.size	dtsInit, .-dtsInit
	.align	1
	.global	dtsEnable
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsEnable, %function
dtsEnable:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #1
	ldr	r3, .L5
	@ sp needed
	strh	r2, [r3, #24]
	bx	lr
.L6:
	.align	2
.L5:
	.word	1073811456
	.size	dtsEnable, .-dtsEnable
	.align	1
	.global	dtsDisable
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsDisable, %function
dtsDisable:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #0
	ldr	r3, .L8
	@ sp needed
	strh	r2, [r3, #24]
	bx	lr
.L9:
	.align	2
.L8:
	.word	1073811456
	.size	dtsDisable, .-dtsDisable
	.align	1
	.global	dtsSetHighIntVal
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsSetHighIntVal, %function
dtsSetHighIntVal:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L11
	@ sp needed
	strh	r0, [r3, #30]
	bx	lr
.L12:
	.align	2
.L11:
	.word	1073811456
	.size	dtsSetHighIntVal, .-dtsSetHighIntVal
	.align	1
	.global	dtsSetLowIntVal
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsSetLowIntVal, %function
dtsSetLowIntVal:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L14
	@ sp needed
	strh	r0, [r3, #34]
	bx	lr
.L15:
	.align	2
.L14:
	.word	1073811456
	.size	dtsSetLowIntVal, .-dtsSetLowIntVal
	.align	1
	.global	dtsIsTempAboveTh
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsIsTempAboveTh, %function
dtsIsTempAboveTh:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L17
	movs	r0, #0
	ldr	r3, [r3, #60]
	@ sp needed
	bx	lr
.L18:
	.align	2
.L17:
	.word	1073807360
	.size	dtsIsTempAboveTh, .-dtsIsTempAboveTh
	.align	1
	.global	dtsIsTempBelowTh
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsIsTempBelowTh, %function
dtsIsTempBelowTh:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L20
	movs	r0, #0
	ldr	r3, [r3, #60]
	@ sp needed
	bx	lr
.L21:
	.align	2
.L20:
	.word	1073807360
	.size	dtsIsTempBelowTh, .-dtsIsTempBelowTh
	.global	__aeabi_idiv
	.align	1
	.global	dtsGetTemp
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	dtsGetTemp, %function
dtsGetTemp:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, #128
	push	{r4, lr}
	ldr	r1, .L25
	lsls	r3, r3, #22
.L23:
	ldr	r2, [r1, #60]
	tst	r2, r3
	bne	.L23
	movs	r0, #138
	ldr	r3, .L25+4
	ldr	r2, .L25+8
	ldrh	r3, [r3, #40]
	adds	r0, r0, #255
	adds	r3, r3, r2
	muls	r0, r3
	ldr	r1, .L25+12
	bl	__aeabi_idiv
	@ sp needed
	uxth	r0, r0
	pop	{r4, pc}
.L26:
	.align	2
.L25:
	.word	1073807360
	.word	1073811456
	.word	-6000
	.word	65535
	.size	dtsGetTemp, .-dtsGetTemp
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 8-2018-q4-major) 8.2.1 20181213 (release) [gcc-8-branch revision 267074]"

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
	.file	"Main.c"
	.text
	.section	.text.startup,"ax",%progbits
	.align	1
	.global	main
	.arch armv6s-m
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, #192
	push	{r4, r5, r6, lr}
	ldr	r4, .L5
	ldr	r2, .L5+4
	str	r3, [r4, #36]
	ldr	r3, .L5+8
	sub	sp, sp, #32
	str	r2, [r3]
	movs	r2, #128
	lsls	r2, r2, #23
.L2:
	ldr	r1, [r3]
	tst	r1, r2
	bne	.L2
	movs	r3, #195
	str	r3, [r4, #36]
	bl	SystemCoreClockUpdate
	ldr	r0, .L5+12
	bl	SysTick_Config
	movs	r2, #252
	ldr	r3, [r4, #112]
	lsls	r2, r2, #16
	ands	r3, r2
	movs	r2, #224
	str	r3, [r4, #112]
	ldr	r3, .L5+16
	lsls	r2, r2, #3
	ldr	r1, [r3]
	movs	r4, #3
	orrs	r2, r1
	movs	r1, #195
	movs	r6, #99
	str	r2, [r3]
	lsls	r1, r1, #2
	ldr	r0, [r3, r1]
	ldr	r2, .L5+20
	orrs	r2, r0
	str	r2, [r3, r1]
	bl	UART_Init
	bl	dtsInit
	ldr	r5, .L5+24
	movs	r3, r4
	movs	r2, r4
	movs	r1, r4
	str	r5, [sp, #24]
	str	r6, [sp, #20]
	str	r4, [sp, #16]
	str	r4, [sp, #12]
	str	r4, [sp, #8]
	str	r4, [sp, #4]
	str	r4, [sp]
	ldr	r0, .L5+28
	bl	print
	movs	r3, r5
	movs	r2, r4
	movs	r1, r4
	str	r6, [sp]
	ldr	r0, .L5+32
	bl	print
	movs	r3, r4
	movs	r2, r6
	movs	r1, r5
	ldr	r0, .L5+36
	bl	print
	movs	r1, #252
	ldr	r3, .L5+40
	ldr	r2, [r3]
	bics	r2, r1
	str	r2, [r3]
	movs	r2, #192
	ldr	r1, [r3]
	orrs	r2, r1
	str	r2, [r3]
	ldr	r2, [r3]
	ldr	r1, .L5+44
	ands	r2, r1
	str	r2, [r3]
	movs	r2, #192
	ldr	r1, [r3]
	lsls	r2, r2, #8
	orrs	r2, r1
	str	r2, [r3]
	ldr	r2, [r3]
	ldr	r1, .L5+48
	ands	r2, r1
	str	r2, [r3]
	movs	r2, #192
	ldr	r1, [r3]
	lsls	r2, r2, #16
	orrs	r2, r1
	str	r2, [r3]
	ldr	r2, [r3]
	lsls	r2, r2, #6
	lsrs	r2, r2, #6
	str	r2, [r3]
	movs	r2, #192
	ldr	r1, [r3]
	lsls	r2, r2, #24
	orrs	r2, r1
	str	r2, [r3]
.L3:
	b	.L3
.L6:
	.align	2
.L5:
	.word	1073807360
	.word	1072694784
	.word	1073808128
	.word	8000000
	.word	-536813312
	.word	50529024
	.word	.LC2
	.word	.LC0
	.word	.LC4
	.word	.LC6
	.word	1074005008
	.word	-64513
	.word	-16515073
	.size	main, .-main
	.text
	.align	1
	.global	SysTick_Handler
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	SysTick_Handler, %function
SysTick_Handler:
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #36
	add	r5, sp, #4
	movs	r2, #25
	ldr	r1, .L10
	movs	r0, r5
	bl	memcpy
	movs	r4, #0
.L8:
	ldrb	r0, [r5, r4]
	adds	r4, r4, #1
	uxtb	r0, r0
	bl	sendChar
	cmp	r4, #25
	bne	.L8
	movs	r2, #1
	ldr	r3, .L10+4
	ldr	r1, [r3]
	eors	r2, r1
	str	r2, [r3]
	movs	r2, #2
	ldr	r1, [r3]
	eors	r2, r1
	str	r2, [r3]
	movs	r2, #4
	ldr	r1, [r3]
	eors	r2, r1
	str	r2, [r3]
	movs	r2, #8
	ldr	r1, [r3]
	eors	r2, r1
	str	r2, [r3]
	add	sp, sp, #36
	@ sp needed
	pop	{r4, r5, pc}
.L11:
	.align	2
.L10:
	.word	.LANCHOR0
	.word	1074004992
	.size	SysTick_Handler, .-SysTick_Handler
	.section	.rodata
	.set	.LANCHOR0,. + 0
.LC8:
	.ascii	"Timer Interrupt. Temp :\015\012\000"
	.section	.rodata.str1.1,"aMS",%progbits,1
.LC0:
	.ascii	"Test 1: %d %d %d %d %d %d %d %x %c %s\012\015\000"
.LC2:
	.ascii	"string\000"
.LC4:
	.ascii	"Test 2: %x %d %s %c\012\015\000"
.LC6:
	.ascii	"Test 3: %s %c %d\012\015\000"
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 8-2018-q4-major) 8.2.1 20181213 (release) [gcc-8-branch revision 267074]"

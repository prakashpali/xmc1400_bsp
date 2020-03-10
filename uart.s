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
	.file	"uart.c"
	.text
	.align	1
	.global	UART_Init
	.arch armv6s-m
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	UART_Init, %function
UART_Init:
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	sub	sp, sp, #28
	add	r4, sp, #4
	movs	r2, #19
	ldr	r1, .L6
	movs	r0, r4
	bl	memcpy
	movs	r3, #23
	movs	r1, #0
	add	r3, r3, sp
	strb	r1, [r3]
	movs	r3, #192
	ldr	r2, .L6+4
	ldr	r0, .L6+8
	str	r3, [r2, #36]
	ldr	r5, [r0, #16]
	subs	r3, r3, #184
	orrs	r3, r5
	str	r3, [r0, #16]
	movs	r3, #195
	str	r3, [r2, #36]
	movs	r2, #3
	ldr	r3, .L6+12
	ldr	r5, .L6+16
	ldr	r0, [r3, #12]
	ldr	r6, .L6+20
	orrs	r2, r0
	str	r2, [r3, #12]
	ldr	r2, [r3, #16]
	ldr	r0, .L6+24
	ldr	r7, .L6+28
	ands	r2, r0
	str	r2, [r3, #16]
	ldr	r0, [r3, #16]
	ldr	r2, .L6+32
	orrs	r2, r0
	movs	r0, #144
	str	r2, [r3, #16]
	lsls	r0, r0, #23
	ldr	r2, [r0, #20]
	ands	r2, r5
	str	r2, [r0, #20]
	ldr	r0, [r3, #20]
	ldr	r2, .L6+36
	ldr	r5, .L6+40
	orrs	r2, r0
	str	r2, [r3, #20]
	ldr	r2, [r3, #52]
	ldr	r0, .L6+44
	ands	r2, r0
	str	r2, [r3, #52]
	ldr	r0, [r3, #52]
	ldr	r2, .L6+48
	orrs	r2, r0
	str	r2, [r3, #52]
	ldr	r2, [r3, #56]
	ldr	r0, .L6+52
	ands	r2, r0
	str	r2, [r3, #56]
	movs	r2, #160
	ldr	r0, [r3, #56]
	lsls	r2, r2, #3
	orrs	r2, r0
	str	r2, [r3, #56]
	ldr	r2, [r3, #60]
	ldr	r0, .L6+56
	ands	r2, r0
	str	r2, [r3, #60]
	ldr	r0, [r3, #60]
	ldr	r2, .L6+60
	orrs	r2, r0
	str	r2, [r3, #60]
	ldr	r2, .L6+64
	ldr	r0, [r2, #12]
	ands	r0, r5
	str	r0, [r2, #12]
	movs	r0, #192
	ldr	r5, [r2, #12]
	lsls	r0, r0, #19
	orrs	r0, r5
	str	r0, [r2, #12]
	ldr	r2, .L6+68
	ldr	r0, [r2]
	lsls	r0, r0, #6
	lsrs	r0, r0, #6
	str	r0, [r2]
	ldr	r0, [r2]
	str	r0, [r2]
	movs	r0, #7
	ldr	r5, [r3, #28]
	bics	r5, r0
	str	r5, [r3, #28]
	ldr	r5, [r2]
	ands	r5, r6
	str	r5, [r2]
	movs	r5, #156
	ldr	r6, [r2]
	lsls	r5, r5, #16
	orrs	r5, r6
	str	r5, [r2]
	ldr	r2, [r3, #64]
	ldr	r5, .L6+72
	ands	r2, r5
	str	r2, [r3, #64]
	movs	r2, #2
	ldr	r5, [r3, #64]
	orrs	r2, r5
	str	r2, [r3, #64]
	movs	r2, #128
	ldr	r5, [r3, #60]
	orrs	r2, r5
	str	r2, [r3, #60]
	movs	r2, #224
	ldr	r5, [r3, #24]
	lsls	r2, r2, #11
	orrs	r2, r5
	str	r2, [r3, #24]
	movs	r2, #128
	ldr	r5, [r3, #64]
	lsls	r2, r2, #7
	orrs	r2, r5
	str	r2, [r3, #64]
	movs	r2, #224
	ldr	r5, [r3, #24]
	lsls	r2, r2, #3
	orrs	r2, r5
	str	r2, [r3, #24]
	movs	r2, #128
	ldr	r5, [r3, #64]
	lsls	r2, r2, #5
	orrs	r2, r5
	str	r2, [r3, #64]
	ldr	r2, [r3, #24]
	ldr	r5, .L6+76
	orrs	r0, r2
	ldr	r2, .L6+80
	str	r0, [r3, #24]
	str	r1, [r2]
.L2:
	ldr	r0, [r2]
	cmp	r0, #17
	bls	.L5
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7, pc}
.L5:
	ldr	r0, [r2]
	ldrb	r6, [r4, r0]
	ldr	r0, [r2]
	uxtb	r6, r6
	adds	r0, r0, #96
	lsls	r0, r0, #2
	str	r6, [r3, r0]
	str	r1, [r5]
.L3:
	ldr	r0, [r5]
	cmp	r0, r7
	bls	.L4
	ldr	r0, [r2]
	adds	r0, r0, #1
	str	r0, [r2]
	b	.L2
.L4:
	ldr	r0, [r5]
	adds	r0, r0, #1
	str	r0, [r5]
	b	.L3
.L7:
	.align	2
.L6:
	.word	.LANCHOR0
	.word	1073807360
	.word	1073808128
	.word	1207960064
	.word	-67075860
	.word	-16515073
	.word	-50176
	.word	999
	.word	33358
	.word	277504
	.word	-117440576
	.word	-255787777
	.word	117899522
	.word	-3073
	.word	-65283
	.word	2305
	.word	1207960316
	.word	1074004240
	.word	-784
	.word	.LANCHOR1
	.word	i
	.size	UART_Init, .-UART_Init
	.align	1
	.global	sendChar
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	sendChar, %function
sendChar:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, #192
	ldr	r2, .L9
	lsls	r3, r3, #1
	str	r0, [r2, r3]
	@ sp needed
	bx	lr
.L10:
	.align	2
.L9:
	.word	1207960064
	.size	sendChar, .-sendChar
	.align	1
	.global	print
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	print, %function
print:
	@ args = 4, pretend = 16, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 1
	push	{r0, r1, r2, r3}
	movs	r1, #192
	push	{r4, r5, lr}
	ldr	r2, .L25
	add	r3, sp, #16
	lsls	r1, r1, #1
.L12:
	ldr	r4, [sp, #12]
	ldrb	r0, [r4]
	cmp	r0, #0
	bne	.L23
	adds	r0, r0, #1
	@ sp needed
	pop	{r4, r5}
	pop	{r3}
	add	sp, sp, #16
	bx	r3
.L23:
	adds	r5, r4, #1
	cmp	r0, #37
	bne	.L13
	ldrb	r0, [r4, #1]
	str	r5, [sp, #12]
	cmp	r0, #100
	beq	.L14
	bhi	.L15
	cmp	r0, #99
	beq	.L16
.L17:
	ldr	r0, [sp, #12]
	adds	r0, r0, #1
	str	r0, [sp, #12]
	b	.L12
.L15:
	cmp	r0, #115
	beq	.L18
	cmp	r0, #120
	bne	.L17
	movs	r4, #48
	str	r4, [r2, r1]
	str	r0, [r2, r1]
	ldrb	r0, [r3]
	adds	r0, r0, r4
	b	.L24
.L14:
	ldrb	r0, [r3]
	adds	r0, r0, #48
.L24:
	str	r0, [r2, r1]
	adds	r3, r3, #4
	b	.L17
.L16:
	ldrb	r0, [r3]
	uxtb	r0, r0
	b	.L24
.L18:
	adds	r5, r3, #4
.L20:
	ldr	r0, [r3]
	ldrb	r4, [r0]
	cmp	r4, #0
	bne	.L21
	movs	r3, r5
	b	.L17
.L21:
	ldrb	r4, [r0]
	adds	r0, r0, #1
	uxtb	r4, r4
	str	r4, [r2, r1]
	str	r0, [r3]
	b	.L20
.L13:
	str	r0, [r2, r1]
	str	r5, [sp, #12]
	b	.L12
.L26:
	.align	2
.L25:
	.word	1207960064
	.size	print, .-print
	.align	1
	.global	IRQ9_Handler
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	IRQ9_Handler, %function
IRQ9_Handler:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #192
	ldr	r3, .L28
	lsls	r2, r2, #1
	ldr	r1, [r3, #84]
	@ sp needed
	str	r1, [r3, r2]
	movs	r2, #136
	lsls	r2, r2, #7
	str	r2, [r3, #76]
	bx	lr
.L29:
	.align	2
.L28:
	.word	1207960064
	.size	IRQ9_Handler, .-IRQ9_Handler
	.align	1
	.global	IRQ10_Handler
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	IRQ10_Handler, %function
IRQ10_Handler:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, #1
	ldr	r2, .L31
	@ sp needed
	ldr	r1, [r2]
	eors	r3, r1
	str	r3, [r2]
	bx	lr
.L32:
	.align	2
.L31:
	.word	1074004992
	.size	IRQ10_Handler, .-IRQ10_Handler
	.align	1
	.global	IRQ11_Handler
	.syntax unified
	.code	16
	.thumb_func
	.fpu softvfp
	.type	IRQ11_Handler, %function
IRQ11_Handler:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, #2
	ldr	r2, .L34
	@ sp needed
	ldr	r1, [r2]
	eors	r3, r1
	str	r3, [r2]
	bx	lr
.L35:
	.align	2
.L34:
	.word	1074004992
	.size	IRQ11_Handler, .-IRQ11_Handler
	.global	j
	.comm	i,4,4
	.section	.rodata
	.set	.LANCHOR0,. + 0
.LC0:
	.ascii	"UART Initialized\015\012\000"
	.space	1
	.bss
	.align	2
	.set	.LANCHOR1,. + 0
	.type	j, %object
	.size	j, 4
j:
	.space	4
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 8-2018-q4-major) 8.2.1 20181213 (release) [gcc-8-branch revision 267074]"

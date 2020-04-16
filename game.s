	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"game.c"
	.text
	.align	2
	.global	initGame
	.arch armv4t
	.syntax unified
	.arm
	.fpu softvfp
	.type	initGame, %function
initGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #0
	push	{r4, r5, r6, lr}
	mov	r5, #32
	mov	ip, #1
	mov	r4, #104
	mov	lr, #64
	mov	r6, #7
	mov	r2, #16
	ldr	r1, .L8
	str	r3, [r1]
	ldr	r1, .L8+4
	str	r3, [r1]
	ldr	r1, .L8+8
	str	r3, [r1]
	ldr	r1, .L8+12
	str	r3, [r1]
	ldr	r1, .L8+16
	str	r5, [r1, #24]
	str	r5, [r1, #28]
	ldr	r5, .L8+20
	str	r3, [r1, #36]
	str	r3, [r1, #44]
	mov	r0, r3
	ldr	r3, .L8+24
	str	ip, [r5]
	str	r6, [r1, #48]
	str	r4, [r1, #8]
	str	r4, [r1]
	str	lr, [r1, #12]
	str	lr, [r1, #4]
	str	ip, [r1, #16]
	str	ip, [r1, #20]
	add	r1, r3, #280
.L2:
	str	r2, [r3, #28]
	str	r2, [r3, #24]
	str	r0, [r3, #36]
	str	r0, [r3, #52]
	add	r3, r3, #56
	cmp	r3, r1
	bne	.L2
	ldr	r4, .L8+28
	ldr	r5, .L8+32
	str	r2, [r4, #28]
	str	r2, [r4, #24]
	mov	lr, pc
	bx	r5
	rsbs	r2, r0, #0
	and	r2, r2, #15
	and	r3, r0, #15
	rsbpl	r3, r2, #0
	lsl	r3, r3, #4
	str	r3, [r4]
	mov	lr, pc
	bx	r5
	mov	r5, #1
	mov	ip, #0
	mov	lr, r5
	mov	r2, #16
	subs	r1, ip, r0
	and	r1, r1, #15
	and	r3, r0, #15
	rsbpl	r3, r1, #0
	lsl	r3, r3, #4
	str	r3, [r4, #4]
	ldr	r3, .L8+36
	str	r5, [r4, #52]
	add	r1, r3, #1792
	add	r1, r1, #8
.L3:
	str	r2, [r3, #28]
	str	r2, [r3, #24]
	str	lr, [r3, #52]
	str	ip, [r3, #56]
	add	r3, r3, #60
	cmp	r3, r1
	bne	.L3
	ldr	r4, .L8+40
	mov	r3, #256
	mov	r0, #3
	ldr	r2, .L8+44
	ldr	r1, .L8+48
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	mov	r0, #3
	ldr	r2, .L8+52
	ldr	r1, .L8+56
	mov	lr, pc
	bx	r4
	pop	{r4, r5, r6, lr}
	bx	lr
.L9:
	.align	2
.L8:
	.word	hOff
	.word	vOff
	.word	gmState
	.word	loseCount
	.word	tank
	.word	canMove
	.word	beacons
	.word	target
	.word	rand
	.word	traps
	.word	DMANow
	.word	83886592
	.word	spritesheetPal
	.word	100728832
	.word	spritesheetTiles
	.size	initGame, .-initGame
	.global	__aeabi_idivmod
	.align	2
	.global	updateGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateGame, %function
updateGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	ldr	fp, .L106
	ldr	r3, [fp]
	cmp	r3, #1
	sub	sp, sp, #28
	beq	.L11
	ldr	r5, .L106+4
	ldr	r8, .L106+8
	ldr	r7, .L106+12
.L12:
	ldr	r6, [r5, #32]
	ldr	r4, .L106+16
	smull	r2, r3, r4, r6
	asr	r2, r6, #31
	rsb	r2, r2, r3, asr #2
	add	r2, r2, r2, lsl #2
	cmp	r6, r2, lsl #1
	bne	.L23
	ldr	r0, [r5, #44]
	ldr	r3, .L106+20
	ldr	r1, [r5, #48]
	add	r0, r0, #1
	mov	lr, pc
	bx	r3
	ldr	r9, .L106+24
	ldr	r0, [r9]
	add	r0, r0, #1
	smull	r3, r4, r0, r4
	asr	r3, r0, #31
	rsb	r3, r3, r4, asr #4
	add	r3, r3, r3, lsl #2
	subs	r3, r0, r3, lsl #3
	str	r1, [r5, #44]
	str	r0, [r9]
	beq	.L96
.L24:
	cmp	r0, #720
	mvngt	r2, #0
	ldrgt	r3, .L106+28
	strgt	r2, [r3]
.L23:
	ldr	r3, [r5, #8]
	ldr	r0, [r8]
	ldr	r2, [r5, #12]
	ldr	r1, [r7]
	ldr	r4, .L106+32
	add	r6, r6, #1
	str	r6, [r5, #32]
	sub	r0, r3, r0
	sub	r1, r2, r1
	add	r6, r4, #1792
	mov	r10, #0
	stm	r5, {r0, r1}
	ldr	lr, [r5, #24]
	ldr	ip, [r5, #28]
	ldr	r9, .L106+36
	add	r6, r6, #8
	b	.L31
.L29:
	add	r4, r4, #60
	cmp	r4, r6
	beq	.L97
.L31:
	ldr	r1, [r4, #56]
	cmp	r1, #1
	bne	.L29
	stm	sp, {r2, r3, lr}
	str	ip, [sp, #12]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldr	r1, [r4]
	ldr	r0, [r4, #4]
	mov	lr, pc
	bx	r9
	ldr	r2, [r4]
	cmp	r0, #0
	ldr	r3, [r4, #4]
	ldr	r0, [r8]
	ldr	r1, [r7]
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	strne	r10, [r4, #56]
	add	r4, r4, #60
	strne	r10, [fp]
	cmp	r4, r6
	ldr	r2, [r5, #12]
	ldr	r3, [r5, #8]
	ldr	lr, [r5, #24]
	ldr	ip, [r5, #28]
	bne	.L31
.L97:
	ldr	r6, .L106+40
	mov	r4, r6
	ldr	r1, .L106+44
	str	r6, [sp, #16]
	ldrh	r0, [r1]
	add	r10, r6, #280
.L34:
	tst	r0, #2
	ldr	r1, [r4]
	beq	.L32
	ldr	r6, .L106+48
	ldrh	fp, [r6]
	ands	fp, fp, #2
	beq	.L98
.L32:
	ldr	fp, [r8]
	ldr	r6, [r4, #4]
	sub	r1, r1, fp
	ldr	fp, [r7]
	sub	fp, r6, fp
	str	r1, [r4, #8]
	str	fp, [r4, #12]
	add	r4, r4, #56
	cmp	r10, r4
	bne	.L34
	ldr	r4, .L106+52
	tst	r0, #1
	ldr	r6, [sp, #16]
	ldr	r1, [r4]
	ldr	r0, [r4, #4]
	beq	.L44
	ldr	r5, .L106+48
	ldrh	r5, [r5]
	ands	r5, r5, #1
	bne	.L44
.L36:
	ldr	r10, [r6, #52]
	cmp	r10, #1
	bne	.L99
	add	r5, r5, #1
	cmp	r5, #5
	add	r6, r6, #56
	bne	.L36
.L44:
	stm	sp, {r2, r3, lr}
	str	ip, [sp, #12]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	mov	lr, pc
	bx	r9
	cmp	r0, #0
	movne	r2, #1
	ldrne	r3, .L106+28
	ldr	r0, [r8]
	strne	r2, [r3]
	ldr	r1, [r7]
	ldm	r4, {r2, r3}
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L98:
	stm	sp, {r2, r3, lr}
	str	ip, [sp, #12]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldr	r0, [r4, #4]
	mov	lr, pc
	bx	r9
	ldr	r3, .L106+44
	cmp	r0, #0
	strne	fp, [r4, #52]
	ldrh	r0, [r3]
	ldr	r2, [r5, #12]
	ldr	r3, [r5, #8]
	ldr	lr, [r5, #24]
	ldr	ip, [r5, #28]
	ldr	r1, [r4]
	b	.L32
.L96:
	ldr	r10, .L106+32
	mov	r2, r10
	b	.L25
.L27:
	add	r3, r3, #1
	cmp	r3, #30
	add	r2, r2, #60
	beq	.L26
.L25:
	ldr	r1, [r2, #56]
	cmp	r1, #1
	beq	.L27
	mov	r1, #1
	rsb	r3, r3, r3, lsl #4
	add	r6, r10, r3, lsl #2
	str	r1, [r6, #56]
	ldr	r2, .L106+56
	lsl	r4, r3, #2
	mov	lr, pc
	bx	r2
	rsbs	r1, r0, #0
	and	r1, r1, #15
	and	r3, r0, #15
	rsbpl	r3, r1, #0
	lsl	r3, r3, #4
	str	r3, [r10, r4]
	ldr	r2, .L106+56
	mov	lr, pc
	bx	r2
	rsbs	r2, r0, #0
	and	r2, r2, #15
	and	r3, r0, #15
	rsbpl	r3, r2, #0
	lsl	r3, r3, #4
	str	r3, [r6, #4]
	ldr	r0, [r9]
	ldr	r6, [r5, #32]
.L26:
	mov	r3, #1
	str	r3, [fp]
	b	.L24
.L11:
	ldr	r3, .L106+60
	ldrh	r3, [r3, #48]
	ands	r3, r3, #64
	ldr	r5, .L106+4
	beq	.L13
	ldr	r8, .L106+8
.L14:
	ldr	r3, .L106+60
	ldrh	r3, [r3, #48]
	tst	r3, #128
	bne	.L17
	mov	r1, #2
	ldr	r2, [r5, #8]
	ldr	r3, [r5, #28]
	add	r3, r2, r3
	cmp	r3, #255
	str	r1, [r5, #36]
	bgt	.L17
	ldr	r3, [r5, #16]
	ldr	r1, [r8]
	add	r2, r3, r2
	cmp	r1, #95
	str	r2, [r5, #8]
	ble	.L100
.L17:
	ldr	r3, .L106+60
	ldrh	r3, [r3, #48]
	tst	r3, #32
	beq	.L19
	ldr	r7, .L106+12
.L20:
	ldr	r3, .L106+60
	ldrh	r3, [r3, #48]
	tst	r3, #16
	bne	.L12
	mov	r1, #1
	ldr	r2, [r5, #12]
	ldr	r3, [r5, #24]
	add	r3, r2, r3
	cmp	r3, #255
	str	r1, [r5, #36]
	bgt	.L12
	ldr	r3, [r5, #20]
	ldr	r1, [r7]
	add	r2, r3, r2
	cmp	r1, #15
	str	r2, [r5, #12]
	bgt	.L12
	ldr	r3, [r5, #4]
	cmp	r3, #119
	addgt	r1, r1, #1
	strgt	r1, [r7]
	b	.L12
.L13:
	ldr	r2, [r5, #8]
	cmp	r2, #0
	ldr	r8, .L106+8
	str	r3, [r5, #36]
	ble	.L14
	ldr	r1, [r5, #16]
	ldr	r3, [r8]
	sub	r2, r2, r1
	cmp	r3, #0
	str	r2, [r5, #8]
	ble	.L14
	ldr	r2, [r5]
	cmp	r2, #80
	suble	r3, r3, #1
	strle	r3, [r8]
	b	.L14
.L19:
	mov	r2, #3
	ldr	r3, [r5, #12]
	cmp	r3, #0
	ldr	r7, .L106+12
	str	r2, [r5, #36]
	ble	.L20
	ldr	r1, [r5, #20]
	ldr	r2, [r7]
	sub	r3, r3, r1
	cmp	r2, #0
	str	r3, [r5, #12]
	ble	.L20
	ldr	r3, [r5, #4]
	cmp	r3, #120
	suble	r2, r2, #1
	strle	r2, [r7]
	b	.L20
.L99:
	adds	r6, r3, #16
	addmi	r6, r3, #31
	adds	fp, r2, #16
	addmi	fp, r2, #31
	bic	fp, fp, #15
	str	fp, [sp, #20]
	ldr	fp, .L106+40
	rsb	r10, r5, r5, lsl #3
	add	fp, fp, r10, lsl #3
	str	fp, [sp, #16]
	ldr	fp, .L106+40
	bic	r6, r6, #15
	str	r6, [fp, r10, lsl #3]
	cmp	r6, r1
	ldr	r10, [sp, #16]
	ldr	r6, [sp, #20]
	str	r6, [r10, #4]
	mov	r6, #1
	str	r6, [r10, #52]
	lsl	r10, r5, #3
	beq	.L101
	bge	.L41
	ldr	r5, [sp, #20]
	cmp	r5, r0
	blt	.L102
	bgt	.L103
	moveq	r5, #7
	ldreq	r6, [sp, #16]
	streq	r5, [r6, #36]
	b	.L44
.L101:
	ldr	r6, [sp, #20]
	cmp	r6, r0
	beq	.L104
	movlt	r6, #6
	ldrlt	fp, [sp, #16]
	strlt	r6, [fp, #36]
.L45:
	ldr	r6, [sp, #20]
	cmp	r6, r0
	ble	.L44
	mov	r6, #8
	sub	r5, r10, r5
	ldr	r10, .L106+40
	add	r5, r10, r5, lsl #3
	str	r6, [r5, #36]
	b	.L44
.L100:
	ldr	r3, [r5]
	cmp	r3, #79
	addgt	r1, r1, #1
	strgt	r1, [r8]
	b	.L17
.L102:
	mov	r5, #1
	ldr	r6, [sp, #16]
	str	r5, [r6, #36]
	b	.L44
.L104:
	mov	r5, #0
	ldr	r6, [sp, #16]
	str	r5, [r6, #36]
	b	.L44
.L103:
	mov	r5, #2
	ldr	r6, [sp, #16]
	str	r5, [r6, #36]
	b	.L44
.L41:
	ble	.L44
	ldr	r5, [sp, #20]
	cmp	r5, r0
	movgt	r5, #3
	ldrgt	r6, [sp, #16]
	strgt	r5, [r6, #36]
	bgt	.L44
.L43:
	blt	.L105
	moveq	r5, #5
	ldreq	r6, [sp, #16]
	streq	r5, [r6, #36]
	b	.L44
.L105:
	mov	r5, #4
	ldr	r6, [sp, #16]
	str	r5, [r6, #36]
	b	.L44
.L107:
	.align	2
.L106:
	.word	canMove
	.word	tank
	.word	vOff
	.word	hOff
	.word	1717986919
	.word	__aeabi_idivmod
	.word	loseCount
	.word	gmState
	.word	traps
	.word	collision
	.word	beacons
	.word	oldButtons
	.word	buttons
	.word	target
	.word	rand
	.word	67109120
	.size	updateGame, .-updateGame
	.align	2
	.global	drawGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawGame, %function
drawGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	lr, .L120
	ldr	r3, [lr, #4]
	mvn	r3, r3, lsl #17
	mvn	r3, r3, lsr #17
	ldr	ip, .L120+4
	mov	r2, ip
	mov	r5, ip
	mov	r1, ip
	ldr	r4, [lr, #44]
	ldr	r0, [lr, #36]
	ldr	lr, [lr]
	add	r0, r0, r4, lsl #5
	strh	r3, [ip, #2]	@ movhi
	lsl	r0, r0, #2
	ldr	r3, .L120+8
	strh	lr, [ip]	@ movhi
	strh	r0, [ip, #4]	@ movhi
	add	r4, r3, #280
.L111:
	ldr	r0, [r3, #52]
	cmp	r0, #1
	ldreq	ip, [r3, #36]
	ldr	r0, [r3, #8]
	ldreq	lr, [r3, #12]
	lsleq	ip, ip, #6
	addeq	ip, ip, #16
	orreq	lr, lr, #16384
	orrne	r0, r0, #512
	add	r3, r3, #56
	strheq	r0, [r1, #16]	@ movhi
	strheq	ip, [r1, #20]	@ movhi
	strheq	lr, [r1, #18]	@ movhi
	strhne	r0, [r1, #16]	@ movhi
	cmp	r3, r4
	add	r1, r1, #8
	bne	.L111
	ldr	r3, .L120+12
	ldr	r1, [r3, #52]
	cmp	r1, #1
	bne	.L112
	mov	r0, #18
	ldr	r1, [r3, #12]
	ldr	ip, [r3, #8]
	orr	r3, r1, #16384
	strh	r3, [r5, #10]	@ movhi
	strh	ip, [r5, #8]	@ movhi
	strh	r0, [r5, #12]	@ movhi
.L112:
	ldr	r3, .L120+16
	add	r0, r3, #1792
	mov	ip, #512
	mov	r4, #20
	add	r0, r0, #8
	b	.L115
.L113:
	add	r3, r3, #60
	cmp	r3, r0
	strh	ip, [r2, #56]	@ movhi
	add	r2, r2, #8
	beq	.L119
.L115:
	ldr	r1, [r3, #48]
	cmp	r1, #1
	bne	.L113
	ldr	r1, [r3, #44]
	cmp	r1, #1
	bne	.L113
	ldr	r1, [r3, #4]
	ldr	lr, [r3]
	add	r3, r3, #60
	orr	r1, r1, #16384
	cmp	r3, r0
	strh	r4, [r2, #60]	@ movhi
	strh	r1, [r2, #58]	@ movhi
	strh	lr, [r2, #56]	@ movhi
	add	r2, r2, #8
	bne	.L115
.L119:
	ldr	r3, .L120+20
	mov	lr, pc
	bx	r3
	ldr	r4, .L120+24
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L120+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	ldr	r2, .L120+28
	ldrh	r1, [r2]
	ldr	r2, .L120+32
	ldrh	r2, [r2]
	strh	r1, [r3, #16]	@ movhi
	pop	{r4, r5, r6, lr}
	strh	r2, [r3, #18]	@ movhi
	bx	lr
.L121:
	.align	2
.L120:
	.word	tank
	.word	shadowOAM
	.word	beacons
	.word	target
	.word	traps+8
	.word	waitForVBlank
	.word	DMANow
	.word	hOff
	.word	vOff
	.size	drawGame, .-drawGame
	.comm	canMove,4,4
	.comm	loseCount,4,4
	.comm	gmState,4,4
	.comm	traps,1800,4
	.comm	target,60,4
	.comm	beacons,280,4
	.comm	tank,56,4
	.ident	"GCC: (devkitARM release 53) 9.1.0"

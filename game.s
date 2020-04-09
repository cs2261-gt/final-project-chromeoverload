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
	.global	__aeabi_idivmod
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
	mov	ip, #1
	mov	r5, #32
	mov	r4, #104
	mov	lr, #64
	mov	r6, #7
	mov	r2, #16
	ldr	r1, .L6
	str	r3, [r1]
	ldr	r1, .L6+4
	str	r3, [r1]
	ldr	r1, .L6+8
	str	r3, [r1]
	ldr	r1, .L6+12
	str	r3, [r1]
	ldr	r1, .L6+16
	mov	r0, r3
	str	r3, [r1, #36]
	str	r3, [r1, #44]
	ldr	r3, .L6+20
	str	r6, [r1, #48]
	str	r5, [r1, #24]
	str	r5, [r1, #28]
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
	ldr	r4, .L6+24
	ldr	r6, .L6+28
	str	r2, [r4, #28]
	str	r2, [r4, #24]
	mov	lr, pc
	bx	r6
	ldr	r1, [r4, #24]
	ldr	r5, .L6+32
	rsb	r1, r1, #256
	mov	lr, pc
	bx	r5
	str	r1, [r4]
	mov	lr, pc
	bx	r6
	ldr	r1, [r4, #28]
	rsb	r1, r1, #256
	mov	lr, pc
	bx	r5
	mov	r0, #1
	str	r1, [r4, #4]
	str	r0, [r4, #52]
	mov	r3, #256
	ldr	r4, .L6+36
	mov	r0, #3
	ldr	r2, .L6+40
	ldr	r1, .L6+44
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	mov	r0, #3
	ldr	r2, .L6+48
	ldr	r1, .L6+52
	mov	lr, pc
	bx	r4
	pop	{r4, r5, r6, lr}
	bx	lr
.L7:
	.align	2
.L6:
	.word	hOff
	.word	vOff
	.word	gmState
	.word	loseCount
	.word	tank
	.word	beacons
	.word	target
	.word	rand
	.word	__aeabi_idivmod
	.word	DMANow
	.word	83886592
	.word	spritesheetPal
	.word	100728832
	.word	spritesheetTiles
	.size	initGame, .-initGame
	.align	2
	.global	updateGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateGame, %function
updateGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	ldr	r3, .L71
	ldrh	r3, [r3, #48]
	ldr	r5, .L71+4
	ldr	r7, .L71+8
	ands	r1, r3, #64
	ldr	r2, [r7]
	ldr	r3, [r5, #8]
	sub	sp, sp, #36
	bne	.L9
	cmp	r3, #0
	str	r1, [r5, #36]
	ble	.L9
	ldr	r1, [r5, #16]
	cmp	r2, #0
	sub	r3, r3, r1
	str	r3, [r5, #8]
	ble	.L9
	ldr	r1, [r5]
	cmp	r1, #80
	suble	r2, r2, #1
	strle	r2, [r7]
.L9:
	ldr	r1, .L71
	ldrh	r1, [r1, #48]
	tst	r1, #128
	ldr	r1, [r5, #28]
	mov	r0, r1
	str	r1, [sp, #20]
	bne	.L10
	mov	r1, #2
	add	r0, r3, r0
	cmp	r0, #255
	str	r1, [r5, #36]
	ble	.L66
.L10:
	ldr	r1, .L71
	ldrh	r1, [r1, #48]
	ldr	r8, .L71+12
	tst	r1, #32
	ldr	fp, [r8]
	ldr	r9, [r5, #12]
	bne	.L11
	mov	r1, #3
	cmp	r9, #0
	str	r1, [r5, #36]
	ble	.L11
	ldr	r1, [r5, #20]
	cmp	fp, #0
	sub	r9, r9, r1
	str	r9, [r5, #12]
	ble	.L11
	ldr	r1, [r5, #4]
	cmp	r1, #120
	suble	fp, fp, #1
	strle	fp, [r8]
.L11:
	ldr	r1, .L71
	ldrh	r1, [r1, #48]
	tst	r1, #16
	ldr	r1, [r5, #24]
	mov	r0, r1
	str	r1, [sp, #16]
	bne	.L12
	mov	r1, #1
	add	r0, r0, r9
	cmp	r0, #255
	str	r1, [r5, #36]
	ble	.L67
.L12:
	ldr	r6, [r5, #32]
	ldr	r1, .L71+16
	smull	ip, r0, r1, r6
	asr	r1, r6, #31
	rsb	r1, r1, r0, asr #2
	add	r1, r1, r1, lsl #2
	cmp	r6, r1, lsl #1
	bne	.L14
	ldr	r0, [r5, #44]
	str	r3, [sp, #28]
	str	r2, [sp, #24]
	ldr	r4, .L71+20
	ldr	r1, [r5, #48]
	add	r0, r0, #1
	mov	lr, pc
	bx	r4
	ldr	ip, .L71+24
	ldr	r0, [ip]
	add	r0, r0, #1
	cmp	r0, #720
	str	r0, [ip]
	mvngt	r0, #0
	str	r1, [r5, #44]
	ldrgt	r1, .L71+28
	add	r2, sp, #24
	ldm	r2, {r2, r3}
	strgt	r0, [r1]
.L14:
	ldr	r10, .L71+32
	mov	r4, r10
	sub	r2, r3, r2
	sub	fp, r9, fp
	stm	r5, {r2, fp}
	ldr	r2, .L71+36
	add	r6, r6, #1
	str	r6, [r5, #32]
	ldrh	r0, [r2]
	add	fp, r10, #280
.L18:
	tst	r0, #2
	ldr	r1, [r4]
	beq	.L16
	ldr	r2, .L71+40
	ldrh	r6, [r2]
	ands	r6, r6, #2
	beq	.L68
.L16:
	ldr	ip, [r7]
	ldr	r2, [r4, #4]
	sub	r1, r1, ip
	ldr	ip, [r8]
	sub	r2, r2, ip
	str	r1, [r4, #8]
	str	r2, [r4, #12]
	add	r4, r4, #56
	cmp	fp, r4
	bne	.L18
	ldr	r4, .L71+44
	tst	r0, #1
	ldr	r1, [r4]
	ldr	r0, [r4, #4]
	beq	.L29
	ldr	r2, .L71+40
	ldrh	r2, [r2]
	ands	r2, r2, #1
	bne	.L29
.L20:
	ldr	ip, [r10, #52]
	cmp	ip, #1
	bne	.L69
	add	r2, r2, #1
	cmp	r2, #5
	add	r10, r10, #56
	bne	.L20
.L29:
	ldr	r2, [sp, #20]
	str	r2, [sp, #12]
	ldr	r2, [sp, #16]
	str	r3, [sp, #4]
	str	r2, [sp, #8]
	str	r9, [sp]
	ldr	ip, .L71+48
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	mov	lr, pc
	bx	ip
	cmp	r0, #0
	movne	r2, #1
	ldrne	r3, .L71+28
	ldr	r0, [r7]
	strne	r2, [r3]
	ldr	r1, [r8]
	ldm	r4, {r2, r3}
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	add	sp, sp, #36
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L68:
	ldr	r2, [sp, #20]
	str	r2, [sp, #12]
	ldr	r2, [sp, #16]
	str	r9, [sp]
	str	r2, [sp, #8]
	str	r3, [sp, #4]
	ldr	ip, .L71+48
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldr	r0, [r4, #4]
	mov	lr, pc
	bx	ip
	ldr	r2, [r5, #24]
	ldr	r3, .L71+36
	str	r2, [sp, #16]
	ldr	r2, [r5, #28]
	cmp	r0, #0
	ldrh	r0, [r3]
	add	r3, r5, #8
	strne	r6, [r4, #52]
	ldm	r3, {r3, r9}
	str	r2, [sp, #20]
	ldr	r1, [r4]
	b	.L16
.L66:
	ldr	r1, [r5, #16]
	cmp	r2, #95
	add	r3, r3, r1
	str	r3, [r5, #8]
	bgt	.L10
	ldr	r1, [r5]
	cmp	r1, #79
	addgt	r2, r2, #1
	strgt	r2, [r7]
	b	.L10
.L67:
	ldr	r1, [r5, #20]
	cmp	fp, #15
	add	r9, r9, r1
	str	r9, [r5, #12]
	bgt	.L12
	ldr	r1, [r5, #4]
	cmp	r1, #119
	addgt	fp, fp, #1
	strgt	fp, [r8]
	b	.L12
.L69:
	mov	r5, #1
	ldr	r6, .L71+32
	rsb	r2, r2, r2, lsl #3
	add	lr, r3, #8
	add	ip, r6, r2, lsl #3
	str	lr, [r6, r2, lsl #3]
	cmp	lr, r1
	add	r2, r9, #8
	str	r5, [ip, #52]
	str	r2, [ip, #4]
	beq	.L70
	bge	.L25
	cmp	r2, r0
	strlt	r5, [ip, #36]
	blt	.L29
	movgt	r2, #2
	strgt	r2, [ip, #36]
	bgt	.L29
	moveq	r2, #7
	streq	r2, [ip, #36]
	b	.L29
.L70:
	cmp	r2, r0
	moveq	r2, #0
	streq	r2, [ip, #36]
	beq	.L29
	movlt	r2, #6
	strlt	r2, [ip, #36]
	blt	.L29
	movgt	r2, #8
	strgt	r2, [ip, #36]
	b	.L29
.L25:
	ble	.L29
	cmp	r2, r0
	movgt	r2, #3
	strgt	r2, [ip, #36]
	bgt	.L29
	movlt	r2, #4
	strlt	r2, [ip, #36]
	blt	.L29
	moveq	r2, #5
	streq	r2, [ip, #36]
	b	.L29
.L72:
	.align	2
.L71:
	.word	67109120
	.word	tank
	.word	vOff
	.word	hOff
	.word	1717986919
	.word	__aeabi_idivmod
	.word	loseCount
	.word	gmState
	.word	beacons
	.word	oldButtons
	.word	buttons
	.word	target
	.word	collision
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
	ldr	ip, .L79
	ldr	r3, [ip, #4]
	mvn	r3, r3, lsl #17
	mvn	r3, r3, lsr #17
	ldr	r0, .L79+4
	push	{r4, lr}
	mov	r2, r0
	mov	r4, r0
	ldr	lr, [ip, #44]
	ldr	r1, [ip, #36]
	ldr	ip, [ip]
	add	r1, r1, lr, lsl #5
	strh	r3, [r0, #2]	@ movhi
	lsl	r1, r1, #2
	ldr	r3, .L79+8
	strh	ip, [r0]	@ movhi
	strh	r1, [r0, #4]	@ movhi
	add	lr, r3, #280
.L76:
	ldr	r1, [r3, #52]
	cmp	r1, #1
	ldreq	r0, [r3, #36]
	ldr	r1, [r3, #8]
	ldreq	ip, [r3, #12]
	lsleq	r0, r0, #6
	addeq	r0, r0, #16
	orreq	ip, ip, #16384
	orrne	r1, r1, #512
	add	r3, r3, #56
	strheq	r1, [r2, #16]	@ movhi
	strheq	r0, [r2, #20]	@ movhi
	strheq	ip, [r2, #18]	@ movhi
	strhne	r1, [r2, #16]	@ movhi
	cmp	lr, r3
	add	r2, r2, #8
	bne	.L76
	mov	r1, #18
	ldr	r2, .L79+12
	add	r0, r2, #8
	ldm	r0, {r0, r3}
	orr	r3, r3, #16384
	strh	r3, [r4, #10]	@ movhi
	strh	r0, [r4, #8]	@ movhi
	strh	r1, [r4, #12]	@ movhi
	ldr	r2, .L79+16
	mov	lr, pc
	bx	r2
	ldr	r4, .L79+20
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L79+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	ldr	r2, .L79+24
	ldrh	r1, [r2]
	ldr	r2, .L79+28
	ldrh	r2, [r2]
	strh	r1, [r3, #16]	@ movhi
	pop	{r4, lr}
	strh	r2, [r3, #18]	@ movhi
	bx	lr
.L80:
	.align	2
.L79:
	.word	tank
	.word	shadowOAM
	.word	beacons
	.word	target
	.word	waitForVBlank
	.word	DMANow
	.word	hOff
	.word	vOff
	.size	drawGame, .-drawGame
	.comm	loseCount,4,4
	.comm	gmState,4,4
	.comm	target,56,4
	.comm	beacons,280,4
	.comm	tank,56,4
	.ident	"GCC: (devkitARM release 53) 9.1.0"

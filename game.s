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
	ldr	r5, .L6+28
	str	r2, [r4, #28]
	str	r2, [r4, #24]
	mov	lr, pc
	bx	r5
	rsbs	r3, r0, #0
	and	r3, r3, #15
	and	r0, r0, #15
	rsbpl	r0, r3, #0
	lsl	r0, r0, #4
	str	r0, [r4]
	mov	lr, pc
	bx	r5
	mov	ip, #1
	rsbs	r3, r0, #0
	and	r3, r3, #15
	and	r0, r0, #15
	rsbpl	r0, r3, #0
	lsl	r0, r0, #4
	str	r0, [r4, #4]
	str	ip, [r4, #52]
	mov	r3, #256
	ldr	r4, .L6+32
	mov	r0, #3
	ldr	r2, .L6+36
	ldr	r1, .L6+40
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	mov	r0, #3
	ldr	r2, .L6+44
	ldr	r1, .L6+48
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
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	ldr	r3, .L71
	ldrh	r3, [r3, #48]
	ldr	r5, .L71+4
	ldr	r8, .L71+8
	ands	r3, r3, #64
	ldr	r2, [r5, #8]
	ldr	fp, [r8]
	sub	sp, sp, #36
	bne	.L9
	cmp	r2, #0
	str	r3, [r5, #36]
	ble	.L9
	ldr	r3, [r5, #16]
	cmp	fp, #0
	sub	r2, r2, r3
	str	r2, [r5, #8]
	ble	.L9
	ldr	r3, [r5]
	cmp	r3, #80
	suble	fp, fp, #1
	strle	fp, [r8]
.L9:
	ldr	r3, .L71
	ldrh	r3, [r3, #48]
	tst	r3, #128
	ldr	r3, [r5, #28]
	mov	r1, r3
	str	r3, [sp, #20]
	bne	.L10
	mov	r3, #2
	add	r1, r2, r1
	cmp	r1, #255
	str	r3, [r5, #36]
	ble	.L64
.L10:
	ldr	r3, .L71
	ldrh	r3, [r3, #48]
	ldr	r7, .L71+12
	tst	r3, #32
	ldr	r10, [r7]
	ldr	r3, [r5, #12]
	bne	.L11
	mov	r1, #3
	cmp	r3, #0
	str	r1, [r5, #36]
	ble	.L11
	ldr	r1, [r5, #20]
	cmp	r10, #0
	sub	r3, r3, r1
	str	r3, [r5, #12]
	ble	.L11
	ldr	r1, [r5, #4]
	cmp	r1, #120
	suble	r10, r10, #1
	strle	r10, [r7]
.L11:
	ldr	r1, .L71
	ldrh	r1, [r1, #48]
	tst	r1, #16
	ldr	r1, [r5, #24]
	mov	r0, r1
	str	r1, [sp, #16]
	bne	.L12
	mov	r1, #1
	add	r0, r0, r3
	cmp	r0, #255
	str	r1, [r5, #36]
	ble	.L65
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
	str	r2, [sp, #28]
	str	r3, [sp, #24]
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
	ldr	r3, [sp, #24]
	ldr	r2, [sp, #28]
	strgt	r0, [r1]
.L14:
	ldr	r9, .L71+32
	mov	r4, r9
	ldr	r1, .L71+36
	sub	fp, r2, fp
	add	r6, r6, #1
	sub	r10, r3, r10
	str	fp, [r5]
	str	r6, [r5, #32]
	ldrh	ip, [r1]
	ldr	fp, .L71+40
	str	r10, [r5, #4]
	add	r10, r9, #280
.L18:
	tst	ip, #2
	ldr	r1, [r4]
	beq	.L16
	ldrh	r6, [fp]
	ands	r6, r6, #2
	beq	.L66
.L16:
	ldr	lr, [r8]
	ldr	r0, [r4, #4]
	sub	r1, r1, lr
	ldr	lr, [r7]
	sub	r0, r0, lr
	str	r1, [r4, #8]
	str	r0, [r4, #12]
	add	r4, r4, #56
	cmp	r10, r4
	bne	.L18
	ldr	r4, .L71+44
	tst	ip, #1
	ldr	r1, [r4]
	ldr	r0, [r4, #4]
	beq	.L28
	ldr	ip, .L71+40
	ldrh	ip, [ip]
	ands	ip, ip, #1
	bne	.L28
.L20:
	ldr	lr, [r9, #52]
	cmp	lr, #1
	bne	.L67
	add	ip, ip, #1
	cmp	ip, #5
	add	r9, r9, #56
	bne	.L20
.L28:
	ldr	ip, [sp, #20]
	str	ip, [sp, #12]
	ldr	ip, [sp, #16]
	stmib	sp, {r2, ip}
	str	r3, [sp]
	ldr	ip, .L71+48
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	mov	lr, pc
	bx	ip
	cmp	r0, #0
	movne	r2, #1
	ldrne	r3, .L71+28
	ldr	r0, [r8]
	strne	r2, [r3]
	ldr	r1, [r7]
	ldm	r4, {r2, r3}
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	add	sp, sp, #36
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L66:
	ldr	r0, [sp, #20]
	str	r0, [sp, #12]
	ldr	r0, [sp, #16]
	str	r2, [sp, #4]
	str	r0, [sp, #8]
	str	r3, [sp]
	ldr	ip, .L71+48
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldr	r0, [r4, #4]
	mov	lr, pc
	bx	ip
	ldr	r1, [r5, #24]
	ldr	r3, .L71+36
	str	r1, [sp, #16]
	ldr	r1, [r5, #28]
	cmp	r0, #0
	add	r2, r5, #8
	ldrh	ip, [r3]
	str	r1, [sp, #20]
	strne	r6, [r4, #52]
	ldm	r2, {r2, r3}
	ldr	r1, [r4]
	b	.L16
.L64:
	ldr	r3, [r5, #16]
	cmp	fp, #95
	add	r2, r2, r3
	str	r2, [r5, #8]
	bgt	.L10
	ldr	r3, [r5]
	cmp	r3, #79
	addgt	fp, fp, #1
	strgt	fp, [r8]
	b	.L10
.L65:
	ldr	r1, [r5, #20]
	cmp	r10, #15
	add	r3, r3, r1
	str	r3, [r5, #12]
	bgt	.L12
	ldr	r1, [r5, #4]
	cmp	r1, #119
	addgt	r10, r10, #1
	strgt	r10, [r7]
	b	.L12
.L67:
	mov	r10, #1
	adds	lr, r2, #16
	ldr	fp, .L71+32
	addmi	lr, r2, #31
	adds	r9, r3, #16
	rsb	r5, ip, ip, lsl #3
	addmi	r9, r3, #31
	bic	lr, lr, #15
	add	r6, fp, r5, lsl #3
	bic	r9, r9, #15
	cmp	lr, r1
	str	lr, [fp, r5, lsl #3]
	str	r9, [r6, #4]
	str	r10, [r6, #52]
	lsl	r5, ip, #3
	beq	.L68
	bge	.L25
	cmp	r9, r0
	strlt	r10, [r6, #36]
	blt	.L28
	bgt	.L69
	moveq	ip, #7
	streq	ip, [r6, #36]
	b	.L28
.L68:
	cmp	r9, r0
	moveq	ip, #0
	streq	ip, [r6, #36]
	beq	.L28
	movlt	lr, #6
	strlt	lr, [r6, #36]
	cmp	r9, r0
	ble	.L28
	mov	lr, #8
	sub	ip, r5, ip
	ldr	r5, .L71+32
	add	ip, r5, ip, lsl #3
	str	lr, [ip, #36]
	b	.L28
.L69:
	mov	ip, #2
	str	ip, [r6, #36]
	b	.L28
.L25:
	ble	.L28
	cmp	r9, r0
	movgt	ip, #3
	strgt	ip, [r6, #36]
	bgt	.L28
	blt	.L70
	moveq	ip, #5
	streq	ip, [r6, #36]
	b	.L28
.L70:
	mov	ip, #4
	str	ip, [r6, #36]
	b	.L28
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

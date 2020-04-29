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
	and	r2, r2, #31
	and	r3, r0, #31
	rsbpl	r3, r2, #0
	lsl	r3, r3, #4
	str	r3, [r4]
	mov	lr, pc
	bx	r5
	mov	ip, #0
	mov	r2, #16
	subs	r1, ip, r0
	and	r1, r1, #31
	and	r3, r0, #31
	rsbpl	r3, r1, #0
	lsl	r1, r3, #4
	ldr	r3, .L8+36
	str	r1, [r4, #4]
	add	r1, r3, #1680
.L3:
	str	r2, [r3, #28]
	str	r2, [r3, #24]
	str	ip, [r3, #52]
	add	r3, r3, #56
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
	ldr	r3, .L115
	ldrh	r3, [r3]
	tst	r3, #4
	sub	sp, sp, #28
	bne	.L86
	ldr	r10, .L115+4
	ldr	r3, [r10]
	cmp	r3, #1
	ldr	r5, .L115+8
	beq	.L12
.L107:
	ldr	r6, .L115+12
	ldr	r7, .L115+16
.L13:
	ldr	r4, [r5, #32]
	ldr	r9, .L115+20
	smull	r2, r3, r9, r4
	asr	r2, r4, #31
	rsb	r2, r2, r3, asr #2
	add	r2, r2, r2, lsl #2
	cmp	r4, r2, lsl #1
	bne	.L24
	ldr	r0, [r5, #44]
	ldr	r3, .L115+24
	ldr	r1, [r5, #48]
	add	r0, r0, #1
	mov	lr, pc
	bx	r3
	ldr	r8, .L115+28
	ldr	r0, [r8]
	add	r0, r0, #1
	smull	r3, r9, r0, r9
	asr	r3, r0, #31
	rsb	r3, r3, r9, asr #4
	add	r3, r3, r3, lsl #2
	subs	r3, r0, r3, lsl #3
	str	r1, [r5, #44]
	str	r0, [r8]
	beq	.L104
.L25:
	cmp	r0, #720
	mvngt	r2, #0
	ldrgt	r3, .L115+32
	strgt	r2, [r3]
.L24:
	ldr	r2, [r5, #8]
	ldr	r0, [r6]
	ldr	r3, [r5, #12]
	ldr	r1, [r7]
	add	ip, r4, #1
	sub	r0, r2, r0
	ldr	r4, .L115+36
	sub	r1, r3, r1
	stm	r5, {r0, r1}
	add	r0, r5, #24
	str	ip, [r5, #32]
	mov	r9, #0
	ldm	r0, {r0, ip}
	ldr	fp, .L115+40
	add	r8, r4, #1680
	b	.L32
.L30:
	add	r4, r4, #56
	cmp	r4, r8
	beq	.L105
.L32:
	ldr	r1, [r4, #52]
	cmp	r1, #1
	bne	.L30
	str	ip, [sp, #12]
	str	r0, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldr	r1, [r4]
	ldr	r0, [r4, #4]
	mov	lr, pc
	bx	fp
	ldr	r2, [r4]
	cmp	r0, #0
	ldr	r3, [r4, #4]
	ldr	r0, [r6]
	ldr	r1, [r7]
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	strne	r9, [r4, #52]
	add	r4, r4, #56
	strne	r9, [r10]
	add	r2, r5, #8
	add	r0, r5, #24
	cmp	r4, r8
	ldm	r2, {r2, r3}
	ldm	r0, {r0, ip}
	bne	.L32
.L105:
	ldr	r1, .L115
	ldrh	r1, [r1]
	tst	r1, #1
	beq	.L102
	ldr	lr, .L115+44
	ldrh	lr, [lr]
	ands	lr, lr, #1
	beq	.L92
.L102:
	ldr	r9, .L115+48
.L41:
	ldr	r4, .L115+52
	tst	r1, #2
	add	r10, r4, #280
	ldr	r1, [r4]
	beq	.L42
	ldr	lr, .L115+44
	ldrh	r8, [lr]
	ands	r8, r8, #2
	beq	.L106
.L42:
	ldr	r8, [r6]
	ldr	lr, [r4, #4]
	sub	r1, r1, r8
	ldr	r8, [r7]
	sub	lr, lr, r8
	str	r1, [r4, #8]
	str	lr, [r4, #12]
	add	r4, r4, #56
	cmp	r10, r4
	beq	.L44
	ldr	r1, .L115
	ldrh	r1, [r1]
	tst	r1, #2
	ldr	r1, [r4]
	beq	.L42
	ldr	lr, .L115+44
	ldrh	r8, [lr]
	ands	r8, r8, #2
	bne	.L42
.L106:
	str	ip, [sp, #12]
	str	r0, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldr	r0, [r4, #4]
	mov	lr, pc
	bx	fp
	add	r2, r5, #8
	cmp	r0, #0
	add	r0, r5, #24
	strne	r8, [r4, #52]
	ldm	r2, {r2, r3}
	ldm	r0, {r0, ip}
	ldr	r1, [r4]
	b	.L42
.L44:
	str	ip, [sp, #12]
	str	r0, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	ldr	r3, [r9, #24]
	ldr	r2, [r9, #28]
	ldr	r1, [r9]
	ldr	r0, [r9, #4]
	mov	lr, pc
	bx	fp
	cmp	r0, #0
	movne	r2, #1
	ldrne	r3, .L115+32
	ldr	r0, [r6]
	strne	r2, [r3]
	ldr	r1, [r7]
	ldm	r9, {r2, r3}
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r9, #8]
	str	r3, [r9, #12]
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L86:
	ldr	r3, .L115+44
	ldrh	r3, [r3]
	ldr	r5, .L115+8
	tst	r3, #4
	ldreq	r3, [r5, #52]
	ldr	r10, .L115+4
	rsbeq	r3, r3, #1
	streq	r3, [r5, #52]
	ldr	r3, [r10]
	cmp	r3, #1
	bne	.L107
.L12:
	ldr	r3, .L115+56
	ldrh	r3, [r3, #48]
	ands	r3, r3, #64
	beq	.L14
	ldr	r6, .L115+12
.L15:
	ldr	r3, .L115+56
	ldrh	r3, [r3, #48]
	tst	r3, #128
	bne	.L18
	mov	r1, #2
	ldr	r2, [r5, #8]
	ldr	r3, [r5, #28]
	add	r3, r2, r3
	cmp	r3, #512
	str	r1, [r5, #36]
	bge	.L18
	ldr	r3, [r5, #16]
	ldr	r1, [r6]
	add	r2, r3, r2
	cmp	r1, #352
	str	r2, [r5, #8]
	blt	.L108
.L18:
	ldr	r3, .L115+56
	ldrh	r3, [r3, #48]
	tst	r3, #32
	beq	.L20
	ldr	r7, .L115+16
.L21:
	ldr	r3, .L115+56
	ldrh	r3, [r3, #48]
	tst	r3, #16
	bne	.L13
	mov	r1, #1
	ldr	r2, [r5, #12]
	ldr	r3, [r5, #24]
	add	r3, r2, r3
	cmp	r3, #512
	str	r1, [r5, #36]
	bge	.L13
	ldr	r3, [r5, #20]
	ldr	r1, [r7]
	add	r2, r3, r2
	cmp	r1, #272
	str	r2, [r5, #12]
	bge	.L13
	ldr	r3, [r5, #4]
	cmp	r3, #119
	addgt	r1, r1, #1
	strgt	r1, [r7]
	b	.L13
.L92:
	ldr	r4, .L115+52
.L34:
	ldr	r8, [r4, #52]
	cmp	r8, #1
	bne	.L109
	add	lr, lr, #1
	cmp	lr, #5
	add	r4, r4, #56
	bne	.L34
	b	.L102
.L104:
	ldr	r9, .L115+36
	mov	r2, r9
	b	.L26
.L28:
	add	r3, r3, #1
	cmp	r3, #30
	add	r2, r2, #56
	beq	.L27
.L26:
	ldr	r1, [r2, #52]
	cmp	r1, #1
	beq	.L28
	mov	r1, #1
	rsb	r3, r3, r3, lsl #3
	add	fp, r9, r3, lsl #3
	ldr	r2, .L115+60
	str	r1, [fp, #52]
	lsl	r4, r3, #3
	mov	lr, pc
	bx	r2
	rsbs	r1, r0, #0
	and	r1, r1, #31
	and	r3, r0, #31
	rsbpl	r3, r1, #0
	lsl	r3, r3, #4
	str	r3, [r9, r4]
	ldr	r2, .L115+60
	mov	lr, pc
	bx	r2
	rsbs	r2, r0, #0
	and	r2, r2, #31
	and	r3, r0, #31
	rsbpl	r3, r2, #0
	lsl	r3, r3, #4
	ldr	r0, [r8]
	str	r3, [fp, #4]
	ldr	r4, [r5, #32]
.L27:
	mov	r3, #1
	str	r3, [r10]
	b	.L25
.L14:
	ldr	r2, [r5, #8]
	cmp	r2, #0
	ldr	r6, .L115+12
	str	r3, [r5, #36]
	ble	.L15
	ldr	r1, [r5, #16]
	ldr	r3, [r6]
	sub	r2, r2, r1
	cmp	r3, #0
	str	r2, [r5, #8]
	ble	.L15
	ldr	r2, [r5]
	cmp	r2, #80
	suble	r3, r3, #1
	strle	r3, [r6]
	b	.L15
.L20:
	mov	r2, #3
	ldr	r3, [r5, #12]
	cmp	r3, #0
	ldr	r7, .L115+16
	str	r2, [r5, #36]
	ble	.L21
	ldr	r1, [r5, #20]
	ldr	r2, [r7]
	sub	r3, r3, r1
	cmp	r2, #0
	str	r3, [r5, #12]
	ble	.L21
	ldr	r3, [r5, #4]
	cmp	r3, #120
	suble	r2, r2, #1
	strle	r2, [r7]
	b	.L21
.L109:
	adds	r4, r2, #16
	addmi	r4, r2, #31
	adds	r10, r3, #16
	addmi	r10, r3, #31
	ldr	r9, .L115+48
	bic	r10, r10, #15
	str	r10, [sp, #20]
	ldr	r10, [r9]
	bic	r4, r4, #15
	cmp	r4, r10
	ldr	r10, .L115+52
	rsb	r8, lr, lr, lsl #3
	add	r10, r10, r8, lsl #3
	str	r10, [sp, #16]
	ldr	r10, .L115+52
	str	r4, [r10, r8, lsl #3]
	ldr	r8, [sp, #16]
	ldr	r4, [sp, #20]
	str	r4, [r8, #4]
	mov	r4, #1
	str	r4, [r8, #52]
	lsl	r8, lr, #3
	beq	.L110
	bge	.L38
	ldr	lr, [r9, #4]
	ldr	r4, [sp, #20]
	cmp	r4, lr
	blt	.L111
	bgt	.L112
	moveq	lr, #7
	ldreq	r4, [sp, #16]
	streq	lr, [r4, #36]
	b	.L41
.L110:
	ldr	r4, [r9, #4]
	ldr	r10, [sp, #20]
	cmp	r10, r4
	beq	.L113
.L37:
	ldr	r4, [r9, #4]
	ldr	r10, [sp, #20]
	cmp	r10, r4
	blt	.L57
	ble	.L41
	mov	r4, #8
	sub	lr, r8, lr
	ldr	r8, .L115+52
	add	lr, r8, lr, lsl #3
	str	r4, [lr, #36]
	b	.L41
.L108:
	ldr	r3, [r5]
	cmp	r3, #79
	addgt	r1, r1, #1
	strgt	r1, [r6]
	b	.L18
.L111:
	mov	lr, #1
	ldr	r4, [sp, #16]
	str	lr, [r4, #36]
	b	.L41
.L57:
	mov	r4, #6
	sub	lr, r8, lr
	ldr	r8, .L115+52
	add	lr, r8, lr, lsl #3
	str	r4, [lr, #36]
	b	.L41
.L113:
	mov	r4, #0
	ldr	r10, [sp, #16]
	str	r4, [r10, #36]
	b	.L37
.L112:
	mov	lr, #2
	ldr	r4, [sp, #16]
	str	lr, [r4, #36]
	b	.L41
.L38:
	ble	.L41
	ldr	lr, [r9, #4]
	ldr	r4, [sp, #20]
	cmp	r4, lr
	movgt	lr, #3
	ldrgt	r4, [sp, #16]
	strgt	lr, [r4, #36]
	bgt	.L41
.L40:
	blt	.L114
	moveq	lr, #5
	ldreq	r4, [sp, #16]
	streq	lr, [r4, #36]
	b	.L41
.L114:
	mov	lr, #4
	ldr	r4, [sp, #16]
	str	lr, [r4, #36]
	b	.L41
.L116:
	.align	2
.L115:
	.word	oldButtons
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
	.word	buttons
	.word	target
	.word	beacons
	.word	67109120
	.word	rand
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
	push	{r4, r5, r6, r7, r8, lr}
	ldr	r4, .L130
	ldr	r0, [r4, #4]
	mvn	r0, r0, lsl #17
	mvn	r0, r0, lsr #17
	ldr	ip, .L130+4
	mov	r6, #512
	mov	r2, ip
	mov	r5, ip
	mov	r1, ip
	ldr	lr, [r4, #44]
	ldr	r3, [r4, #36]
	add	r3, r3, lr, lsl #5
	lsl	r3, r3, #2
	strh	r0, [ip, #2]	@ movhi
	ldr	r0, [r4]
	strh	r3, [ip, #4]	@ movhi
	ldr	r3, .L130+8
	strh	r0, [ip]	@ movhi
	add	lr, r3, #280
.L120:
	ldr	r0, [r3, #52]
	cmp	r0, #1
	ldreq	r0, [r3, #36]
	ldreq	ip, [r3, #12]
	ldreq	r7, [r3, #8]
	lsleq	r0, r0, #6
	addeq	r0, r0, #16
	orreq	ip, ip, #16384
	add	r3, r3, #56
	strheq	r0, [r1, #20]	@ movhi
	strheq	ip, [r1, #18]	@ movhi
	strheq	r7, [r1, #16]	@ movhi
	strhne	r6, [r1, #16]	@ movhi
	cmp	r3, lr
	add	r1, r1, #8
	bne	.L120
	ldr	lr, [r4, #52]
	cmp	lr, #1
	movne	r3, #512
	strhne	r3, [r5, #8]	@ movhi
	bne	.L123
	mov	r0, #18
	ldr	r1, .L130+12
	add	r1, r1, #8
	ldm	r1, {r1, r3}
	orr	r3, r3, #16384
	strh	r3, [r5, #10]	@ movhi
	strh	r1, [r5, #8]	@ movhi
	strh	r0, [r5, #12]	@ movhi
.L123:
	ldr	r3, .L130+16
	mov	ip, #512
	mov	r5, #20
	add	r0, r3, #1680
	b	.L122
.L124:
	add	r3, r3, #56
	cmp	r3, r0
	strh	ip, [r2, #56]	@ movhi
	add	r2, r2, #8
	beq	.L129
.L122:
	ldr	r1, [r3, #44]
	cmp	r1, #1
	bne	.L124
	cmp	lr, #1
	bne	.L124
	ldr	r1, [r3, #4]
	ldr	r4, [r3]
	add	r3, r3, #56
	orr	r1, r1, #16384
	cmp	r3, r0
	strh	r5, [r2, #60]	@ movhi
	strh	r1, [r2, #58]	@ movhi
	strh	r4, [r2, #56]	@ movhi
	add	r2, r2, #8
	bne	.L122
.L129:
	ldr	r3, .L130+20
	mov	lr, pc
	bx	r3
	ldr	r4, .L130+24
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L130+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	ldr	r2, .L130+28
	ldrh	r1, [r2]
	ldr	r2, .L130+32
	ldrh	r2, [r2]
	strh	r1, [r3, #16]	@ movhi
	pop	{r4, r5, r6, r7, r8, lr}
	strh	r2, [r3, #18]	@ movhi
	bx	lr
.L131:
	.align	2
.L130:
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
	.comm	traps,1680,4
	.comm	target,56,4
	.comm	beacons,280,4
	.comm	tank,56,4
	.ident	"GCC: (devkitARM release 53) 9.1.0"

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
	.file	"main.c"
	.text
	.align	2
	.global	initialize
	.arch armv4t
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r2, #4608
	mov	r5, #67108864
	ldr	r4, .L4
	strh	r2, [r5]	@ movhi
	mov	r3, #256
	mov	r2, #83886080
	mov	r0, #3
	ldr	r1, .L4+4
	mov	lr, pc
	bx	r4
	mov	r3, #7936
	ldr	r2, .L4+8
	strh	r3, [r5, #8]	@ movhi
	mov	r0, #3
	strh	r2, [r5, #10]	@ movhi
	mov	r3, #64
	mov	r2, #100663296
	ldr	r1, .L4+12
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	mov	r0, #3
	ldr	r2, .L4+16
	ldr	r1, .L4+20
	mov	lr, pc
	bx	r4
	mov	r3, #2064
	mov	r0, #3
	ldr	r2, .L4+24
	ldr	r1, .L4+28
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L4+32
	mov	r0, #3
	ldr	r1, .L4+36
	mov	lr, pc
	bx	r4
	ldr	r2, .L4+40
	ldr	r3, .L4+44
	ldrh	r2, [r2, #48]
	pop	{r4, r5, r6, lr}
	strh	r2, [r3]	@ movhi
	bx	lr
.L5:
	.align	2
.L4:
	.word	DMANow
	.word	backgroundPal
	.word	7684
	.word	backgroundTiles
	.word	100726784
	.word	backgroundMap
	.word	100679680
	.word	startscreenTiles
	.word	100724736
	.word	startscreenMap
	.word	67109120
	.word	buttons
	.size	initialize, .-initialize
	.align	2
	.global	goToStart
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L8
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r1, #4608
	ldr	r2, .L8+4
	ldr	r4, .L8+8
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #10]	@ movhi
	mov	r0, #3
	mov	r3, #2064
	ldr	r2, .L8+12
	ldr	r1, .L8+16
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L8+20
	ldr	r1, .L8+24
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L8+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L8+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #0
	ldr	r1, .L8+36
	ldr	r2, .L8+40
	str	r3, [r1]
	str	r3, [r2]
	pop	{r4, lr}
	bx	lr
.L9:
	.align	2
.L8:
	.word	hideSprites
	.word	7684
	.word	DMANow
	.word	100679680
	.word	startscreenTiles
	.word	100724736
	.word	startscreenMap
	.word	waitForVBlank
	.word	shadowOAM
	.word	state
	.word	seed
	.size	goToStart, .-goToStart
	.align	2
	.global	goToGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToGame, %function
goToGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L12
	mov	lr, pc
	bx	r3
	ldr	r3, .L12+4
	mov	lr, pc
	bx	r3
	ldr	r4, .L12+8
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r1, .L12+12
	mov	lr, pc
	bx	r4
	mov	r1, #67108864
	mov	r0, #4352
	mov	r2, #1
	ldr	r3, .L12+16
	strh	r0, [r1]	@ movhi
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L13:
	.align	2
.L12:
	.word	hideSprites
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	state
	.size	goToGame, .-goToGame
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L16
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r1, #4608
	ldr	r2, .L16+4
	ldr	r4, .L16+8
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #10]	@ movhi
	mov	r0, #3
	mov	r3, #1328
	ldr	r2, .L16+12
	ldr	r1, .L16+16
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L16+20
	ldr	r1, .L16+24
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L16+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r1, .L16+32
	mov	lr, pc
	bx	r4
	mov	r2, #2
	ldr	r3, .L16+36
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L17:
	.align	2
.L16:
	.word	hideSprites
	.word	7684
	.word	DMANow
	.word	100679680
	.word	pausescreenTiles
	.word	100724736
	.word	pausescreenMap
	.word	waitForVBlank
	.word	shadowOAM
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	pause
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause, %function
pause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L30
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L30+4
	ldrh	r3, [r3]
	tst	r3, #1
	beq	.L19
	ldr	r2, .L30+8
	ldrh	r2, [r2]
	tst	r2, #1
	beq	.L28
.L19:
	tst	r3, #8
	beq	.L18
	ldr	r3, .L30+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L29
.L18:
	pop	{r4, lr}
	bx	lr
.L28:
	pop	{r4, lr}
	b	goToGame
.L29:
	pop	{r4, lr}
	b	goToStart
.L31:
	.align	2
.L30:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	pause, .-pause
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L34
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r1, #4608
	ldr	r2, .L34+4
	ldr	r4, .L34+8
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #10]	@ movhi
	mov	r0, #3
	mov	r3, #1024
	ldr	r2, .L34+12
	ldr	r1, .L34+16
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L34+20
	ldr	r1, .L34+24
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L34+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r1, .L34+32
	mov	lr, pc
	bx	r4
	mov	r2, #3
	ldr	r3, .L34+36
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L35:
	.align	2
.L34:
	.word	hideSprites
	.word	7684
	.word	DMANow
	.word	100679680
	.word	winscreenTiles
	.word	100724736
	.word	winscreenMap
	.word	waitForVBlank
	.word	shadowOAM
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	win
	.syntax unified
	.arm
	.fpu softvfp
	.type	win, %function
win:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L43
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L43+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L36
	ldr	r3, .L43+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L42
.L36:
	pop	{r4, lr}
	bx	lr
.L42:
	pop	{r4, lr}
	b	goToStart
.L44:
	.align	2
.L43:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	win, .-win
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L47
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r1, #4608
	ldr	r2, .L47+4
	ldr	r4, .L47+8
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #10]	@ movhi
	mov	r0, #3
	mov	r3, #688
	ldr	r2, .L47+12
	ldr	r1, .L47+16
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L47+20
	ldr	r1, .L47+24
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L47+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r1, .L47+32
	mov	lr, pc
	bx	r4
	mov	r2, #4
	ldr	r3, .L47+36
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L48:
	.align	2
.L47:
	.word	hideSprites
	.word	7684
	.word	DMANow
	.word	100679680
	.word	losescreenTiles
	.word	100724736
	.word	losescreenMap
	.word	waitForVBlank
	.word	shadowOAM
	.word	state
	.size	goToLose, .-goToLose
	.align	2
	.global	game
	.syntax unified
	.arm
	.fpu softvfp
	.type	game, %function
game:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L60
	mov	lr, pc
	bx	r3
	ldr	r3, .L60+4
	mov	lr, pc
	bx	r3
	mov	r2, #67108864
	ldr	r3, .L60+8
	ldrh	r1, [r3]
	ldr	r3, .L60+12
	strh	r1, [r2, #16]	@ movhi
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L50
	ldr	r3, .L60+16
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L57
.L50:
	ldr	r4, .L60+20
	ldr	r3, [r4]
	cmp	r3, #1
	beq	.L58
.L51:
	cmn	r3, #1
	beq	.L59
	pop	{r4, lr}
	bx	lr
.L59:
	pop	{r4, lr}
	b	goToLose
.L58:
	bl	goToWin
	ldr	r3, [r4]
	b	.L51
.L57:
	bl	goToPause
	b	.L50
.L61:
	.align	2
.L60:
	.word	updateGame
	.word	drawGame
	.word	hOff
	.word	oldButtons
	.word	buttons
	.word	gmState
	.size	game, .-game
	.align	2
	.global	lose
	.syntax unified
	.arm
	.fpu softvfp
	.type	lose, %function
lose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	win
	.size	lose, .-lose
	.align	2
	.global	goToInstruct
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstruct, %function
goToInstruct:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L65
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r1, #4608
	ldr	r2, .L65+4
	ldr	r4, .L65+8
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #10]	@ movhi
	mov	r0, #3
	ldr	r3, .L65+12
	ldr	r2, .L65+16
	ldr	r1, .L65+20
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L65+24
	ldr	r1, .L65+28
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L65+32
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r1, .L65+36
	mov	lr, pc
	bx	r4
	mov	r2, #5
	ldr	r3, .L65+40
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L66:
	.align	2
.L65:
	.word	hideSprites
	.word	7684
	.word	DMANow
	.word	4256
	.word	100679680
	.word	instructscreenTiles
	.word	100724736
	.word	instructscreenMap
	.word	waitForVBlank
	.word	shadowOAM
	.word	state
	.size	goToInstruct, .-goToInstruct
	.align	2
	.global	start
	.syntax unified
	.arm
	.fpu softvfp
	.type	start, %function
start:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L79
	ldr	r3, .L79+4
	mov	lr, pc
	bx	r3
	ldr	r3, [r4]
	ldr	r2, .L79+8
	add	r3, r3, #1
	ldr	r5, .L79+12
	str	r3, [r4]
	ldr	r6, .L79+16
	mov	lr, pc
	bx	r2
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r1, .L79+20
	mov	lr, pc
	bx	r6
	ldrh	r3, [r5]
	tst	r3, #8
	beq	.L68
	ldr	r2, .L79+24
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L77
.L68:
	tst	r3, #1
	beq	.L67
	ldr	r3, .L79+24
	ldrh	r3, [r3]
	tst	r3, #1
	beq	.L78
.L67:
	pop	{r4, r5, r6, lr}
	bx	lr
.L78:
	pop	{r4, r5, r6, lr}
	b	goToInstruct
.L77:
	ldr	r0, [r4]
	ldr	r3, .L79+28
	mov	lr, pc
	bx	r3
	ldr	r3, .L79+32
	mov	lr, pc
	bx	r3
	bl	goToGame
	ldrh	r3, [r5]
	b	.L68
.L80:
	.align	2
.L79:
	.word	seed
	.word	hideSprites
	.word	waitForVBlank
	.word	oldButtons
	.word	DMANow
	.word	shadowOAM
	.word	buttons
	.word	srand
	.word	initGame
	.size	start, .-start
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r7, fp, lr}
	ldr	r3, .L92
	mov	lr, pc
	bx	r3
	ldr	r6, .L92+4
	ldr	fp, .L92+8
	ldr	r5, .L92+12
	ldr	r10, .L92+16
	ldr	r9, .L92+20
	ldr	r8, .L92+24
	ldr	r7, .L92+28
	ldr	r4, .L92+32
.L82:
	ldr	r2, [r6]
	ldrh	r3, [fp]
.L83:
	strh	r3, [r5]	@ movhi
	ldrh	r3, [r4, #48]
	strh	r3, [fp]	@ movhi
	cmp	r2, #5
	ldrls	pc, [pc, r2, asl #2]
	b	.L83
.L85:
	.word	.L88
	.word	.L87
	.word	.L86
	.word	.L84
	.word	.L84
	.word	.L84
.L84:
	mov	lr, pc
	bx	r7
	b	.L82
.L86:
	mov	lr, pc
	bx	r8
	b	.L82
.L87:
	mov	lr, pc
	bx	r9
	b	.L82
.L88:
	mov	lr, pc
	bx	r10
	b	.L82
.L93:
	.align	2
.L92:
	.word	initialize
	.word	state
	.word	buttons
	.word	oldButtons
	.word	start
	.word	game
	.word	pause
	.word	win
	.word	67109120
	.size	main, .-main
	.text
	.align	2
	.global	instruct
	.syntax unified
	.arm
	.fpu softvfp
	.type	instruct, %function
instruct:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	win
	.size	instruct, .-instruct
	.comm	seed,4,4
	.comm	state,4,4
	.comm	vOff,4,4
	.comm	hOff,4,4
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.ident	"GCC: (devkitARM release 53) 9.1.0"

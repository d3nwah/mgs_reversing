	opt	c+, at+, e+, n-
	section .text

	xdef sub_8001FCB0
sub_8001FCB0:
	dw 0x24020001 ; 0x8001FCB0
	dw 0x14820005 ; 0x8001FCB4
	dw 0x3C020006 ; 0x8001FCB8
	dw 0x3442A242 ; 0x8001FCBC
	dw 0xAF8206AC ; 0x8001FCC0
	dw 0x03E00008 ; 0x8001FCC4
	dw 0x00000000 ; 0x8001FCC8
	dw 0x3442EA54 ; 0x8001FCCC
	dw 0xAF8206AC ; 0x8001FCD0
	dw 0x03E00008 ; 0x8001FCD4
	dw 0x00000000 ; 0x8001FCD8

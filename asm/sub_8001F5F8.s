	opt	c+, at+, e+, n-
	section .text

	xdef sub_8001F5F8
sub_8001F5F8:
	dw 0x8C820004 ; 0x8001F5F8
	dw 0x00000000 ; 0x8001F5FC
	dw 0x00821021 ; 0x8001F600
	dw 0xAC820004 ; 0x8001F604
	dw 0x03E00008 ; 0x8001F608
	dw 0x24020001 ; 0x8001F60C

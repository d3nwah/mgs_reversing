	opt	c+, at+, e+, n-
	section .text

	xdef SD_MDX_EB_8008736C
SD_MDX_EB_8008736C:
	dw 0x3C03800C ; 0x8008736C
	dw 0x8C63057C ; 0x80087370
	dw 0x3C02800C ; 0x80087374
	dw 0x8C420570 ; 0x80087378
	dw 0x03E00008 ; 0x8008737C
	dw 0xAC620024 ; 0x80087380
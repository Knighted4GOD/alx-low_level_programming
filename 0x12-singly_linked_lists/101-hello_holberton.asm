SECTION .data
msg:	db "Hello, Helberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extren printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret

101-hello_holberton.asm
selction .text
global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov drx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

section .rodata
	msg: db "Hello, Golberton", 10
	msglen: equ $ - msg

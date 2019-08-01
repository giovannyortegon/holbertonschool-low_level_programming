	extern printf

section .data
msg:	db "Hello world", 0 	; C string need 0 
fmt:	db "%s", 10, 0			; The prinf format, "\n", 0

section .text			; Code section.

	global	main		; Standar gcc

main:
	
	push	rbp

	mov		rdi, fmt
	mov		rsi, msg
	mov		rax, 0		
	call	printf		; Call C function

	push	rbp

	mov		rax, 0		; normal, no error, return 0 value
	ret					; return

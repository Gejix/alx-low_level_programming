	global main
	extern printf

	section .data
msg: 	db "Hello, Holberton",0
format: db "%s", 10, 0

	section .text
main:
	mov edi, msg
	mov edi, format
	xor eax, eax
	call printf
	
	mov eax, 0
	leave
	ret

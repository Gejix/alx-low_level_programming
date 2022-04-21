	global main
	extern printf

	section .data
msg: 	db "Hello, Holberton",0
format: db "%s", 10, 0

	section .text
main:   push rbp
        mov rbp, rsp
	sub rsp, 16

	xor eax, eax
	lea rdi, [msg]
	call printf
	
	add rsp, 16
	leave
	ret

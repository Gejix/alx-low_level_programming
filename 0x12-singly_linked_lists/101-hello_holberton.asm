        .section .rodata
str:    .string "Hello, Holberton"

        .section .text
        .global main
main:   push %rbp
        mov %rsp, %rbp

        lea str(%rip), %rdi
        xor %al, %al
        call printf

        leave
        ret

; My comments: It is has being fun so far learning C
; File: 101-hello_holberton.asm
; Auth: Nwoke, Francis J
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

extern printf

section .text
   global main

main:
   push rbp

   mov rdi,fmt
   mov rsi,msg
   mov rax,0
   call printf

   pop rbp

   mov rax,0
   ret

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0

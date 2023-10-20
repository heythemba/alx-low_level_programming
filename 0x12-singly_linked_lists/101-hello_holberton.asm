section .data
hello db 'Hello, Holberton',0xA  ; the 0xA is a newline
hello_len equ $ - hello           ; compute the length of the string

section .text
global main
main:
    ; write syscall
    mov rax, 1                      ; syscall: sys_write
    mov rdi, 1                      ; file descriptor: stdout
    mov rsi, hello                  ; pointer to message to write
    mov rdx, hello_len              ; message string length
    syscall                         ; call kernel

    ; exit syscall
    mov rax, 60                     ; syscall: sys_exit
    xor rdi, rdi                    ; status: 0
    syscall                         ; call kernel

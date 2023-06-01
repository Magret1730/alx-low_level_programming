section .data
    format db 'Hello, Holberton', 0Ah ; Null-terminated format string
    len equ $ - format                ; Length of the string

section .text
    global _start

_start:
    ; Write to stdout
    mov eax, 1                  ; System call number for write
    mov edi, 1                  ; File descriptor for stdout
    mov esi, format              ; Pointer to the format string
    mov edx, len                ; Length of the string
    syscall                     ; Invoke the system call

    ; Exit the program
    mov eax, 60                 ; System call number for exit
    xor edi, edi                ; Exit status (0)
    syscall                     ; Invoke the system call

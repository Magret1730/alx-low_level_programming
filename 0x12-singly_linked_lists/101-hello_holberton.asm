section .data
    format db 'Hello, Holberton', 0Ah ; Null-terminated format string

section .text
    global main

_start:
    mov edx, 16                 ; Length of the string
    mov ecx, format              ; Pointer to the format string
    mov ebx, 1                  ; File descriptor for stdout
    mov eax, 4                  ; System call number for write
    int 0x80                    ; Invoke the system call

    mov eax, 1                  ; System call number for exit
    xor ebx, ebx                ; Exit status (0)
    int 0x80                    ; Invoke the system call

[org 0x7c00]
    mov ah, 0x0E
    mov al, 'W'
    int 0x10
    mov al, 'y'
    int 0x10
    mov al, 'n'
    int 0x10
    mov al, 'n'
    int 0x10
    mov al, 'O'
    int 0x10
    mov al, 'S'
    int 0x10
    jmp $

times 510-($-$$) db 0
dw 0xAA55
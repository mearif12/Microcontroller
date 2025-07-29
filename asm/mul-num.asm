; program to multiply two numbers.

.model small
.stack 100h
.data
.code
main proc
    mov al,5
    mov bl,2

    mul bl
    AAM        ; ASCII Adjust after Multiplication.

    mov bh,ah
    mov bl,al

    mov dl,bh 
    add dl,48
    mov ah,2 
    int 21h 

    mov dl,bl
    add dl,48
    mov ah,2 
    int 21h 

    exit:
    mov ah,4ch 
    int 21h
main endp 
end main
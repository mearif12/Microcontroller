; swapping two numbers using push and pop.

.model small
.stack 100h
.data
.code
    main proc
        mov ax,'1'
        mov bx,'2'

        push ax ; inserting 1 to stack
        push bx ; inserting 2 to stack

        pop ax ; fetching 2 from stack  
        pop bx ; fetching 1 from stack

        mov dx,ax
        mov ah,2
        int 21h

        mov dx,10
        mov ah,2
        int 21h

        mov dx,bx
        mov ah,2
        int 21h

        exit:
        mov ah,4ch
        int 21h 
    main endp
end main
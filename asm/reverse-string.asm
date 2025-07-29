; reversing string using push and pop.

.model small
.stack 100h
.data
msg db 'arif'
.code 
    main proc
        mov ax,@data
        mov ds,ax

        lea si,msg

        mov cx,4

        l1:

        mov bx,[si]
        push bx
        inc si

        loop l1 

        mov cx,4

        l2:

        pop dx
        mov ah,2
        int 21h

        loop l2

        exit:
        mov ah,4ch
        int 21h
    main endp
end main
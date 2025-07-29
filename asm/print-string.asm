dosseg
.model small
.stack 100h
.data
array db 100 dup('$')
.code
    main proc
        mov ax,@data
        mov ds,ax
        lea si,array

        l1:
        mov ah,1
        int 21h
        cmp al,13
        je programend
        jne prognotend

        prognotend:
        mov [si],al
        inc si 
        jmp l1

        programend:
        lea dx,array
        mov ah,9
        int 21h

        exit:
        mov ah,4ch
        int 21h 
    main endp
end main
dosseg
.model small
.data
array db 'a','b','c'
.code
    main proc
        mov cx,3

        mov ax,@data
        mov ds,ax
        lea si,array

        l1:
        mov dx,[si]
        mov ah,2
        int 21h

        inc si

        loop l1

        exit:
        mov ah,4ch
        int 21h
    main endp
end main
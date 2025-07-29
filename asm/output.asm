
dosseg
.model small
.stack 100h
.data
.code 

    main proc

        mov dl,'A'
        mov ah,2
        int 21h

        mov dl,'R'
        mov ah,2
        int 21h

        mov dl,'I'
        mov ah,2
        int 21h

        mov dl,'F'
        mov ah,2
        int 21h

        mov dl,' '
        mov ah,2
        int 21h

        mov dl,49 ;for 1
        mov ah,2
        int 21h

        mov dl,50 ; for 2
        mov ah,2
        int 21h

        exit:
        mov ah,4ch
        int 21h

    main endp

end main
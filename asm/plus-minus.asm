dosseg
.model small
.stack 100h
.data
.code

    main proc

        ; Addition
        mov bl,3
        mov cl,2
        add bl,cl ; adding 2 values of register

        add bl,48 ; converting ASCII codes
        mov dl,bl
        mov ah,2
        int 21h

        ; Subtraction
        mov bl,5
        mov cl,2
        sub bl,cl ; subtracting 2 values of register
        
        mov dl,10 ; printing new line
        mov ah,2
        int 21h

        add bl,48 ; converting into ASCII codes
        mov dl,bl
        mov ah,2
        int 21h

        exit:
        mov ah,4ch
        int 21h
         
    main endp
end main
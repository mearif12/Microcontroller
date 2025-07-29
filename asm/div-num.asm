; program to divide two numbers

.model small
.stack 100h
.data 
q db ?
r db ?
.code 
    main proc
        mov ax,26 ;dividend
        mov bl,5  ;divisor

        div bl 

        mov q,al 
        mov r,ah

        mov dl,q
        add dl,48
        mov ah,2
        int 21h

        mov dl,10
        mov ah,2
        int 21h

        mov dl,r 
        add dl,48 
        mov ah,2 
        int 21h

        exit:
        mov ah,4ch
        int 21h
    main endp
end main
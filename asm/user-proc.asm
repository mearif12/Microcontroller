; user defined procedure.
.model small
.stack 100h
.data 
msg1 db 'hello$'
msg2 db 'hello there$'
msg3 db 'good to see you$'
.code
    main proc 
        mov ax,@data
        mov ds,ax 
        
        lea dx,msg1
        mov ah,9
        int 21h

        call enterkey

        lea dx,msg2
        mov ah,9
        int 21h

        call enterkey

        lea dx,msg3
        mov ah,9
        int 21h

        exit:
        mov ah,4ch
        int 21h
    main endp

    enterkey proc
        mov dx,10
        mov ah,2
        int 21h

        mov dx,13
        mov ah,2
        int 21h

        ret 
    enterkey endp 
end main
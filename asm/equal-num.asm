dosseg
.model small
.stack 100h
.data
   msg1 db 'equal$'
   msg2 db 'not equal$'
.code
   main proc
        mov ax,@data
        mov ds,ax

        mov dl,'3'
        mov ah,1
        int 21h

        cmp al,dl
        je l1
        
        jne l2

        l1:
        lea dx,msg1
        mov ah,9
        int 21h

    
        mov ah,4ch
        int 21h

        l2:
        lea dx,msg2
        mov ah,9
        int 21h

    
        mov ah,4ch
        int 21h
   main endp

end main
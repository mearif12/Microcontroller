; using macro for assigning parameters

.model small
.stack 100h
.data
msg1 db 'hello$'
msg2 db 'hello there$'

; creating macro    
print macro param
lea dx,param 
mov ah,9
int 21h 
endm  

.code
   
    main proc
        mov ax,@data
        mov ds,ax

        print msg1

        mov dx,10
        mov ah,2
        int 21h

        print msg2

        exit:
        mov ah,4ch
        int 21h 
    main endp  
 
end main
; program to print graphics ( draw box ).

.model small 
.stack 100h
.data 
.code 
main proc
    mov ah,6 ;requesting scrolls line
    mov al,10 ; next line

    mov bh,00010000b
    mov ch,0
    
    ; top starting point
    mov ch,0
    mov cl,0

    ; bottom ending point
    mov dh,15
    mov dl,15
    int 10h 

    exit:
    mov ah,4ch
    int 21h
main endp 
end main

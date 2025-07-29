dosseg
.model small
.stack 100h
.data                              ;using data segment values
;   msg1 db 'number 1 is big$'
;   msg2 db 'number 2 is big$'
;   msg3 db 'number 3 is big$'
.code
      main proc
            mov ax,@data
            mov ds,ax

            ; mov bx,'91' 

            ; mov cx,'7'        ;fixed input

            ; mov dx,'49'

            mov ah,1
            int 21h
            mov bl,al
            
            mov ah,1
            int 21h
            mov bh,al

            mov ah,1
            int 21h
            mov cl,al
            
            cmp bh,bl
            jg l1
            jng l2

            l1:
            cmp bh,cl
            jg l3

            l2:
            cmp bl,cl 
            jg l4
            jng l5

            l3:
            ; lea dx,msg2        ;using .data segment
            ; mov ah,9
            ; int 21h
            mov dl,bh
            mov ah,2
            int 21h
            jmp exit

            l4:
            ; lea dx,msg1         ;using .data segment
            ; mov ah,9
            ; int 21h
            mov dl,bl
            mov ah,2
            int 21h
            jmp exit

            l5:
            ; lea dx,msg3         ;using .data segment
            ; mov ah,9
            ; int 21h
            mov dl,cl
            mov ah,2
            int 21h
            jmp exit

            exit:
            mov ah,4ch
            int 21h

      main endp
end main
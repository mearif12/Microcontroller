;0 1 2 3 4 5 6 7 8 9
dosseg
.model small
.stack 100h
.data
.code
      main proc
            mov cl,10
            mov dl,48

            l1:
            mov ah,2
            int 21h
            inc dl

            loop l1

            exit:
            mov ah,2
            int 21h 
      main endp
end main
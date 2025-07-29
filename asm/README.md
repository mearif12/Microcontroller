# Assembly

- High level language -> compiler -> Assembly code -> assembler -> Object File -> library files + linkers -> Machine code -> Hardware.

- Assembly needs for : Optimization of processing time & Embedded programing.

- Program means set of instructions.

- low level -> close to machine.

- Mnemonics keywords -> add,mov,sub..

- David John Wheeler -> Assembly creator

- Registers helps in optimization time when directly access with Assembly.

- Register means Record or collection of information.

- Hard disk -> RAM -> Cache -> Registers.

- 16 bits register means 16 digit inserts at a time in register.

- 14 types of Registers

- Accumalator -> a = 8 bits ; ax = 16 bits = ah + al.

- X = Extended to 16 bits.

- Accumalator usually use for input/output operations : a,ax,eax,rax.

- Eax -> 32 bits ; Rax -> 64 bits ; 

- E = Extended to 32 bits. R = Rich Register to 64 bits.

- Base -> holds address of data : b,bx,ebx,rbx. (use in future)

- Counter -> Counts,use in loops : c,cx,ecx,rcx. 

- Data -> Holds data for output (that prints 'a' then) : d,dx,edx,rdx.

- GPR -> General Purpose Register : Accumalator,Base,Counter,Data.

- Code segment -> cs -> holds address of code(program).

- Data segment -> ds -> holds address of data.

- Stack segment -> ss -> holds address of stack structure.

- Extra segment -> es -> holds address of extra code segment (when it is full).

- Segment Registers -> (cs,ds,ss,es).

- Source Index -> si -> points the source operand.

- Destinition index -> di -> points the destinition operand.

- OPCODE destinition,source -> ADD dl,bl ; exceptional -> ADD 3,bl; ADD dl,3;

- index registers -> (si , di)

- Instruction Pointers -> ip ->  Holds the next instruction.

- Stack Pointer -> sp -> Points current top of stack.

- Special Purpose Registers -> (ip,sp).

- Flag Registers -> f -> Holds current status of the program -> like carry 1 holding where adding 1,1.

- Base pointer -> Base of the top of stack.

- Addressing Modes -> Ways to access data -> 3 types :

- Registers addressing -> Opcode reg1,reg2 -> Both operands are registers.

- immediate addressing -> Opcode reg1,constant -> one operand is constant term.

- memory addressing -> Opcode reg1,[address] -> access static data directly.

- Data Transfer Instruction -> Mov dl,2 -> mov dl,'A'.

- service routine (input/output) : mov ah,X

- X = 1 = input a charcter with echo.

- X = 2 = output a single character like 'a'.

- X = 8 = input a character without echo.

- X = 9 = output a collection of characters or string like 'abcde'.

- 4ch means exit or getting out from register.

- interrupt -> stop the current program and allow microprocessor to access hardware to take input or give output. Ex:

- int 21h -> interrupt for text handling.

- int 20h -> interrupt for vedio/graphics handling.

- ASCII -> (American Standard Code for Information Interchange) -> character encoding scheme.

- in ASCII -> A = 65 to Z = 90 ; a = 97  to z = 122 ; 0 = 48 to 9 = 57; Next line = 10 ; Carriage Return = 13 .

- .model (size) -> model directive (space in RAM) -> RAM = DATA + CODE + STACK :

- Tiny : code + data <= 64Kb ; Small : code <= 64Kb ,data <= 64Kb ; Medium : code = any_size , data <= 64Kb ; Compact : code <= 64Kb, data <= any_size ; Large : code = data = any_size ;

- we use (small) -> as begginers,not reserve many size of RAM.

- .model small -> Model Directives -> Specifies the total amount of memory the program would take.

- .stack 100h -> stack segment directives -> specifies the storage for stack .

- .data -> data segment directive -> ;variables are defined here.

- .code -> code segment directive -> ; write all the code or instructions here inside a procedure that must defined after .code -> we can create many procedure .

- procedure -> main proc -> ; code blocks -> main endp .

- end main -> to end the program.

- some error moves -> mov 'B','A' ; mov 2,3 ; mov dl,ax (cuz dl = 8bits , ax = 16bits).

- some acceptable moves -> mov dl,'A' ; mov dl,2 ; mov dx,ax ; mov dh,al (though different portion).

- dosseg -> DOS Segment -> managements the arrangement of segments in a program (when you don't which segment write first,second,...) .

- ; this is a comment.

- to print 'A' : 1. mov dl,'A' ; 2.mov ah,2 ; 3. int 21h .

- exiting from register after print 'A' : 4. mov ah,4ch ; 5. int 21h .

- in asm,variables are defined in .data directive.

- declaring variable : varname DataSize Value.

- reserved keywords : al,bl,cl,dl,..,add,sub,div,mul,mov,push,pop.

- DataSize : DB,DW,DD,DQ,DT. 

- DB -> Define Byte (1byte = 8bits)

- DW -> Define Word (2 bytes = 16bits)

- DD -> Define Double word (4bytes = 32bits)

- DQ -> Define Quadword (8bytes = 64bits)

- DT -> Define TenBytes (10bytes = 80bits)

- value must ASCII or char type : var1 db 49, var1 db '1' ;you can skip value by '?' : var db ? .

- '$' is terminator,must use in the end of string: var1 db '1234$'.

- to import variable in '.code' segment from '.data' : mov ax,@data -> memory location moves to ax ; mov ds,ax -> initialize data segment.

- to import string : mov dx, offset var1 or lea dx,var1 ; offset is 16bits and lea is Load Effective Address.

- counter register : mov cx,10 means cx = 10,9,8,7,.....,0.

- for looping -> ;mov dx,48 ->  label: ;mov ah,2 ;int 21h ;inc dx -> Loop label .

- Jump -> for unconditional jump : label: -> ;code blocks; -> jmp label

- Jump -> for conditional jump : label: -> ;code blocks; -> JE/JNE/JZ/JNZ/JGE/JG/JNG/JA/JAE/JL/JLE/JB/JBE label

- also use flags in jump -> JC/JP/JA/JZ/JS/JT/JI/JD/JO .

- for comparing -> cmp reg1,reg2 ; cmp reg,constant ; cmp reg,[memory address] .

- Array declaring -> num : arr1 db 1,2,3,4 ; char : arr1 db 'a','b','c' ; unsigned : arr1 db ?,?,? (3 dup(?)).

- Source Index Register -> SI -> used as pointer to access array .

- si have the addres so: lea si,arr1 -> mov dx,[si] -> for next value : mov dx,[si+1] or, ;inc si ;mov dx,[si] . 

- Stack follows LIFO. 

- Stack Pointer Register -> points the top of space reserved for stack.

- Stack Segment Register -> hold address of space reserved for stack.

- Stack Segment : Stack Pointer -> SS:SP. to insert or delete data in Stack: PUSH , POP must >= 16 bits.

- PUSH register/variable -> copies content from operand to top of stack.

- POP register/variable -> copies content from top of stack to Operand.

- Nested loop -> loop inside a loop.

- Procedure -> is just a block of code that can be called anywhere in the program with name.

- to use Procedure -> Proc_Name proc -> code blocks -> ret -> Proc_Name endp

- macro -> is just a block of code that can be used with parameters anywhere in program with name.

- macro is a perfect function.

- to use macro -> Macro_Name macro p1,p2,.. -> block of codes -> endm.

- signed numbers -> negative numbers ; unsigned numbers -> possitive numbers.

- 1 = 0001b -> -1 = 1111b by 2's complement,this is signed number.

- MSB = 0 -> 0001 -> LSB = 1, if MSB : 1 then negative and 0 then possitive number.

- num - highest_val_in_num_system = one's complement + 1 = 2's complement.

- Division for unsigned numbers :  Dividend / Divisor -> ax / (bl,cl,dl). (16 bits / 8 bits) 

- al : quotient ; ah : remainder in divison.

- 26/5 : quotient 5 and remainder 1.

- Multiplication for unsigned numbers : multiplicand * multiplier -> al * (bl,cl,dl). (8/16 bits * 8/16 bits).

- when (8 * 8)bits = 16 bits product,use AAM (ASCII Adjust after Multiplication) to handle one digit with 'al' and 'ah'.

- Graphics -> to relationship between or connect points using computer.

- int 21h -> interrupt for text. int 10h -> interrupt for graphics.

- some interrupt ah functions / service routines (int _):

- 00h : set vedio mode (full-screen) ; 01h : set cursor lines ; 02h : set cursor possition.

- 03h : get cursor possition and size ; 06h : scroll window up ; 07h : scroll window down.

- 08h : read character and attribute ; 09h : write character and attributre ; 0Ah : write character.

- 10h (AL = 03h) : Toggle blinking /intensity bit ; 0Fh : Get vedio mode ; 13h : write string in teletype mode.

- mov bh,00000000b -> here first 0 is setting blingking with 1 or not. next 3 digit sets background color. next one digit for intensity and next 3 for text color.

- for creating graphics :

- ah,06 -> function to request to scroll lines up.

- al -> number of lines to be scrolled,lines to be filled.

- bh -> color attribute.

- ch -> top row of window ; cl -> left most column of window.

- dh -> bottom row of window ; dl -> right most column of window.

- mov dx,184h -> Full end coordinates.

This project uses inline assembly (Xtensa) on the ESP32 to sum the elements of an integer array.
Firstly I start serial communication at 115200 baud.
I created an integer array including 12, 5, 8, 20, 3.
I initialized a sum variable with 0 and a length variable with 5.
After that I start to code the assembly section.
The 10th line load 0 value into register a2.
The 11th line load arr integer array address into register a3.
The 12th line load lenth into register a4.
The 14th line is beginning of the loop.
The 15th line is like if stament C or another high-level programming language,
it says if register a4 is equals to 0 then go loop-end so finish the loop,
our summiation is done.And beqz means "branch if equal to zero".
The 17th line loads a 32-bit (4-byte) integer from memory into register a5,
in this line 0 represesnt our offset value when we say '0' we want to say
this address so we say read exactly from that address.l32i instruction means
the int type in ESP32 occupies 4 bytes, so we must use l32i to load an array element.
In the 18th line a2 is our sum variable  and a5 is a element in the array we read,
we sum a2 value and a5 and we strore sum in the register a2.
In the 20th line the 'addi' instruction is add a number to register to 
reach next element in the array,addi stands for 'add immediate'.
In the 21th line we decrease our length value by 1.
23th line is like 'go' or 'continue' in C language so 
it says go to the beginning of the loop.
25th line is end of the loop.
26th assign value of a2 register to sum variable in our C code.
27th the assembly writes into the C variable sum.
28th line we pass the array pointer and length from C into the assembly.
At the last of  the code we do this because we have to say
this register modified by us when we write inline assembly code.
Beacuse inline assembly sytanx is like
asm (
    "assembly Code"
    : output operands
    : input operands
    : clobbers  -> this is our last of code 29th line
);



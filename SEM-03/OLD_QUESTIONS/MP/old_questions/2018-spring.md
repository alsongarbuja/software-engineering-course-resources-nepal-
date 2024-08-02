# 2018-Spring

## 1a, Evolution of Intel MP starting from 16-bit architecture to 64-bit architectures.

|Processor|Year|Transistor|Clockspeed|Address Bus|Data Bus|Addressable Memory|
|--|--|--|--|--|--|--|
|4004|1971|2300|108KHz|10 bit|4 bit|640 bytes|
|8008|1972|3500|200KHz|14 bit|8 bit|16 KB|
|8080|1974|6000|2MHz|16 bit|8 bit|64 KB|
|8085|1976|6500|5MHz|16 bit|8 bit|64 KB|
|8086|1978|29000|5MHz|20 bit|16 bit|1 MB|
|8088|1979|29000|5MHz|20 bit|8 bit|1 MB|
|80286|1982|134000|8MHz|24 bit|16 bit|16 MB|
|80386|1985|275000|16MHz|32 bit|32 bit|4 GB|
|80486|1989|1.2M|25MHz|32 bit|32 bit|4 GB|
|Pentium|1993|3.1M|60MHz|32 bit|32 bit|4 GB|
|Pentium Pro|1995|5.5M|150MHz|36 bit|32 bit|64 GB|
|Pentium II|1997|8.8M|233MHz|36 bit|64 bit|64 GB|
|Pentium III|1999|9.5M|650MHz|36 bit|64 bit|64 GB|
|Pentium IV|2000|42M|1.4GHz|36 bit|64 bit|64 GB|

## 1b,

[Same as 2012-fall 1b part 2](https://github.com/Alson33/Notes_Old_question_solutions/blob/master/3rd-Semester/MP/old_questions/2012-fall.md)

## 2a, Write function , addressing modes, size and name of machine cycles for the following instruction.

i, LDAX D
ii, ADI 32H
iii, LXI B, 2075H

|Instruction|Size|Addressing mode|Function|Machine Cycles|
|--|--|--|--|--|
|LDAX D|3-byte|Register indirect addressing mode|It loads the accumulator with the data pointed by D register|1,Opcode fetch<br>2,Memory read<br>3,Memory read<br>4,Memory read|
|ADI 32H|2-Byte|Immediate addressing mode|It adds the content of accumulator with immediate data 32H|1,Opcode fetch<br>2,Memory Read|
|LXI B, 2075H|3-Byte|Immediate addressing mode|B register points to 20H data and its pair C register points to the 75H data|1,Opcode fetch<br>2,Memory Read<br>3,Memory Read|

## 2b, Instruction cycle, machine cycle and T-states.

- **Instruction Cycle**
    - It is a fetch-decode-execute cycle that CPU follows from boot-up to the shut down of the computer in order to process the instrcution provided.
    - It is also the time required to complete one instrution.
- **Machine Cycle**
    - It is the time required to complete one operation or subtask of acessing memory, input, output or acknowledging external request.
    - It may consists of 3 to 6 T-states.
    - Some machine cycles are:- `Opcode fetch`, `memory read`, `I/O write cycle`, etc 
- **T-States**
    - It is the amount of time to perform one sub divison of the operation. It is also known as a unit time. Each machine cycles have to perform a set of task to complete the whole instruction, and each task will take some time to complete which is known as T-state.
    - Opcode fetch cycle have `4T-states`, Memory write cycle have `3T-states`, etc

## 2c, Timing diagram of MVI A, 32H

[Similar as 2012-fall 2a](https://github.com/Alson33/Notes_Old_question_solutions/blob/master/3rd-Semester/MP/old_questions/2012-fall.md)

## 3a, What do you mean by Segmentation offset Scheme in 8086 Microprocessor. Explain with suitable example.

## 3b, WAP to subtract two 16-bit numbers and store the result in memory location starting from 2075H

- Suppose the 16 bit numbers are stored in 3050 to 3053H

|Memory address|Label|Instruction|Hexcode|Comment|
|--|--|--|--|--|
|2000H||LHLD 3050H|Hexcode of LHLD|H <-- (3050H)<br>L <--(3051H)|
|2001H||---|50H||
|2002H||---|30H||
|2003H||XCHG|Hexcode of XCHG|D <--(H)<br>E <--(L)|
|2004H||LHLD 3052H|Hexcode of LHLD|H <-- (3052H)<br>L <--(3053H)|
|2005H||---|52H||
|2006H||---|30H||
|2007H||MOV A, E|Hexcode of MOV A, E|A <--(E)|
|2008H||SUB L|Hexcode of SUB L|A <-- (A-L)|
|2009H||STA 2075H|Hexcode of STA|2075H <-- (A)|
|200AH||---|75H||
|200BH||---|20H||
|200CH||MOV A, D|Hexcode of MOV A, D|A <--(D)|
|200DH||SBB H|Hexcode of SBB H|A <-- (A-H) with borrow|
|200EH||STA 2076H|Hexcode of STA 2076H|2076H <-- (A)|
|200FH||---|76H||
|2010H||---|20H||
|2011H||HLT|CFH|End of Program|

## 3c, Explain various assembler directives.

- Assembly language supports a number of statements that enables to control the way in which a source program assembles and lists.They are called assembler directives.
- The most comman Assembler Directives are:-
    1. **PAGE DIRECTIVE**
        - It helps to control the format of a listing of an assembled program. It is a optional Directives.
        - `Format PAGE [LENGTH],[WIDTH]` length is the maximum lines a page can have and width is the maximum characters a line can have.
        - Default values to 50,80.
    1. **TITLE DIRECTIVE**
        - It is used to define a title of the program. It is also a optional Directive.
        - `Format TITLE "TEXT"`
    1. **SEGMENT DIRECTIVE**
        - It is used to define the start of a segment.
        - A Stack segment defines stack storage, a data segment defines data items, and a code segment provides executable code.
        
                FORMAT 
                    .STACK [SIZE]
                    .DATA
                        --data to initailize
                    .CODE
                        --codes
    1. **MEMORY MODEL DIRECTIVE**
        - It is used to define how to use segments to provide space and ensure optimum execution speed.
        - `FORMAT .MODEL [MODEL NAME]`
        - The models can be `TINY, SMALL, MEDUIM, COMPACT, etc`
    1. **THE PROC DIRECTIVE**
        - The code segment contains the executable codes for a program, which consists of one or more procedures, defined initailly by `PROC Directive` and ended with `ENDP Directive`
        
                Format
                    Procedure name PROC
                            ...........
                            ...........
                    procedure name ENDP
    1. **END DIRECTIVE**
        - As mentioned above ENDP ends the procedure same as END Directive ends the whole program.
        - `FORMAT END [PROCEDURE NAME]`
    1. **THE EQU DIRECTIVE**
        - It is used to redefine symbolic names.

                Example:
                    DATAX DB 25
                    DATA EQU DATAX
    1. **THE .STARTUP and .EXIT DIRECTVE**
        - MASM 6.0 introduced the .STARTUP and .EXIT directive to simplify the initailization and termination of program.

## 4a, 

[Same as 2019-spring 4a](https://github.com/Alson33/Notes_Old_question_solutions/blob/master/3rd-Semester/MP/old_questions/2019-spring.md)

## 4b, Write a procedure program for 8086 for new line and use it to display the three different string in different lines.

```js
TITLE "Display 3 strings in different lines"

.MODEL SMALL
.STACK 100h

.DATA
    str1 DB "Hello$"
    str2 DB 10,13, "This is in new line.$"
    str3 DB 10,13, "Another string in new line.$"

.CODE
    main Proc
        MOV AX, @data
        MOV DS, AX

        LEA DX, str1
        MOV AX, 09H
        INT 21H

        LEA DX, str2
        MOV AX, 09H
        INT 21H

        LEA DX, str3
        MOV AX, 09H
        INT 21H

        MOV AX, 4C00H
        INT 21H
    main ENDP
    END main
```

## 5a, What are various sources of interrupts. Explain interrupt vector table in 8086 MP.

- A interrupt is a emergency signal that when the microprocessor gets it stops all the further execution of instruction and service the interrupt first. A interrupt can occur in the microprocessor internally or externally.
- The sources of interrupts are as follows:-
    1. **Processor Interrupts**
        - This interrupt is caused by some error conditions produced in the processor internally during the execution of instruction.
        - Example: divide by zero, register overflow,etc
    1. **Hardware Interrupts**
        - This interrupt is caused by external signal applied to the interrupt pins.
        - In 8086 microprocessor the external interrupts are in the NMI(NON-Maskable Interrupt) pins.
        - In 8085 microprocessor the external interrupts are in the INTR(INterrupt Request) pins.
    1. **Software Interrupts**
        - This interrupt is caused by the available interrupt instructions.
        - In 8086 INT instruction and INT 21H instruction cause software interrupts.
        - In 8085 RST 0 - RST 7 instructions causes software interrupts.

- 2nd part in [2019-spring 5b](https://github.com/Alson33/Notes_Old_question_solutions/blob/master/3rd-Semester/MP/old_questions/2019-spring.md##5b)

## 5b, What do you mean by address decoding? Design an address decoding circuit to interface 4K*8 RAM, 8K*8 ROM and 16K*8 RAM with starting address 0000h

- Total number of address lines = 16 (A<sub>15</sub> to A<sub>0</sub>)
- Size of EPROM = **4kb * 8** = **1kb * 4 * 8** = 2<sup>10</sup> * 2<sup>2</sup> * 8 =  2<sup>12</sup> * 8  
- number of address lines required for ROM = 12 (A<sub>11</sub> to A<sub>0</sub>)
- Size of RAM  = **8kb * 8** = **1kb * 8 * 8** = 2<sup>10</sup> * 2<sup>3</sup> * 8 = 2<sup>13</sup> * 8
- number of address lines required for RAM 2 = 13 (A<sub>12</sub> to A<sub>0</sub>)

`Table for addressing lines`

|Memory|A<sub>15</sub>|A<sub>14</sub>|A<sub>13</sub>|A<sub>12</sub>|A<sub>11</sub>|A<sub>10</sub>|A<sub>9</sub>|A<sub>8</sub>|A<sub>7</sub>|A<sub>6</sub>|A<sub>5</sub>|A<sub>4</sub>|A<sub>3</sub>|A<sub>2</sub>|A<sub>1</sub>|A<sub>0</sub>|Hexadecimal|
|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|
|EPROM|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0000H|
||0|0|0|0|1|1|1|1|1|1|1|1|1|1|1|1|0fffH|
|||||||||||||||||||
|RAM|0|0|0|1|0|0|0|0|0|0|0|0|0|0|0|0|1000H|
||0|0|1|0|1|1|1|1|1|1|1|1|1|1|1|1|2fffH|

![Address decoding circuit](../photos/addressDecoding.)
 
## 6a, Given MP with clock freqeuncy 10MHz. WAP for 8254 PIT to generate a square wave of frequency 2KHz. 



## 6b, How cascading is done to handle more than 8 interrupts using 8259A PICs?Explain

[cascading 2018-fall 6a](https://github.com/Alson33/Notes_Old_question_solutions/blob/master/3rd-Semester/MP/old_questions/2018-fall.md)

## 6c, Write 8085 program for 8255 PPI to take input from input device connected to Port B and display the value of input on the output device connected to Port A of 8255 PPI

## 7

### a, Direct Memory Access Controller

- DMA (Direct Memory access) is an I/O technique commanly used for high speed data transfer. In DMA the MPU releases the control buses to a device called DMA controller.
- The DMA controller manages the data transfer between memory and peripheral devices bypassing the MPU. Simply it is a processor capabale of copying data from one location to another location in a high speed.
- Some of the comman DMAs are 8257 DMA controller, 8237 DMA controller, etc.
- 8237 is a programmable DMA controller used to transfer data from or to the system memory directly from external devices. _i.e memory to memory transfer is also possible_

### b, Different types of Assembler

[2019-Spring 7b](https://github.com/Alson33/Notes_Old_question_solutions/blob/master/3rd-Semester/MP/old_questions/2019-spring.md)

### c, 8085 flag register

- Flag register is a register used in microprocessors to store the status of the current operation performed in ALU. Some status are carry status, when the operation have carry.
- 8085 microprocessor have a 8-bit register for flag in which 3 bits are don't cares and 5-bits are `5 flipflops` used to `set or reset` a flag or status.

|S|Z|x|AC|x|P|x|C|
|--|--|--|--|--|--|--|--|

`[Where x = don't cares]`

- **Sign flag(S):** It is set if the result is a negative number.
- **Zero flag(Z):** It is set if the result of an operation is 0
- **Auxllary carry flag(AC):** It is set if the 4-bit operation yeilds a carry.
- **Parity flag(P):** It is set if there is even number of 1's in the result. 
- **Carry flag(C):** It is set if the operation has a carry.

In order to assemble (you should have nasm and ld, clang be installed):

Firstly Type in console:
clang -c main.c

It produces .o file

Then compile asm file:
nasm -f elf64 output.asm

Link them and assemble together:
clang main.o output.o -o main

Eventually we get file program
That can be run (on linux): ./main
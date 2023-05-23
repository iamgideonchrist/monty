# 0x19. C - Stacks, Queues - LIFO, FIFO

This project was done during **ALX SE Studies** at **ALX School**. The end game is to know about `monty`: an interpreter of Monty ByteCodes files, and just like **Python** it is a scripting language.

## Monty Language:
Monty is a language that aims to close the gap between scripting and programming languages. It contains specific instructions to manipulate data information (stacks or queues), where each instruction (*called opcode*) is sended per line. Files which contains Monty byte codes usually have the `.m` extension.

Example (`filemonty.m`):
```bash
$ cat filemonty.m
# Setting FIFO
queue
push 60
# Setting LIFO
stack
push 70
# Pushing elements to the stack
push 10
push 20
push 30
# Printing all elements
pall
push 40
push 50
pop
# Rotating the stack to the bottom
rotr
pall
rotl
$
```

## Apparatus
* Used `vi` as editor
* All files compiled & tested on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
$
```
```bash
$ ./monty [filename]
$
```

```bash
$ ./monty file.m
2
0
1
3
$
```
* Used Betty style for C
* The prototypes of all the functions are included in the header file called `monty.h`

## Features
### Opcodes
`monty` executes the following opcodes:

| Opcode | Description |
| -------- | ----------- |
| `push` | Pushes an element to the stack |
| `pall` | Prints all the values on the stack |
| `pint` | Prints the value at the top of the stack |
| `pop` | Removes the top element of the stack |
| `swap` | Swaps the top two elements of the stack |
| `queue` | Sets the format of the data to a queue (FIFO) |
| `stack` | Sets the format of the data to a stack (LIFO) |
| `nop` | Doesn't do anything |
| `add` | Adds the top two elements of the stack |
| `sub` | Subtracts the top element of the stack from the second top element of the stack |
| `mul` | Multiplies the second top element of the stack with the top element of the stack |
| `div` | Divides the second top element of the stack by the top element of the stack |
| `mod` | Computes the rest of the division of the second top element of the stack by the top element of the stack |
| `pchar` | Prints the char at the top of the stack |
| `pstr` | Prints the string starting at the top of the stack |
| `rotl` | Rotates the stack to the top |
| `rotr` | Rotates the stack to the bottom |

## Author:
### Gideon Selorm Attakpah: [GitHub](https://github.com/iamgideonchrist) - [Twitter](https://twitter.com/iamgideonchrist) - [Linkedin](https://www.linkedin.com/in/iamgideonchrist/)

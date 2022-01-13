# Monty - 0x19. C - Stacks, Queues - LIFO, FIFO

Monty gitis a scripting language that is first compiled into Monty bytecode like Python. It relies on a unique stack with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Requirements

General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- Don’t forget to push your header file
- All your header files should be include guarded
- You are expected to do the tasks in the order shown in the project

The monty program

- Usage: monty file
  - where file is the path to the file containing Monty byte code
- If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
- If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
where <file> is the name of the file
- If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
  - where is the line number where the instruction appears.
  - Line numbers always start at 1
- The monty program runs the bytecodes line by line and stop if either:
  - it executed properly every line of the file
  - it finds an error in the file
  - an error occured
- If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
- You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)
## Compile

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

$ ./monty <monty_file.m>
```

## Examples

A file named 00.m that contains the implementation of push and pall opcodes:

    $ cat bytecodes/00.m
     push 0
     push -1
     pall
     pall
    $ ./monty bytecodes/00.m
     -1
     0
     -1
     0

Implementing the pint opcode:

    $ cat bytecodes/06.m
     push 1
	 pint
	 push 2
	 pint
	 push 3
	 pint
	$ ./monty bytecodes/06.m
	 1
	 2
	 3

Implementing the pchar opcode:

    $ cat bytecodes/28.m
      push 72
      pchar
    $ ./monty bytecodes/28.m
      H

## Functions

| File               | Description                                                      |
| ------------------ | ---------------------------------------------------------------- |
| main.c             | Contains the call to system functions                            |
| op_functions1.c    | Contains the call to the function push, pall, pint and pop       |
| op_functions2.c    | Contains the call to the function swap, add, nop, sub and div    |
| op_functions3.c    | Contains the call to the function mul, mod, pchar, pstr and rotl |
| processing_input.c | Processes each line of the file introduced.                      |
| op_selector.c      | Selects function of opcode related to the line of monty.         |
| stack_length.c     | Determines the length of a stack.                                |
| strings_length.c   | Determines the strings length.                                   |

## Authors

- **Cesar Molina** - [mrcesar95](https://github.com/mrcesar95)

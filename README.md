# printf Project

## Overview
This project is a comprehensive exercise in the ALX Africa software engineering curriculum, designed to replicate the functionality of the standard C library function `printf`. This undertaking aims to provide an in-depth understanding of variadic functions, string formatting, and output management in C programming.

## Objectives
- To reimplement the `printf` function, capturing its essential behavior.
- To grasp the intricacies of handling variable arguments and format specifiers in C.
- To develop a deeper understanding of memory management, using functions like `malloc` and `free`.
- To write code adhering to specified compilation flags and coding styles.

## Authorized Functions and Macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

## Compilation
Code is compiled using:
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


## Example Usage
Here is an example of how the `_printf` function can be utilized:
```c
#include "main.h"

int main(void) {
    _printf("Custom printf: [%s]\n", "Hello, ALX Africa!");
    return 0;
}


## Features
- Basic functionality of `printf`, including format specifiers like `%c`, `%s`, `%d`, `%i`.
- Advanced format specifiers such as `%u`, `%o`, `%x`, `%X`.
- Handling edge cases and implementing robust error management.

## Technologies
- Language: C
- Compiler: GCC
- Style guidelines: Betty coding and documentation style

## Authors
- Oumouni Youssef
- Azeddine Chakir


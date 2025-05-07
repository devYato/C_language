# C Language Standard Libraries

The C standard library provides a collection of header files that offer essential functions for various programming tasks. Below is an overview of some commonly used libraries:

## `<stdio.h>` - Standard Input/Output
Provides functions for standard input and output operations, including:
- Reading from `stdin` (e.g., `scanf`, `gets`).
- Writing to `stdout` (e.g., `printf`, `puts`).
- File handling (e.g., `fopen`, `fclose`, `fread`, `fwrite`).

## `<stdlib.h>` - Standard Library Utilities
Includes utility functions for:
- Memory allocation (`malloc`, `calloc`, `realloc`, `free`).
- Program control (`exit`, `abort`).
- Random number generation (`rand`, `srand`).
- String-to-number conversions (`atoi`, `atof`, `strtol`, `strtod`).

## `<ctype.h>` - Character Handling
Defines functions for testing and manipulating characters, such as:
- Checking character types (`isalpha`, `isdigit`, `isspace`).
- Converting character case (`toupper`, `tolower`).

## `<time.h>` - Date and Time Utilities
Provides functions for working with dates and times, including:
- Retrieving the current time (`time`).
- Formatting time (`strftime`).
- Measuring elapsed time (`clock`).

## `<dos.h>` - MS-DOS Specific Functions
Contains functions for interacting with MS-DOS and BIOS interrupts, such as:
- Direct hardware access.
- Interrupt handling.

> **Note:** This library is platform-specific and primarily used in legacy systems.

## `<string.h>` - String Handling
Offers functions for manipulating strings and memory blocks, including:
- String copying and concatenation (`strcpy`, `strcat`).
- String comparison (`strcmp`, `strncmp`).
- Memory operations (`memcpy`, `memset`).

## `<math.h>` - Mathematical Functions
Provides a wide range of mathematical operations, such as:
- Trigonometric functions (`sin`, `cos`, `tan`).
- Exponential and logarithmic functions (`exp`, `log`).
- Power and square root functions (`pow`, `sqrt`).

---

For more detailed information, refer to the [C Standard Library Documentation](https://en.cppreference.com/w/c/header).

## `printf` Format Specifiers

The `printf` function in `<stdio.h>` allows formatted output using various format specifiers. Below is a table of commonly used specifiers:

| **Caractere** | **Impresso Como**                                                                 | **Tipo de Argumento**         |
|---------------|-----------------------------------------------------------------------------------|--------------------------------|
| `d`, `i`      | Número decimal                                                                    | `int`                         |
| `o`           | Número octal sem sinal (sem zero à esquerda)                                      | `int`                         |
| `x`, `X`      | Número hexadecimal sem sinal (sem um 0x ou 0X à esquerda), usando `abcdef` ou `ABCDEF` para 10,…, 15 | `int`                         |
| `u`           | Número decimal sem sinal                                                         | `int`                         |
| `c`           | Único caractere                                                                  | `int`                         |
| `s`           | Imprime caracteres da string até um `'\0'` ou o número de caracteres dado pela precisão | `char *`                      |
| `f`           | `[-] m.dddddd`, onde o número de `d`s é dado pela precisão (padrão 6)            | `double`                      |
| `e`, `E`      | `[-] m.dddddde+/-xx` ou `[-] m.ddddddE+/-xx`, onde o número de `d`s é dado pela precisão (padrão 6) | `double`                      |
| `g`, `G`      | Use `%e` ou `%E` se o expoente for menor que = 4 ou maior ou igual à precisão; caso contrário, use `%f`. | `double`                      |
| `p`           | Ponteiro                                                                         | `void *`                      |
| `%`           | Nenhum argumento impresso, imprime um `%`                                        | N/A                           |

> **Note:** Always ensure the format specifier matches the type of the argument to avoid undefined behavior.
#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int p_cha(va_list argz);
int p_string(va_list velles);
int _strlenth(char *str);
int _str_lenc(const char *string);
int print_perc(void);
int _printf(const char *format, ...);
int print_dig(va_list agrs);
int print_decs(va_list args);

#endif

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
int p_intg(va_list agrs);
int p_dg(va_list args);
int p_unsigned(va_list ls_args);
int _slen(char *str);
int _slenc(const char *str);
int psr(va_list ls_args);
int addn_HEX(unsigned int numbers);
int p_s_enc(va_list ls_args);
int addn_hex(unsigned long int numbers);

#endif

#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

#define NULL_STR "(null)"
#define BUFFER_SIZE 1024

/**
 * struct flags - struct for flags
 * @plus: flag for '+' char
 * @minus: flag for '-' char
 * @zero: flag for '0' char
 * @space: flag for ' ' char
 * @hash: flag for '#' char
 *
 * flag struct is to store flags for specifiers/identifiers
 * flag set to 1 when used, otherwise 0.
 */

typedef struct flags
{
	int plus;
	int minus;
	int zero;
	int space;
	int hash;
} flags_t;

/**
 * struct modifiers - struct for modifiers
 * @len_l: length modifier for the 'l' char
 * @len_h: length modifier for the 'h' char
 * @wdth: min width to print
 * @prec: precision of number
 *
 * modifier struct to store all modifiers for the specifier
 * modifier set to 1 whenused, otherwise 0.
 */
typedef struct modifiers
{
	int len_l;
	int len_h;
	int wdth;
	int prec;
} mod_t;

/**
 * struct format - converter printf
 * @ph: type char pointer of specifier
 * @func: function for conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*func)();
} convert;

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
int p__ptr(va_list var);
int p_percesio(void);
int HEX(va_list velo);
int p_octa(va_list var);
int p__ptr(va_list var);
int p_hex(va_list var);
int get_mody(char chr, mod_t *mody);
int p_bin(va_list var);
int flags(char chr, flags_t *flgs)

#endif

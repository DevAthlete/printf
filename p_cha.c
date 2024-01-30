#include "main.h"

/**
 * p_cha - prints a character.
 * @varg: variable argument.
 * Return: an integer value(1).
 */
int p_cha(va_list varg)
{
	char ca;

	ca = va_arg(v, int);
	_putchar(ca);
	return (1);
}

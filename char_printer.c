#include "main.h"

/**
 * cus_print_char - Custom function that print a character.
 * @arg: argument list.
 * Return: (always 1).
 */
int cus_print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	_putchar(character);
	return (1);
}


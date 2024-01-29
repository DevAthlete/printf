#include "main.h"

/**
 * print_strings - function that print string.
 * @velles: argument list.
 * Return: length of the string.
 */
int print_strings(va_list velles)
{
	char *str;
	int ind, leng;

	str = va_arg(velles, char *);
	if (str == NULL)
	{
		str = "(null)";
		leng = _strlen(str);
		for (ind = 0; ind < leng; ind++)
			_putchar(str[ind]);
		return (leng);
	}
	else
	{
		leng = _strlen(str);
		for (ind = 0; ind < leng; ind++)
			_putchar(str[ind]);
		return (leng);
	}
}

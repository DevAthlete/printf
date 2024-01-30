#include "main.h"

/**
 * psr - print string in reverse
 * @ls_args: 'va_arg' allocated printf args
 * Return: string
 */
int psr(va_list ls_args)
{

	char *str = va_arg(ls_args, char*);
	int x;
	int b = 0;

	if (str == NULL)
		str = "(null)";
	while (str[b] != '\0')
		b++;
	for (x = b - 1; x >= 0; x--)
		_putchar(str[x]);
	return (b);
}

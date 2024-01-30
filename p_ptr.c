#include "main.h"

/**
 * print_ptr - prints an hexadecimal number(address).
 * @var: argument variable.
 * Return: counter.
 */
int p__ptr(va_list var)
{
	void *p;
	char *s = "(nil)";
	long int c;
	int b;
	int a;

	p = va_arg(var, void*);
	if (p == NULL)
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			_putchar(s[a]);
		}
		return (a);
	}

	c = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = addn_hex(c);
	return (b + 2);
}

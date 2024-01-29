#include "main.h"
/**
 * print_dig - print digits
 * @agrs: argument print
 * Return: integer
 */
int print_dig(va_list agrs)
{
	int num = va_arg(agrs, int);
	int numr, ls = num % 10, dig, exp = 1;
	int  d = 1;

	num = num / 10;
	numr = num;

	if (ls < 0)
	{
		_putchar('-');
		numr = -numr;
		num = -num;
		ls = -ls;
		d++;
	}
	if (numr > 0)
	{
		while (numr / 10 != 0)
		{
			exp = exp * 10;
			numr = numr / 10;
		}
		numr = num;
		while (exp > 0)
		{
			dig = numr / exp;
			_putchar(dig + '0');
			numr = numr - (dig * exp);
			exp = exp / 10;
			d++;
		}
	}
	_putchar(ls + '0');

	return (d);
}

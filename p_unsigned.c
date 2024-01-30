#include "main.h"
/**
 * p_unsigned - prints integer
 * @ls_args: argument print
 * Return: integer
 */
int p_unsigned(va_list ls_args)
{
	unsigned int num = va_arg(ls_args, unsigned int);
	int n, end = num % 10, digit, exp = 1;
	int  a = 1;

	num = num / 10;
	n = num;

	if (end < 0)
	{
		_putchar('-');
		n = -n;
		num = -num;
		end = end;
		a++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			exp = exp * 10;
			n = n / 10;
		}
		n = num;
		while (exp > 0)
		{
			digit = n / exp;
			_putchar(digit + '0');
			n = n - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(end + '0');

	return (a);
}

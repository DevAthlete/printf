#include "main.h"
/**
 * p_intg - prints integer to base 10
 * @i_args: vars to print
 * Return: integer(int)
 */
int p_intg(va_list i_args)
{
	int n = va_arg(i_args, int);
	int num, last = n % 10, intf, exp = 1;
	int  a = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			intf = num / exp;
			_putchar(intf + '0');
			num = num - (intf * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}

/**
 * p_dg - prints a decimal int
 * @d_args: var argument
 * Return: integer(digit)
 */

int p_dg(va_list d_args)
{
	int n = va_arg(d_args, int);
	int num, last = n % 10, dg;
	int  a = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dg = num / exp;
			_putchar(dg + '0');
			num = num - (dg * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}

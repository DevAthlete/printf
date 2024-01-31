#include "main.h"
/**
 * _printf - function that chooses the correct function to print out.
 * @format: the specifier/identifier.
 * Return: count.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", p_string}, {"%c", p_cha},
		{"%%", p_percesio},
		{"%i", p_intg}, {"%d", p_dg}, {"%r", psr},
		{"%R", p_s_enc}, {"%b", p_bin},
		{"%u", p_unsigned},
		{"%o", p_octa}, {"%x", p_hex}, {"%X", HEX},
		{"%S", p_str_exl}, {"%p", p__ptr}
	};

	va_list list_args;
	int a = 0, b, count = 0;

	va_start(list_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (p[b].ph[0] == format[a] && p[b].ph[1] == format[a + 1])
			{
				count += p[b].func(list_args);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		count++;
		a++;
	}
	va_end(list_args);
	return (count);
}

#include "main.h"
/**
 * p_str_exl - print exclusuive string chars.
 * @vgs: argument.
 * Return: int.
 */

int p_str_exl(va_list vgs)
{
	char *str;
	int al, l = 0;
	int vox;

	str = va_arg(vgs, char *);
	if (str == NULL)
		str = "(null)";
	for (al = 0; str[al] != '\0'; al++)
	{
		if (str[al] < 32 || str[al] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			vox = str[al];
			if (vox < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + addn_HEX(vox);
		}
		else
		{
			_putchar(str[al]);
			l++;
		}
	}
	return (l);
}

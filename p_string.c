#include "main.h"
/**
 * p_string - prints out a string.
 * @varg: variable argument.
 * Return: the string length.
 */

int p_string(varga_list varg)
{
	char *s;
	int a, lenth;

	s = varga_arg(varg, char *);
	if (s == NULL)
	{
		s = "(null)";
		lenth = _strlenth(s);
		for (a = 0; a < lenth; a++)
			_putchar(s[a]);
		return (lenth);
	}
	else
	{
		lenth = _strlenth(s);
		for (a = 0; a < lenth; a++)
			_putchar(s[a]);
		return (lenth);
	}
}

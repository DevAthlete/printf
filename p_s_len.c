#include "main.h"

/**
 * _slen - finds strings length.
 * @str: string
 * Return: integer.
 */

int _slen(char *str)
{
	int z;

	for (z = 0; str[z] != 0; z++)
		;
	return (z);

}

/**
 * _slenc - finds length string only for constant chars
 * @str: string
 * Return: int
 */

int _slenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

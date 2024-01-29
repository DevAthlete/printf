#include "main.h"

/**
 * _str_len - finds lenghts of string.
 * @s: string
 * Return: integer.
 */

int _str_len(char *str)
{
	int chx;

	for (chx = 0; str[chx] != 0; chx++)
		;
	return (chx);

}

/**
 * _str_lenc - finds length of string for constant characters
 * @s: string
 * Return: integer
 */

int _str_lenc(const char *string)
{
	int chx;

	for (chx = 0; string[chx] != 0; chx++)
		;
	return (chx);
}

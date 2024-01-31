#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @s: string
 * Return: an integer value.
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);

}

/**
 * _strlenc - finds the length of string but for constant chars
 * @s: string
 * Return: an int value
 */

int _strlenc(const char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}

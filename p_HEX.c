#include "main.h"

/**
 * HEX - prints hexadecimal numbers.
 * @velo: argument.
 * Return: cnt.
 */
int HEX(va_list velo)
{
	int alo;
	int *arro;
	int cnt = 0;
	unsigned int numbs = va_arg(velo, unsigned int);
	unsigned int rands = numbs;

	while (numbs / 16 != 0)
	{
		numbs /= 16;
		cnt++;
	}
	cnt++;
	arro = malloc(cnt * sizeof(int));

	for (alo = 0; alo < cnt; alo++)
	{
		arro[alo] = rands % 16;
		rands /= 16;
	}
	for (alo = cnt - 1; alo >= 0; alo--)
	{
		if (arro[alo] > 9)
			arro[alo] = arro[alo] + 7;
		_putchar(arro[alo] + '0');
	}
	free(arro);
	return (cnt);
}

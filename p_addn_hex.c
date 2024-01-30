#include "main.h"

/**
 * addn_hex - prints hexadecimal numbers.
 * @numbers: argument.
 * Return: cnt.
 */
int addn_hex(unsigned long int numbers)
{
	long int ab;
	long int *arro;
	long int cnt = 0;
	unsigned long int rands = numbers;

	while (numbers / 16 != 0)
	{
		numbers /= 16;
		cnt++;
	}
	cnt++;
	arro = malloc(cnt * sizeof(long int));

	for (ab = 0; ab < cnt; ab++)
	{
		arro[ab] = rands % 16;
		rands = rands / 16;
	}
	for (ab = cnt - 1; ab >= 0; ab--)
	{
		if (arro[ab] > 9)
			arro[ab] = arro[ab] + 39;
		_putchar(arro[ab] + '0');
	}
	free(arro);
	return (cnt);
}

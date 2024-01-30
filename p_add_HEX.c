#include "main.h"

/**
 * addn_HEX - prints hexadecimal numbers.
 * @numbers: sets numbers to be print.
 * Return: count.
 */
int addn_HEX(unsigned int numbers)
{
int arro;
	int *ar;
	int count = 0;
	unsigned int rands = numbers;

	while (numbers / 16 != 0)
	{
		numbers /= 16;
		count++;
	}
	count++;
	ar = malloc(count * sizeof(int));

	for (arro = 0; arro < count; arro++)
	{
		ar[arro] = rands % 16;
		rands /= 16;
	}
	for (arro = count - 1; arro >= 0; arro--)
	{
		if (ar[arro] > 9)
			ar[arro] = ar[arro] + 7;
		_putchar(ar[arro] + '0');
	}
	free(ar);
	return (count);
}

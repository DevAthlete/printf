#include "main.h"

/**
 * p_hex - prints a hexadecimal number.
 * @var: argument variable.
 * Return: counter.
 */
int p_hex(va_list var)
{
	int a;
	int *arr;
	int counter = 0;
	unsigned int numb = va_arg(var, unsigned int);
	unsigned int rand = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		arr[a] = rand % 16;
		rand /= 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 39;
		_putchar(arr[a] + '0');
	}
	free(arr);
	return (counter);
}

#include "main.h"

/**
 * p_octa - prints octal num.
 * @var: argument variable.
 * Return: counter.
 */
int p_octa(va_list var)
{
	int a;
	int *arr;
	int counter = 0;
	unsigned int numb = va_arg(var, unsigned int);
	unsigned int rand = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		arr[a] = rand % 8;
		rand /= 8;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		_putchar(arr[a] + '0');
	}
	free(arr);
	return (counter);
}

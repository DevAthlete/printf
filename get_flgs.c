#include "main.h"
/**
 * flags - function to check specified flags
 * @chr: flag
 * @flgs: pointer
 *
 * Return: 1 flag is set, 0 if elsewhere
 */
int flags(char chr, flags_t *flgs)
{
	switch (chr)

	{
		case '+':
			flgs->plus = 1;
			return (1);
		case '-':
			flgs->minus = 1;
			return (1);
		case '0':
			flgs->zero = 1;
			return (1);
		case ' ':
			flgs->space = 1;
			return (1);
		case '#':
			flgs->hash = 1;
			return (1);
		default:
			return (0);
	}
}

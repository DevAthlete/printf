#include "main.h"
/**
 * p_s_enc -  string rot13
 * @ls_args: arguments
 * Return: cunt
 *
 */
int p_s_enc(va_list ls_args)
{
	int ab, cd, cnt = 0;
	int e = 0;
	char *str = va_arg(ls_args, char*);
	char all[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bll[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (ab = 0; str[ab]; ab++)
	{
		e = 0;
		for (cd = 0; all[cd] && !e; cd++)
		{
			if (str[ab] == all[cd])
			{
				_putchar(bll[cd]);
				cnt++;
				e = 1;
			}
		}
		if (!e)
		{
			_putchar(str[ab]);
			cnt++;
		}
	}
	return (cnt);
}

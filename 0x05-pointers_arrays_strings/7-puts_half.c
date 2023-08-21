#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int start = 0;
	int i = 0;

	len = _strlen(str);
	start = len / 2;
	if (len % 2 != 0)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

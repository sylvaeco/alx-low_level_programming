#include "main.h"

/**
* puts_half - This prints a string.
* @str: Variable string
*
* Return: Always 0 for succes
*/

void puts_half(char *str)
{
	int length = 0, n;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (n = length / 2 ; n < length ; n++)
		{
			_putchar(*(str + n));
		}
	}
	else
	{
		for (n = (length - (length - 1) / 2) ; n < length ; n++)
		{
			_putchar(*(str + n));
		}
	}
	_putchar(10);
}

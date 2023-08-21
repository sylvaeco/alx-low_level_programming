#include "main.h"

/**
 * print_rev - prints a string in reverse followe`d by a new line.
 *
 * @s: The input string to be printed in reverse.
 */

void print_rev(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(*(s - i - 1));
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_rev - prints a string in reverse followe`d by a new line.
 *
 * @s: The input string to be printed in reverse.
 */

void print_rev(char *s)
{
	int len = 0;
	
	for (len = 0; *(s + len) != '\0'; len++)
	{
	}
	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(*(s - i - 1));
	}
	_putchar('\n');
}

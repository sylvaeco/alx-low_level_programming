#include "main.h"

/**
 * print_line - write a function that draws a straight line in the terminal.
 * @n: Integer amount of _
 *
 */


void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

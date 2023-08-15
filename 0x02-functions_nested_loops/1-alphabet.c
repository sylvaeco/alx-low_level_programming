#include "main.h"

/**
 * main - Entry point
 *
 * Description: this code uses the _putchar function to display/print
 * its contents
 *
 * Return: Always 0 (Success), this will not be invoked here
 *
 *
 */


void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

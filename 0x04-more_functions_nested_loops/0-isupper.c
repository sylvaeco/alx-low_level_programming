#include "main.c"
#include <stdio.h>

/**
 * main - checks the code for uppercase
 *
 * Return: Always 0 for success
 */
int _isupper(int c )
{
	char c;

	c = 'A';
	if (_isupper(c))
		_putchar('1');
	else
		_putchar('0');
	return (0);
}

#include "main.h"

/**
 * _puts - This returns a string followed by a 
 * new line
 *
 * @str: This recieves the input to be printed out
 *
 * Return: Always void
 */

void _puts(char *str)
{
	while (*str !+ '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

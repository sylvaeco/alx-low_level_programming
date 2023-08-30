#include "main.h"

/**
 * _puts_recursion - This prints a string.
 * @s: This is the string literal to be printed.
 *
 * Return: This returns nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

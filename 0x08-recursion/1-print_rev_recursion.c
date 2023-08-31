#include "main.h"
/**
 * _print_rev_recursion - This prints a string in reverse.
 * @s: This is the string to reverse.
 *
 * Return: Returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}	

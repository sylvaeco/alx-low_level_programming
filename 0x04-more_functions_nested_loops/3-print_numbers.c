#include "main.h"

/**
* print_numbers - This function prints the integers 0 through 9
* Return: Always returns void.
*/

void print_numbers(void)
{
	char n;
	
	for (n = '0'; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
}

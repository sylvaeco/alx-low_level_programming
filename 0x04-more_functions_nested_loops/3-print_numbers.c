nclude "main.h"

/**
* print_numbers - This function that prints the number, from 0 to 9.
* Return: Always void
*/
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}

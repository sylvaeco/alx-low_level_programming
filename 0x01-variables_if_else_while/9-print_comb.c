#include <stdio.h>

/**
* main - Entry point
*
* Return: this always return 0 for code success
*
* The putchar was used instead of printf.
*
*/

int main(void)
{
	int x;
	for (x = 0; x < 10; x++)
		putchar(x + '0');
	if (x != 9)
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}

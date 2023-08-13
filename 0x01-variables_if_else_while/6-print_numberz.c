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
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

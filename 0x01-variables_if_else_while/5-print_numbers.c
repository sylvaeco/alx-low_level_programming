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
	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

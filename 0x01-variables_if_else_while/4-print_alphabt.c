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

	for (i = 97; i <= 122; i++)
		if (i != 101 && i != 113)
			putchar(i);
	putchar('\n');
	return (0);
}


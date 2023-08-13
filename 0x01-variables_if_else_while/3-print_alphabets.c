#include <stdio.h>

/**
* main - Entry point
*
* Return: this always return 0 for code success
*
* The putchar was used instead of printf
*
*/

int main(void)
{
	int i;

	int e;
	for (i = 97; i <= 122; i++)
	putchar(i);
	for (e = 65; e <= 90; e++)
	putchar(e);
	putchar('\n');
	return (0);
}

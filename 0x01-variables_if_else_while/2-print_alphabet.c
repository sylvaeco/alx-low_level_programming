#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * return: Always runs when the code succeed.
 *
 * putchar was used instead of printf
 */


int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	putchar(i);
	putchar('\n');
	return (0);
}


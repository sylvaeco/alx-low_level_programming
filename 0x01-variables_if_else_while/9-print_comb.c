nclude <stdio.h>

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
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}

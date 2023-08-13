#include <stdio.h>

/**
* main - Entry point
*
* Description: The main function is the first function that
* is executed bin the program when the execution is started
*
* Return: returns 0 (int value)
*/

int main(void)

{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				if (x != y && x != z && z != y && x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x == 7 && y == 8 && z == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
* main - This is the entry point
*
* Description: The main function is the first function executed
* in the program when the is run
*
* Return: returns 0 for code success
*/

int main(void)
{
	int i, j, k, m;
	
	for (i = 48; i < 58; i++) 
	{
		for (j = 48; j < 58; j++) 
		{
			for (k = 48; k < 58; k++) 
			{
				for (m = 48; m < 58; m++) 
				{
					int a = (i * 10) + j;
					int b = (k * 10) + m;
					if (k > i || (k == i && m > j)) 
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(m);
						if (i == 57 && j == 56 && k == 57 && m == 57) 
						{
							continue;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

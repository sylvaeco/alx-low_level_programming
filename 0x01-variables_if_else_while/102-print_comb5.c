#include<stdio.h>

/**
* main - This is the entry point
*
* Description: The main function is the first function executed
* in the program when the code is ran
*
* Return: returns 0 for code success
*/

int main(void)
{
	int a, b, c, j, k, m;

	for (c = 48; c < 58; c++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (m = 48; m < 58; m++)
				{
					a = (c * 10) + j;
					b = (k * 10) + m;
					if (b > a)
					{
						putchar(c);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(m);
						if (c == '9' && j == '8' && k == '9' && m == '9')
							continue;
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

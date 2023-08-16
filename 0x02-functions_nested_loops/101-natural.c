#include <stdio.h>
/**
* main - This is the entry point of the function
* that prints natural numbers below 1024
* that are multiples of 3 or 5
*
* Return: This return success enoted by 0
* if the code runs successfully
*
*
*/

int main(void)
{
	int i, x;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			x += i;
		}
	}
	printf("%d\n", x);
	return (0);
}

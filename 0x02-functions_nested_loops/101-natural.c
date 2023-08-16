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
	int a, sum;
	for (int i = a; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
/**
 * print_array - this prints n elements of array of integer
 *
 * @a: Variable integer
 *
 * @n: Variable input
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

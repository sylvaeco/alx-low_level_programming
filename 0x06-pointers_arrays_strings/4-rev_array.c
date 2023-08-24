#include "main.h"
/**
 * reverse_array - This reverses the inputs of the arrays of ints
 * @a: This is the arrays of inputs to be reverse
 * @n: This is the number of data content of the array
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * swap_int - This swaps the value of the two declared variables
 *
 * @a: This is the first variable.
 *
 * @b: This iis the second variable.
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - The entry point
 *
 * @min: Minimal number
 * @max: Maximal number
 *
 * Return: This returns a pointer to the array
 */

int *array_range(int min, int max)
{
	int a;
	int *mmx;

	if (min > max)
	{
		return (NULL);
	}
	mmx = malloc(sizeof(int) * (max - min + 1));
	if (mmx == 0)
	{
		return (NULL);
	}
	for (a = 0; a <= max - min; a++)
	{
		mmx[a] = min + a;
	}
	return (mmx);
}

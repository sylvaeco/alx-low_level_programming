#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - The entry point
 * @nmemb: Number of elements
 * @size: The size of the array
 *
 * Return: This returns a pointer to the array's memory address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	point = malloc(nmemb * size);
	if (point == 0)

	{
		return (NULL);
	}
	memset(point, 0, nmemb * size);
	return (point);
}

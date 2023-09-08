#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *
 * @b: size of block
 *
 * Return: returns a pointer to the memory address
 */

void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This is the entry point
 *
 * @b: The size of block
 *
 * Return: This returns a pointer to the memory address
 */
void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (point = NULL)
	{
		exit(98);
	}
	return (point);
}	

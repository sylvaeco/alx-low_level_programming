#include "main.h"

/**
 * _memset - This fills the first n bytes of memory pointed to by s with b.
 * @s: This is the pointer to the memory area
 * @b: This is the constant byte that fills the memory
 * Return: This returns the total number of bytes filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

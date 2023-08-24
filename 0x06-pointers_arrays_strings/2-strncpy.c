#include "main.h"

/**
 * _strncpy -This copies  a string  from scr to dest using n bytes
 * @dest: The destinantion buffer
 * @src: The string to be appended
 * @n: the maximum number of bytes to use for src
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int *result = dest;
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (result);
}

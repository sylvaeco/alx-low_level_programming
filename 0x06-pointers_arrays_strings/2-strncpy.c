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
	int d = 0;

	while (src[d] != '\0' && d < n)
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	
	return (dest);
}

#include "main.h"

/**
* _strncat - Concatenates two strings using at most n bytes from src.
* @dest: The destination string.
* @src: The source string to be appended.
* @n: The maximum number of bytes to use from src.
*
* Return: string of characters.
*/

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int i = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[d] = src[i];
		d++;
		i++;
	}

	dest[d] = '\0';
	return (dest);
}

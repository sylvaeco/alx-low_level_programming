#include "main.h"

/**
 * _strcat - This concatenate the value of two strings
 *
 * @dest: This is the first variable
 *
 * @src: This is the second variable
 *
 * Return: this returns 0 for success.
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int i = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0')
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	
	dest[d] = '\0';
	return (dest);
}

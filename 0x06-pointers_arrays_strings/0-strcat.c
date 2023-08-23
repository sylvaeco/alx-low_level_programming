#include "main.h"

/**
 * *_strcat - This concatenate the value of two strings
 *
 * @dest: This is the first variable
 *
 * @src: The second variable
 *
 * Return: this returns 0 for success.
 */

char *_strncat(char *dest, char *src, int m)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0' && i < m)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

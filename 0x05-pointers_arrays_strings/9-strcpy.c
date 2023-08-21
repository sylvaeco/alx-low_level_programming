#include "main.h"
/**
* *_strcpy - This function that copies the string pointed to by src.
* @dest: array name
* @src: elements of the array.
*
* Return: Always void.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

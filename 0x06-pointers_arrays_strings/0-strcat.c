#include "main.h"
#include <stdio.h>
/**
 * *_strcat - This concatenate the value of two strings
 *
 * @dest: This is the first variable
 *
 * @src: The second variable
 *
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;
	
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return result;
}

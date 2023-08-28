#include "main.h"
#include <stdio.h>

/**
* _strchr - This locates the first occurrence of a char in a string.
* @s: The array pointer or input string.
* @c: The character to be located.
*
* Return: A pointer to the first occurrence of c in s, or Null if not found.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}	
	if (*s == c)
	{
		return (s);
	}		

	return (NULL);
}

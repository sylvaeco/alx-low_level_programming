#include "main.h"
#include <stdlib.h>

/**
* _strpbrk - This searches a string for any of a set of bytes.
* @s: The input string.
* @accept: The set of acceptable bytes.
*
* Return: A pointer to the first matching byte in s, or NULL if not found.
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *i = accept;

		while (*i != '\0')
		{
			if (*s == *i)
			{
				return (s);
			}
			i++;
		}
		s++;
	}

	return (NULL);
}

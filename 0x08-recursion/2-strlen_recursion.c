#include "main.h"

/**
 * _strlen_recursion - This returns the length of a string
 * @s: This is the string to be whose length will be returned
 *
 * Return: Returns nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

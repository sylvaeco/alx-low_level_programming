#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the function of a string.
 *
 * @s: This is the variable value to be evaluated
 *
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

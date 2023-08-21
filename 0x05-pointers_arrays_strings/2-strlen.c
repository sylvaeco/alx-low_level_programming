#include "main.h"
#include <stdio.h>

/**
 * _strlen returns the length of a string
 *
 * @s: This is the variable value to be evaluated
 *
 * Return: Returns 0 for success
 *
 */

int _strlen(char *s)
{
	int len;
	len = 0;

	while (*s != "\0")
	{
		len++;
		s++;
	}
	return (0);
}

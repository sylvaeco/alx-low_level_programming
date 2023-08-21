#include "main.h"
#include <stdio.h>
/**
* _strlen - returns the function of a string.
* @s: value to evaluate
* Return: Always void.
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

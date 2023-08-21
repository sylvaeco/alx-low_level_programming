#include "main.h"
#include <stdio.h>

/**
* rev_string - This reverses the characters in a string.
* @s: The input string to be reversed
*/
void rev_string(char *s)
{
	int a, b;
	char *end_ptr, ch;

	end_ptr = s;

	for (a = 0 ; *end_ptr != '\0' ; a++)
	{
		end_ptr++;
	}
	end_ptr = end_ptr - 1;
	for (b = 0; b < a / 2 ; b++)
	{
		ch = *end_ptr;
		*end_ptr = *(s + b);
		*(s + b) = ch;
		end_ptr--;
	}
}

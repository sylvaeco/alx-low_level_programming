#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 */

void rev_string(char *s)
{
	int len = 0;
	char tmp;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (int i = 0; i < len / 2; i++)
	{
		tmp = *(s - i - 1);
		*(s - i - 1) = *(s - len + i);
		*(s - len + i) = tmp;
	}
}

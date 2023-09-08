#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - The entry point
 *
 * @s1: string one
 * @s2: string two
 * @n: The number of bytes
 *
 * Return: return a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, result_len = 0;
	char *result, *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result_len = s1_len + n;
	result = (char *)malloc((result_len + 1) * sizeof(char));

	if (result == NULL)
		return NULL;

	p = result;

	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}

	while (n > 0)
	{
		*p = *s2;
		p++;
		s2++;
		n--;
	}

	*p = '\0';

	return (result);
}

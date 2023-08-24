#include "main.h"
/**
* string_toupper - Changes all lowercase string letters to uppercase.
* @str: This is e input string.
* Return: A pointer to the modified string.
*/
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		str++;
	}
	return (str);
}

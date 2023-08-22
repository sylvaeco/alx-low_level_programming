#include "main.h"

/**
* _atoi - This converts a string to an integer
* @s: string to convert
*
* Return: value of integer
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int found_number = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s == '+')
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_number = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_number)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}

#include "main.h"

/**
 * factorial - This calculates the factorial of a number
 * @n: The number subject to the factorial function
 *
 * Return: This returns either a negative or positve
 * integer value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial (n -1));
}

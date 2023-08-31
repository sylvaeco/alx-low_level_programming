#include "main.h"

/**
 * _pow_recursion - This returns the value of x raised to the power
 * of y.
 * @x: The value to be raised
 * @y: The multiplier
 *
 * Return: The multiplied value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
* print_triangle - prints a triangle
* @size: takes in an integer for size of triangle
*/

void print_triangle(int size)
{
	int row, col, k;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (col = size - row; col > 1; col--)
			_putchar(' ');
		for (k = row + col; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}

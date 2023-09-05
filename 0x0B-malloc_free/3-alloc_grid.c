#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This returns a pointer to a 2 dimensional array of integers.
 * @width: This is the width of the array.
 * @height: The height of the array.
 *
 * Return: Pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grido;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grido = malloc(height * sizeof(int *));
	if (grido == NULL)
	{
		free(grido);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grido[i] = malloc(width * sizeof(int));
		if (grido[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grido[i]);
			free(grido);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grido[i][j] = 0;

	return (grido);
}

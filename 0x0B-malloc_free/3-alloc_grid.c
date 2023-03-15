#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - two diamensional array
 * @width:width of an array
 * @height: height of an array
 * Return: NULL on failure
 * width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

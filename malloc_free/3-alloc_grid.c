#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function to allocate matrix
 * @width: columns
 * @height: height
 * Return: null or a pointer to matrix
 */
int **alloc_grid(int width, int height)
{
	int **my_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	my_array = malloc(sizeof(int *) * height);
	if (my_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		my_array[i] = malloc(sizeof(int) * width);
		if (my_array[i] == NULL)
		{
			while (i >= 0)
			{
				free(my_array[i]);
				i--;
			}
			free(my_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			my_array[i][j] = 0;
		}
	}
	return (my_array);
}

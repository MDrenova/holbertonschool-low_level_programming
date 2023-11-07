#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function to allocate matrix
 * @width: columns
 * @height: height
 * Return: null or a pointer to matrix
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}

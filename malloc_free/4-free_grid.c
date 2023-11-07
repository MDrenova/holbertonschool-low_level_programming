#include <stdlib.h>
#include <string.h>
/**
 * free_grid - function to allocate matrix
 * @grid: matrix
 * @height: height
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

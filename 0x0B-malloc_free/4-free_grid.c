#include "main.h"

 /**
  * free_grid - removing memory allocated
  * @grid: grid to be free
  * @height: parameter for height
  * Return: 0
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

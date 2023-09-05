#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that concatenates two strings
 * @grid: parmater for grid
 * @height: parameter for height
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

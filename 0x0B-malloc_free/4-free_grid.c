#include <stdlib.h>
#include "main.h"

/**
 * free_grid - it frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 *
 * @grid: checks input of the function.
 * @height: checks input of the function.
 *
 * Return: void.
*/

void free_grid(int **grid, int height)
{
int count;

for (count = 0; count < height; count++)
{
free(grid[count]);
}

free(grid);
}

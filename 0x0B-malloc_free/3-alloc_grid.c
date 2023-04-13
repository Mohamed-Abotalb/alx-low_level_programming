#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - it returns a pointer to a 2 dimensional array of integers.
 *
 * @width: checks input of the function.
 * @height: checks input of the function.
 *
 * Return: The function should return a pointer to the 2d array or NULL.
*/

int **alloc_grid(int width, int height)
{
int **tab, row, column;

tab = malloc(sizeof(*tab) * height);

if (width <= 0 || height <= 0 || tab == 0)
{
return (NULL);
}

else
{
for (row = 0; row < height; row++)
{
tab[row] = malloc(sizeof(**tab) * width);

if (tab[row] == 0)
{

while (row--)
{
free(tab[row]);
}

free(tab);
return (NULL);
}

for (column = 0; column < width; column++)
{
tab[row][column] = 0;
}

}

}

return (tab);
}

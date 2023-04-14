#include <stdlib.h>
#include "main.h"

/**
 * *array_range - it it creates an array of integers.
 *
 * @min: checks input of the function.
 * @max: checks input of the function.
 *
 * Return: The function should return the pointer to the created array.
*/

int *array_range(int min, int max)
{
int length, index, *ptr;

if (min > max)
return (NULL);

length = max - min + 1;

ptr = malloc(sizeof(int) * length);

if (ptr == 0)
return (NULL);

for (index = 0; index < length; index++)
ptr[index] = min++;

return (ptr);
}

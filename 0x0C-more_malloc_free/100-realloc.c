#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - it it creates an array of integers.
 *
 * @ptr: checks input of the function.
 * @old_size: checks input of the function.
 * @new_size: checks input of the function.
 *
 * Return: NULL if new_size = 0 and ptr isn't NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int index;

if (old_size == new_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
p = malloc(new_size);

if (p == 0)
return (NULL);

return (p);
}

if (new_size > old_size)
{
p = malloc(new_size);

if (p == 0)
return (NULL);

for (index = 0; index < old_size && index < new_size; index++)
*((char *)p + index) = *((char *)ptr + index);

free(ptr);
}

return (p);
}

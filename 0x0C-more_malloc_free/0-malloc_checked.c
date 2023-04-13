#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - it allocates memory using malloc and returns a pointer
 * to the allocated memory.
 *
 * @b: checks input of the function.
 *
 * Return: The function should return the pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
int *mem = malloc(b);

if (mem == 0)
{
exit(98);
}

return (mem);
}

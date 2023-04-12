#include "main.h"

/**
 * *create_array - it creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: checks input of the function.
 * @c: checks input of the function.
 *
 * Return: The function should return a pointer to the array or NULL.
*/

char *create_array(unsigned int size, char c)
{
char *ptr = malloc(size);

if (size == 0 || ptr == 0)
{
return (0);
}

while (size--)
{
ptr[size] = c;
}

return (ptr);
}

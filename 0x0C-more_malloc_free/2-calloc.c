#include <stdlib.h>
#include "main.h"

/**
 * _memset - it fills memory with a constant byte.
 *
 * @s: checks input of the function.
 * @b: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: The function should return the pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int count;
char *ptr = s;

for (count = 0; n > 0; count++, n--)
{
ptr[count] = b;
}

return (ptr);
}

/**
 * *_calloc - it allocates memory for an array, using "malloc".
 *
 * @nmemb: checks input of the function.
 * @size: checks input of the function.
 *
 * Return: The function should return the pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;

if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(sizeof(int) * nmemb);

if (mem == 0)
return (NULL);

return (_memset(mem, 0, sizeof(int) * nmemb));
}

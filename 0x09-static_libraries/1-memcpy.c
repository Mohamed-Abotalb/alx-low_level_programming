#include "main.h"

/**
 * _memcpy - it copies memory area.
 *
 * @dest: checks input of the function.
 * @src: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;

for (count = 0; count < n; count++)
{
dest[count] = src[count];
}

return (dest);
}

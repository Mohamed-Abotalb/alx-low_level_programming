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

for (count = 0; n > 0; count++, n--)
{
s[count] = b;
}

return (s);
}

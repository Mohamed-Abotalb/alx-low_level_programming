#include "main.h"

/**
 * _strncpy - it copies a string.
 *
 * @dest: checks input of the function.
 * @src: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int count;

for (count = 0; count < n && src[count] != '\0'; count++)
{
dest[count] = src[count];
}

dest[count + 1] = '\0';

return (dest);
}

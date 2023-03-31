#include "main.h"

/**
 * _strncat - it concatenates two strings but it will use at
 * most n bytes from the second string.
 *
 * @dest: checks input of the function.
 * @src: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int destCounter, srcCounter;

destCounter = 0;

/* Get the length of dest */
while (dest[destCounter] != '\0')
{
destCounter++;
}

for (srcCounter = 0; srcCounter < n && src[srcCounter] != '\0'; srcCounter++)
{
dest[destCounter] = src[srcCounter];
destCounter++;
}
dest[destCounter + srcCounter] = '\0';

return (dest);
}

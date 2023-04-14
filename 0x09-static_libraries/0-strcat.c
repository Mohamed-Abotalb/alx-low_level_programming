#include "main.h"

/**
 * _strcat - it concatenates two strings.
 *
 * @dest: checks input of the function.
 * @src: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *_strcat(char *dest, char *src)
{
int destCounter, srcCounter;

destCounter = 0;

/* Get the length of dest */
while (dest[destCounter] != '\0')
{
destCounter++;
}

for (srcCounter = 0; src[srcCounter] != '\0'; srcCounter++)
{
dest[destCounter] = src[srcCounter];
destCounter++;
}

return (dest);
}

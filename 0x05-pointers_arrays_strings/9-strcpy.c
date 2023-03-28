#include "main.h"

/**
 * *_strcpy - it copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: checks input of the function.
 * @src: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int count = -1;

do {
count++;
dest[count] = src[count];
} while (src[count] != '\0');

return (dest);
}

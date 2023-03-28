#include "main.h"

/**
 * _strlen - it returns the length of a string.
 *
 * @s: checks input of the function.
 *
 * Return: The function should return the length of the string (success).
*/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

#include "main.h"

/**
 * _strlen_recursion - it returns the length of a string.
 *
 * @s: checks input of the function.
 *
 * Return: The function should return the length of the string.
*/

int _strlen_recursion(char *s)
{
int length = 0;
if (*s > '\0')
{
length += _strlen_recursion(s + 1) + 1;
}
return (length);
}

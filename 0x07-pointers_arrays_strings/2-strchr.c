#include "main.h"

/**
 * _strchr - it locates a character in a string.
 *
 * @s: checks input of the function.
 * @c: checks input of the function.
 *
 * Return: The function should return the first occurrence of the character.
*/

char *_strchr(char *s, char c)
{
int count;

for (count = 0; s[count] >= '\0'; count++)
{

if (s[count] == c)
{
return (s + count);
}

}

return ('\0');
}

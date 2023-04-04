#include "main.h"

/**
 * _strpbrk - it locates a substring.
 *
 * @haystack: checks input of the function.
 * @needle: checks input of the function.
 *
 * Return: The function should return the pointer to the beginning of the located substring.
*/

char *_strstr(char *haystack, char *needle)
{
int count;

for (count = 0; haystack[count] >= '\0'; count++)
{

if (s[count] == needle)
{
return (s + count);
}

}

return ('\0');
}
#include "main.h"

/**
 * *_strstr - it locates a substring.
 *
 * @haystack: checks input of the function.
 * @needle: checks input of the function.
 *
 * Return: The function should return 0 (success).
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}

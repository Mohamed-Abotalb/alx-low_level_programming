#include <stdlib.h>
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

/**
 * *str_concat - it concatenates two strings.
 *
 * @s1: checks input of the function.
 * @s2: checks input of the function.
 *
 * Return: The function should return a pointer to the array or NULL.
*/

char *str_concat(char *s1, char *s2)
{
int firstSize, secondSize, count;
char *m;

if (s1 == NULL)
firstSize = "\0";

if (s2 == NULL)
secondSize = "\0";

firstSize = _strlen(s1);
secondSize = _strlen(s2);

m = malloc((firstSize + secondSize) *sizeof(char) + 1);

if (m == 0)
return (0);

for (count = 0; count <= firstSize + secondSize; count++)
{
if (count < firstSize)
{
m[count] = s1[count];
}
else
{
m[count] = s2[count - firstSize];
}
}

m[count] = '\0';

return (m);
}

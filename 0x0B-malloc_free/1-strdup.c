#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - it returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: checks input of the function.
 *
 * Return: The function should return a pointer to the array or NULL.
*/

char *_strdup(char *str)
{
int count, size;
char *m;

if (str == NULL)
{
return (NULL);
}

for (size = 0; str[size] != '\0'; size++)
;

/* +1 for the end of the string */
m = malloc(sizeof(*str) + 1);

if (m == 0)
{
return (NULL);
}
else
{
for (count = 0; count < size; count++)
{
m[count] = str[count];
}
}

return (m);
}

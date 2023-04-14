#include "main.h"

/**
 * _strcmp - it concatenates two strings.
 *
 * @s1: checks input of the function.
 * @s2: checks input of the function.
 *
 * Return: The function should return 1 if true or 0 is false.
*/

int _strcmp(char *s1, char *s2)
{
int equal = 0;

while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);

}

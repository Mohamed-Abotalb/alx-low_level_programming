#include "main.h"

/**
 * _strpbrk - it searches a string for any of a set of bytes.
 *
 * @s: checks input of the function.
 * @accept: checks input of the function.
 *
 * Return: The function should return the pointer to the byte in 's' that
 * matches one of the bytes in "accept".
*/

char *_strpbrk(char *s, char *accept)
{
int firstCount, secondCount;
char *ptr;

firstCount = 0;
while (s[firstCount] != '\0')
{

secondCount = 0;
while (accept[secondCount] != '\0')
{

if (accept[secondCount] != s[firstCount])
{
ptr = &s[firstCount];
return (ptr);
}

secondCount++;
}

}
firstCount++;

return (0);
}

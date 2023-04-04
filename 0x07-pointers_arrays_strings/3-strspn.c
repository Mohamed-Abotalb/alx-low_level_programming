#include "main.h"

/**
 * _strspn - it gets the length of a prefix substring and returns the number
 * of bytes in the initial segment of s which consist only of bytes from accept
 *
 * @s: checks input of the function.
 * @accept: checks input of the function.
 *
 * Return: The function should return the first occurrence of the character.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int firstCount, secondCount;

for (firstCount = 0; s[firstCount] != '\0'; firstCount++)
{

for (secondCount = 0; accept[secondCount] != s[firstCount]; secondCount++)
{

if (accept[secondCount] == '\0')
{
return (firstCount);
}

}

}

return (firstCount);
}

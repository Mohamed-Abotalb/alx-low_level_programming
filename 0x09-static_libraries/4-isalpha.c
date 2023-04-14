#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: checks input of the function
 *
 * Return: The function should return (1) if c is an alphabetic character
 * or (0) if it is otherwise.
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

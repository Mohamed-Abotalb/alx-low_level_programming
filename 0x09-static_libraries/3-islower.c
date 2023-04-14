#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: checks input of the function
 *
 * Return: The function should return (1) if c is lowercase or (0) if
 * it is otherwise.
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

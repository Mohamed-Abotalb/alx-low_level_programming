#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: checks input of the function.
 *
 * Return: The main function should return 0 (success).
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

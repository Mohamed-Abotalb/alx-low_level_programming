#include "main.h"

/**
 * _pow_recursion - it returns the value of x raised to the power of y.
 *
 * @x: checks input of the function.
 * @y: checks input of the function.
 *
 * Return: The function should return the value of x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
if (y != 0)
{
return (x *= _pow_recursion(x, y - 1));
}
}

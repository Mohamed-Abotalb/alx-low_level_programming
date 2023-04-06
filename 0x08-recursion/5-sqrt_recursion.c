#include "main.h"

/**
 * _sqrt_recursion - it returns the natural square root of a number.
 *
 * @n: checks input of the function.
 *
 * Return: The function should return the natural square root of the number.
*/

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - it returns the square root of a number.
 *
 * @n: checks input of the function.
 * @root: checks input of the function.
 *
 * Return: The function should return the natural square root of the number.
*/

int square(int n, int root)
{

if (root * root == n)
{
return (root);
}
else if (root * root < n)
{
return (square(n, root + 1));
}
else
{
return (-1);
}

}

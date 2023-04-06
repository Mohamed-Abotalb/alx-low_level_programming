#include "main.h"

/**
 * _pow_recursion - it returns the natural square root of a number.
 *
 * @n: checks input of the function.
 *
 * Return: The function should return the natural square root of the number.
*/

int square(int n, int sqrtVal);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - it returns the square root of a number.
 *
 * @n: checks input of the function.
 * @sqrtVal: checks input of the function.
 *
 * Return: The function should return the natural square root of the number.
*/

int square(int n, int sqrtVal)
{

if (sqrtVal * sqrtVal == n)
{
return(sqrtVal);
}
else if (sqrtVal * sqrtVal < n)
{
return(square(n, sqrtVal + 1));
}
else
{
return (-1);
}

}

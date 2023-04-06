#include "main.h"

/**
 * factorial - it returns the factorial of a given number.
 *
 * @n: checks input of the function.
 *
 * Return: The function should return the factorial of the number.
*/

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}

}

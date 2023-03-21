#include "main.h"

/**
 * print_sign - checks for the sign of a number.
 *
 * @n: checks input of the function
 *
 * Return: The function should return (1) if n is greater than 0, or (-1)
 * if it is lower than 0, or (0) if it is equal to 0.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

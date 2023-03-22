#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: checks input of the function.
 *
 * Return: The function should return the last digit of the number.
*/

int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;

return (n % 10);
}
else
{
return (n % 10);
}
}

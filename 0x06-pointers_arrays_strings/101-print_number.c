#include "main.h"

/**
 * print_number - it prints an integer.
 *
 * @n: checks input of the function.
 *
 * Return: void.
*/

void print_number(int n)
{
unsigned long num = n;

if (n < 0)
{
_putchar('-');
num = -n;
}

if (num / 10 != 0)
{
print_number(num / 10);
}

_putchar((num % 10) + '0');
}

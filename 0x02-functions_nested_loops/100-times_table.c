#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: checks input of the function.
*/

void print_times_table(int n)
{
int row, column, digit;

if (n <= 15 || n >= 0)
{
for (row = 0; row <= n; row++)
{
_putchar(48);
for (column = 1; column <= n; column++)
{
_putchar(',');
_putchar(' ');

digit = row * column;

if (digit < 10)
{
_putchar(' ');
}

if (digit < 100)
{
_putchar(' ');
}

if (digit >= 100)
{
_putchar((digit / 100) + 48);
_putchar((digit / 10) % 10 + 48);
}
else if (digit <= 99 && digit >= 10)
{
_putchar((digit / 10) + 48);
}
_putchar((digit % 10) + 48);
}
_putchar('\n');
}
}
}

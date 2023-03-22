#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
*/

void times_table(void)
{
int row, column, digit;

for (row = 0; row < 10; row++)
{
_putchar(48);
for (column = 1; column < 10; column++)
{
_putchar(',');
_putchar(' ');

digit = row * column;
if (digit < 10)
{
_putchar(' ');
}
else
{
_putchar((digit / 10) + 48);
}
_putchar((digit % 10) + 48);
}
_putchar('\n');
}
}

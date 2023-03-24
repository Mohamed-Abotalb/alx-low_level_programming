#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: checks input of the function.
 *
 * Return: void.
*/

void print_diagonal(int n)
{
int num, space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (num = 0; num < n; num++)
{
for (space = 0; space < num; space++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}

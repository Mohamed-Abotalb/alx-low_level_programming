#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: checks input of the function.
 *
 * Return: void.
*/

void print_square(int size)
{
int row, column;
if (size <= 0)
{
putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
putchar(35);
}
putchar('\n');
}
}
}

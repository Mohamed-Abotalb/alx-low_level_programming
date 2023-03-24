#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: checks input of the function.
 *
 * Return: void.
*/

void print_triangle(int size)
{
int hight, space;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (hight = 0; hight < size; hight++)
{
for (space = 0; space < hight; space++)
{
if (hight + space <= size)
{
_putchar(' ');
}
else
{
_putchar(35);
}
}
_putchar('\n');
}
}
}

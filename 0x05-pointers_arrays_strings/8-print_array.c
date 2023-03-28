#include "main.h"

/**
 * print_array - it prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: void.
*/

void print_array(int *a, int n)
{
int count;

for (count = 0; count < n; count++)
{
if (count != (n - 1))
{
printf("%d, ", a[count]);
}
else
{
printf("%d", a[count]);
}
}
_putchar('\n');
}

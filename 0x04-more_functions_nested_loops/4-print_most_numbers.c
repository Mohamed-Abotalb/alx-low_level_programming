#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * without printing numbers 2 and 4.
 *
 * Return: void.
*/

void print_most_numbers(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
if (digit != 2 || digit != 4)
{
_putchar(digit + 48);
}
}
_putchar('\n');
}

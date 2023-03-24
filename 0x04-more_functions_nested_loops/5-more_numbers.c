#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void.
*/

void more_numbers(void)
{
int num, index;

for (index = 0; index < 10; index++)
{
for (num = 0; num <= 14; num++)
{
_putchar(num + 48);
}
_putchar('\n');
}
_putchar('\n');
}

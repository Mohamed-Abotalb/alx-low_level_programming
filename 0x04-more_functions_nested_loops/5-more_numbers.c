#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void.
*/

void more_numbers(void)
{
int num, index, count;

for (index = 0; index < 10; index++)
{
for (count = 0; count <= 14; count++)
{
num = count;
if (count > 9)
{
_putchar(1 + 48);
num = count % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}

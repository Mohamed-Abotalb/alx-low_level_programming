#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: check input of the function.
*/

void print_to_98(int n)
{
int number;
if (n > 98)
{
for (number = n; number > 98; number--)
{
printf("%d, ", number);
}
}
else
{
for (number = n; number < 98; number++)
{
printf("%d, ", number);
}
}
printf("98\n");
}

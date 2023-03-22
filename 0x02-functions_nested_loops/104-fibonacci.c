#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
unsigned long num1 = 1, num2 = 2, num3, index;

printf("%lu, %lu, ", num1, num2);
for (index = 3; index <= 98; index++)
{
num3 = num1 + num2;
printf("%lu", num3);
if (index != 98)
{
printf(", ");
}
num1 = num2;
num2 = num3;
}
putchar('\n');

return (0);
}

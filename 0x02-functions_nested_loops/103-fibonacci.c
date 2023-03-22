#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function prints the sum of the even-valued terms,
 * followed by a new line and the terms should not exceed 4,000,000
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
unsigned long num1 = 1, num2 = 2, num3 = 0, sum = 2;

while (num3 < 4000000)
{
if (num3 % 2 == 0)
{
sum += num3;
}
num3 = num1 + num2;
num1 = num2;
num2 = num3;
}
printf("%lu\n", sum);

return (0);
}

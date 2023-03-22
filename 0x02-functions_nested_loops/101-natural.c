#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function computes and prints the sum of all
 * the multiples of 3 or 5 below 1024.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int naturalNum, sum = 0;

for (naturalNum = 3; naturalNum < 1024; naturalNum++)
{
if (naturalNum % 3 == 0 || naturalNum % 5 == 0)
{
sum += naturalNum;
}
}
printf("%d\n", sum);

return (0);
}

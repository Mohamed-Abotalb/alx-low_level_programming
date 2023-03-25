#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: The main function should return 0 (success).
*/

int main(void)
{
unsigned long num = 612852475143, largestPrime;
int i;
for (i = 2; i <= num; ++i)
{
if (num % i == 0)
{
largestPrime = i;
}
}
printf("%lu\n", largestPrime);
return (0);
}

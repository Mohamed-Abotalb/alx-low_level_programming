#include "main.h"

/**
 * main - prints numbers from 1 to 100 followed by a newline,
 * numbers multiples of 3 print Fizz,
 * numbers multiples of 5 print Buzz,
 * numbers multiples of 3 and 5 print FizzBuzz,
 *
 * Return: The main function should return 0 (success).
*/

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && !(num % 5 == 0))
printf("Fizz");

else if (num % 5 == 0 && !(num % 3 == 0))
printf("Buzz");

else if (num % 5 == 0 && num % 3 == 0)
printf("FizzBuzz");

else
printf("%d", num);

if (num != 100)
putchar(' ');

else
putchar('\n');
}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: The main function gets a random number and check its last digit
 * is greater than 5 or less than 6 and not 0 or is equal to 0
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}

return (0);
}

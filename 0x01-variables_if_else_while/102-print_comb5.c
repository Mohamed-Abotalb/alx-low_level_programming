#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all possible combinations
 * of two two-digit numbers from 0 to 99 using putchar function.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int firstDigit, secondDigit;

for (firstDigit = 0; firstDigit <= 99; firstDigit++)
{

for (secondDigit = firstDigit; secondDigit <= 99; secondDigit++)
{

if (firstDigit != secondDigit)
{
putchar((firstDigit / 10) + 48);
putchar((firstDigit % 10) + 48);
putchar(' ');
putchar((secondDigit / 10) + 48);
putchar((secondDigit % 10) + 48);

if (firstDigit != 98 || secondDigit != 99)
{
putchar(',');
putchar(' ');
}

}

} /* End of second for loop*/

} /* End of first for loop */

putchar('\n');

return (0);
}

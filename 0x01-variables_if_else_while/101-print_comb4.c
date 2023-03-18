#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all possible different
 * combinations of three digits from 0 to 9 using putchar function.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int firstDigit, secondDigit, thirdDigit;

for (firstDigit = 0; firstDigit < 8; firstDigit++)
{

for (secondDigit = firstDigit + 1; secondDigit < 9; secondDigit++)
{

for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
{
putchar(firstDigit + 48);
putchar(secondDigit + 48);
putchar(thirdDigit + 48);
if (firstDigit == 7)
{
break;
}
putchar(',');
putchar(' ');
} /* End of third for loop*/

} /* End of second for loop*/

} /* End of first for loop*/

putchar('\n');

return (0);
}

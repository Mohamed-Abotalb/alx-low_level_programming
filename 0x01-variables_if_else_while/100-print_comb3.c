#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all possible different
 * combinations of two digits from 0 to 9 using putchar function.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int firstDigit, secondDigit;

for (firstDigit = 0; firstDigit < 9; firstDigit++)
{

for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{
putchar(firstDigit + 48);
putchar(secondDigit + 48);
if (firstDigit == 8)
{
break;
}
putchar(',');
putchar(' ');
}

}
putchar('\n');

return (0);
}
